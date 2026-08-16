#include <stdlib.h>
#include <string.h>
#include "session.h"

/**
 * session_create - creates a new session
 * @id: session ID
 * @uid: user ID
 * @data: session data
 * @data_len: length of session data
 *
 * Return: pointer to new session, or NULL on failure
 */
session_t *session_create(const char *id, unsigned int uid,
			  const unsigned char *data, size_t data_len)
{
	session_t *s;
	size_t id_len;

	if (id == NULL)
		return (NULL);

	s = malloc(sizeof(*s));
	if (s == NULL)
		return (NULL);

	id_len = strlen(id);

	s->id = malloc(id_len + 1);
	if (s->id == NULL)
	{
		free(s);
		return (NULL);
	}

	memcpy(s->id, id, id_len + 1);

	s->uid = uid;
	s->data = NULL;
	s->data_len = 0;

	if (data_len > 0)
	{
		if (data == NULL)
		{
			free(s->id);
			free(s);
			return (NULL);
		}

		s->data = malloc(data_len);
		if (s->data == NULL)
		{
			free(s->id);
			free(s);
			return (NULL);
		}

		memcpy(s->data, data, data_len);
		s->data_len = data_len;
	}

	return (s);
}

/**
 * session_set_data - replaces session data
 * @s: session
 * @data: new data
 * @data_len: length of new data
 *
 * Return: 1 if successful, 0 otherwise
 */
int session_set_data(session_t *s, const unsigned char *data,
		     size_t data_len)
{
	unsigned char *tmp;

	if (s == NULL)
		return (0);

	if (data_len == 0)
	{
		free(s->data);
		s->data = NULL;
		s->data_len = 0;
		return (1);
	}

	if (data == NULL)
		return (0);

	tmp = realloc(s->data, data_len);
	if (tmp == NULL)
		return (0);

	s->data = tmp;
	memcpy(s->data, data, data_len);
	s->data_len = data_len;

	return (1);
}

/**
 * session_destroy - destroys a session
 * @s: session
 *
 * Return: nothing
 */
void session_destroy(session_t *s)
{
	if (s == NULL)
		return;

	free(s->id);
	free(s->data);
	free(s);
}
