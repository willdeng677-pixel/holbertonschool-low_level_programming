#include <stdio.h>
#include <string.h>
#include "session.h"

int main(void)
{
	session_t *session;
	const unsigned char data[] = "hello";
	const unsigned char new_data[] = "updated";

	session = session_create("session1", 1001,
			data, strlen((const char *)data));

	if (session == NULL)
	{
		printf("session_create failed\n");
		return (1);
	}

	printf("Session created: %s\n", session->id);

	if (!session_set_data(session, new_data,
			strlen((const char *)new_data)))
	{
		session_destroy(session);
		return (1);
	}

	printf("Session data updated\n");

	session_destroy(session);

	return (0);
}
