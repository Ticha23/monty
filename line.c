#include "monty.h"
/**
 * swapping - swapping locations of previous stack with the top stack
 * @ty: node to be swapped
 * @line_number: node number
 */
void swapping(stack_t **ty, unsigned int line_number)
{
	stack_t *trg = NULL;

	if (*ty == NULL || (*ty)->next == NULL)
	{
		printf("L%u: can't swapping, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	trg = (*ty)->next;
	if (trg->next != NULL)
	{
		(*ty)->next = trg->next;
		(*ty)->next->prev = *ty;

	}
	else
	{
		trg->prev->prev = trg;
		trg->prev->next = NULL;
	}
	trg->prev = NULL;
	trg->next = *ty;
	(*ty) = trg;
}
/**
 * rotl - rotate so top of stack becomes last one, second becomes first one
 * @tl: node to be rotated
 * @line_number: node number
 */
void rotl(stack_t **tl, unsigned int line_number)
{
	stack_t *ghj;

	(void) line_number;

	if ((*tl)->next != NULL)
	{
		ghj = *tl;
		while (ghj->next != NULL)
			ghj = ghj->next;
		(*tl)->prev = ghj;
		ghj->next = *tl;
		(*tl)->next->prev = NULL;
		*tl = (*tl)->next;
		ghj->next->next = NULL;
	}
}
/**
 * rotr - rotate so only bottom node of stack becomes first one
 * @xl: node to be rotated
 * @line_number: node number
 */
void rotr(stack_t **xl, unsigned int line_number)
{
	stack_t *drtg;

	(void) line_number;

	if ((*xl)->next != NULL)
	{
		drtg = *xl;
		while (drtg->next != NULL)
			drtg = drtg->next;
		(*xl)->prev = drtg;
		drtg->next = *xl;
		drtg->prev->next = NULL;
		drtg->prev = NULL;
		(*xl) = (*xl)->prev;
	}
}
