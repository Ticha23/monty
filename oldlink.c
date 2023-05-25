#include "monty.h"
/**
 * end_note - add node to front of doubly linked list
 * @hjg: pointer to head of list
 * @n: node data
 * Return: 0 if success, -1 if failed
 */
int end_note(stack_t **hjg, int n)
{
	stack_t *tghf;

	if (!hjg)
		return (-1);

	/* malloc and set tghf node data */
	tghf = malloc(sizeof(struct stack_s));
	if (!tghf)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	tghf->n = n;

	/* account for empty linked list */
	if (*hjg == NULL)
	{
		*hjg = tghf;
		tghf->next = NULL;
		tghf->prev = NULL;
	}
	else /* insert to front */
	{
		tghf->next = *hjg;
		(*hjg)->prev = tghf;
		*hjg = tghf;
	}
	return (0);
}
/**
 * rm_notes - deletes node at end of doubly linked list
 * @hjg: pointer to head of doubly linked list
 */
void rm_notes(stack_t **hjg)
{
	stack_t *del = NULL;

	/* account for only one node in list */
	del = *hjg;
	if ((*hjg)->next == NULL)
	{
		*hjg = NULL;
		free(del);
	}
	else /* else delete front, and link correctly */
	{
		*hjg = (*hjg)->next;
		(*hjg)->prev = NULL;
		free(del);
	}
}
/**
 * free_me - frees a doubly linked list with only int data, no strings
 * @hjg: pointer to head of list
 */
void free_me(stack_t **hjg)
{
	/* return if empty list */
	if (!hjg)
		return;

	while (*hjg && (*hjg)->next)
	{
		*hjg = (*hjg)->next;
		free((*hjg)->prev);
	}
	free(*hjg);
}
