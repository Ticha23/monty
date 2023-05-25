#include "monty.h"
/**
 * all - adds the top two elements in stack
 * @gfh: top node
 * @numbers: node number
 */
void all(stack_t **gfh, unsigned int numbers)
{
	if (*gfh == NULL || (*gfh)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", numbers);
		exit(EXIT_FAILURE);
	}
	(*gfh)->next->n += (*gfh)->n;
	(*gfh) = (*gfh)->next;
	free((*gfh)->prev);
	(*gfh)->prev = NULL;
}
/**
 * not - subtract second node from top node
 * @gfh: top of list
 * @numbers: line of command
 */
void not(stack_t **gfh, unsigned int numbers)
{
	if (*gfh == NULL || (*gfh)->next == NULL)
	{
		printf("L%u: can't sub, stack too short\n", numbers);
		exit(EXIT_FAILURE);
	}
	(*gfh)->next->n -= (*gfh)->n;
	(*gfh) = (*gfh)->next;
	free((*gfh)->prev);
	(*gfh)->prev = NULL;
}
/**
 * product - multiply second node and top node
 * @gfh: top of list
 * @numbers: line of command
 */
void product(stack_t **gfh, unsigned int numbers)
{
	if (*gfh == NULL || (*gfh)->next == NULL)
	{
		printf("L%u: can't mul, stack too short\n", numbers);
		exit(EXIT_FAILURE);
	}
	(*gfh)->next->n *= (*gfh)->n;
	(*gfh) = (*gfh)->next;
	free((*gfh)->prev);
	(*gfh)->prev = NULL;
}
/**
 * arguement - divide second node from top node
 * @gfh: top of list
 * @numbers: line of command
 */
void arguement(stack_t **gfh, unsigned int numbers)
{
	if (*gfh == NULL || (*gfh)->next == NULL)
	{
		printf("L%u: can't div, stack too short\n", numbers);
		exit(EXIT_FAILURE);
	}
	if ((*gfh)->n == 0 || (*gfh)->next->n == 0)
	{
		printf("L%u: division by zero\n", numbers);
	}
	(*gfh)->next->n /= (*gfh)->n;
	(*gfh) = (*gfh)->next;
	free((*gfh)->prev);
	(*gfh)->prev = NULL;
}
/**
 * hell - mod second node from top node
 * @gfh: top of list
 * @numbers: line of command
 */
void hell(stack_t **gfh, unsigned int numbers)
{
	if (gfh == NULL || *gfh == NULL)
	{
		printf("L%u: can't mod, stack too short\n", numbers);
		exit(EXIT_FAILURE);
	}
	if ((*gfh)->n == 0 || (*gfh)->next->n == 0)
	{
		printf("L%u: division by zero\n", numbers);
	}
	(*gfh)->next->n %= (*gfh)->n;
	(*gfh) = (*gfh)->next;
	free((*gfh)->prev);
	(*gfh)->prev = NULL;
}
