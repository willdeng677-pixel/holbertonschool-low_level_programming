#include <stdio.h>
#include <string.h>
#include "session.h"
#include "store.h"

int main(void)
{
	store_t store;
	session_t *s1;
	session_t *removed;
	const unsigned char data[] = "test";

	store_init(&store);

	/* Create a session */
	s1 = session_create("session1", 1001, data, strlen((const char *)data));
	if (s1 == NULL)
	{
		printf("FAIL: session_create\n");
		return (1);
	}

	printf("Session created: %s\n", s1->id);

	/* Add session to store */
	if (!store_add(&store, s1))
	{
		printf("FAIL: store_add\n");
		session_destroy(s1);
		return (1);
	}

	/* Get session */
	if (store_get(&store, "session1") == NULL)
	{
		printf("FAIL: store_get\n");
		store_destroy(&store);
		return (1);
	}

	/* Update session data */
	if (!session_set_data(s1, data, strlen((const char *)data)))
	{
		printf("FAIL: session_set_data\n");
		store_destroy(&store);
		return (1);
	}

	printf("Session data updated\n");

	/*
	 * Delete the session.
	 * Ownership is transferred to removed.
	 */
	removed = NULL;

	if (!store_delete(&store, "session1", &removed))
	{
		printf("FAIL: store_delete\n");
		store_destroy(&store);
		return (1);
	}

	/*
	 * The store no longer owns removed.
	 * The caller must destroy it.
	 */
	if (removed != NULL)
		session_destroy(removed);

	/* Destroy any remaining sessions/nodes */
	store_destroy(&store);

	return (0);
}
