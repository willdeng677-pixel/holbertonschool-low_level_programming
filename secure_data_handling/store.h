#ifndef STORE_H
#define STORE_H

#include "session.h"

typedef struct node
{
	session_t *sess;
	struct node *next;
} node_t;

typedef struct store
{
	node_t *head;
} store_t;

void store_init(store_t *st);
int store_add(store_t *st, session_t *s);
session_t *store_get(store_t *st, const char *id);
int store_delete(store_t *st, const char *id, session_t **out);
void store_destroy(store_t *st);

#endif /* STORE_H */
