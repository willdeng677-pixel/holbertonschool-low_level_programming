#include <stdlib.h>
#include <string.h>
#include "store.h"

void store_init(store_t *st)
{
	if (st != NULL)
		st->head = NULL;
}

static node_t *node_create(session_t *s)
{
	node_t *n;

	if (s == NULL)
		return (NULL);

	n = malloc(sizeof(*n));
	if (n == NULL)
		return (NULL);

	n->sess = s;
	n->next = NULL;

	return (n);
}

int store_add(store_t *st, session_t *s)
{
	node_t *n;
	node_t *cur;

	if (st == NULL || s == NULL || s->id == NULL)
		return (0);

	cur = st->head;

	while (cur != NULL)
	{
		if (cur->sess != NULL && cur->sess->id != NULL)
		{
			if (strcmp(cur->sess->id, s->id) == 0)
				return (0);
		}

		cur = cur->next;
	}

	n = node_create(s);
	if (n == NULL)
		return (0);

	n->next = st->head;
	st->head = n;

	return (1);
}

session_t *store_get(store_t *st, const char *id)
{
	node_t *cur;

	if (st == NULL || id == NULL)
		return (NULL);

	cur = st->head;

	while (cur != NULL)
	{
		if (cur->sess != NULL && cur->sess->id != NULL)
		{
			if (strcmp(cur->sess->id, id) == 0)
				return (cur->sess);
		}

		cur = cur->next;
	}

	return (NULL);
}

int store_delete(store_t *st, const char *id, session_t **out)
{
	node_t *cur;
	node_t *prev;

	if (st == NULL || id == NULL)
		return (0);

	if (out != NULL)
		*out = NULL;

	prev = NULL;
	cur = st->head;

	while (cur != NULL)
	{
		if (cur->sess != NULL && cur->sess->id != NULL)
		{
			if (strcmp(cur->sess->id, id) == 0)
			{
				if (prev == NULL)
					st->head = cur->next;
				else
					prev->next = cur->next;

				if (out != NULL)
				{
					*out = cur->sess;
				}
				else
				{
					session_destroy(cur->sess);
				}

				free(cur);
				return (1);
			}
		}

		prev = cur;
		cur = cur->next;
	}

	return (0);
}

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

		if (cur->sess != NULL)
			session_destroy(cur->sess);

		free(cur);

		cur = next;
	}

	st->head = NULL;
}
