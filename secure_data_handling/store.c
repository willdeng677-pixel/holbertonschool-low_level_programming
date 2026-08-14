#include <stdlib.h>
#include <string.h>
#include "store.h"

/**
 * store_init - initializes a store
 * @st: store to initialize
 *
 * Return: nothing
 */
void store_init(store_t *st)
{
	if (st != NULL)
		st->head = NULL;
}

/**
 * node_create - creates a store node
 * @s: session to store
 *
 * Return: pointer to new node, or NULL if it fails
 */
static node_t *node_create(session_t *s)
{
	node_t *n;

	n = malloc(sizeof(*n));
	if (n == NULL)
		return (NULL);

	n->sess = s;
	n->next = NULL;

	return (n);
}

/**
 * store_add - adds a session to the store
 * @st: store
 * @s: session to add
 *
 * Return: 1 if successful, 0 otherwise
 */
int store_add(store_t *st, session_t *s)
{
	node_t *n;
	node_t *cur;

	if (st == NULL || s == NULL || s->id == NULL)
		return (0);

	cur = st->head;
	while (cur != NULL)
	{
		if (cur->sess != NULL && cur->sess->id != NULL &&
			strcmp(cur->sess->id, s->id) == 0)
			return (0);

		cur = cur->next;
	}

	n = node_create(s);
	if (n == NULL)
		return (0);

	n->next = st->head;
	st->head = n;

	return (1);
}

/**
 * store_get - retrieves a session by ID
 * @st: store
 * @id: session ID
 *
 * Return: session pointer, or NULL if not found
 */
session_t *store_get(store_t *st, const char *id)
{
	node_t *cur;

	if (st == NULL || id == NULL)
		return (NULL);

	cur = st->head;
	while (cur != NULL)
	{
		if (cur->sess != NULL && cur->sess->id != NULL &&
			strcmp(cur->sess->id, id) == 0)
			return (cur->sess);

		cur = cur->next;
	}

	return (NULL);
}

/**
 * store_delete - removes a session from the store
 * @st: store
 * @id: session ID
 * @out: pointer to receive the removed session
 *
 * Return: 1 if successful, 0 otherwise
 */
int store_delete(store_t *st, const char *id, session_t **out)
{
	node_t *cur;
	node_t *prev;

	if (st == NULL || id == NULL)
		return (0);

	prev = NULL;
	cur = st->head;

	while (cur != NULL)
	{
		if (cur->sess != NULL && cur->sess->id != NULL &&
			strcmp(cur->sess->id, id) == 0)
		{
			if (prev != NULL)
				prev->next = cur->next;
			else
				st->head = cur->next;

			if (out != NULL)
				*out = cur->sess;
			else
				session_destroy(cur->sess);

			free(cur);
			return (1);
		}

		prev = cur;
		cur = cur->next;
	}

	return (0);
}

/**
 * store_destroy - destroys a store and all its sessions
 * @st: store
 *
 * Return: nothing
 */
void store_destroy(store_t *st)
{
	node_t *cur;
	node_t *next;

	if (st == NULL)
		return;

	cur = st->head;

	while (cur != NULL)
	{
		next = cur->next;

		session_destroy(cur->sess);
		free(cur);

		cur = next;
	}

	st->head = NULL;
}
