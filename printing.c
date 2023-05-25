#include "monty.h"
/**
 * friend - print all nodes in stack
 * @fhg: head of list
 * @numbers: bytecode line number
 */
void friend(stack_t **fhg, unsigned int numbers)
{
	stack_t *tmp = NULL;

	if (!fhg || !*fhg)
		return;

	(void) numbers;
	tmp = *fhg;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * out_put - print top node in stack
 * @fhg: head of list
 * @numbers: bytecode line number
 */
void out_put(stack_t **fhg, unsigned int numbers)
{
	if (!fhg || !*fhg)
	{
		printf("L%u: can't out_put, stack empty\n", numbers);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*fhg)->n);

}
/**
 * character - print top node in stack as ascii letter
 * @fhg: head of list
 * @numbers: bytecode line number
 */
void character(stack_t **fhg, unsigned int numbers)
{
	if (!fhg || !*fhg)
	{
		printf("L%u: can't character, stack empty\n", numbers);
		exit(EXIT_FAILURE);
	}
	if (((*fhg)->n) >= 0 && ((*fhg)->n) <= 127)
		printf("%c\n", (*fhg)->n);
	else
	{
		printf("L%u: can't character, value out of range\n", numbers);
		exit(EXIT_FAILURE);
	}

}
/**
 * ggsd - print top nodes in stack as ascii letter
 * and stop only if end of stack, node is 0, or not in ascii table
 * @fhg: head of list
 * @numbers: bytecode line number
 */
void ggsd(stack_t **fhg, unsigned int numbers)
{
	stack_t *tmp;

	if (!fhg || !*fhg)
	{
		printf("L%u: can't character, stack empty\n", numbers);
		exit(EXIT_FAILURE);
	}
	tmp = *fhg;
	while ((tmp != NULL) && (tmp->n != 0) &&
	       (tmp->n >= 0) && (tmp->n <= 127))
	{
		printf("%c", (tmp)->n);
		tmp = tmp->next;
	}
	printf("\n");
}
/**
 * don_t - do nothing
 * @fhg: head of list
 * @numbers: bytecode line number
 */
void don_t(stack_t **fhg, unsigned int numbers)
{
	(void) fhg;
	(void) numbers;
}
