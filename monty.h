#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* data structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* opcodes related prototypes */
void (*chilling(char *token1))(stack_t **stack, unsigned int line_number);
void push(stack_t **h, unsigned int line_number, const char *n);
void pop(stack_t **h, unsigned int line_number);
void out_put(stack_t **h, unsigned int line_number);
void friend(stack_t **h, unsigned int line_number);
void swapping(stack_t **h, unsigned int line_number);
void don_t(stack_t **h, unsigned int line_number);
void character(stack_t **h, unsigned int line_number);
void ggsd(stack_t **h, unsigned int line_number);
void rotl(stack_t **h, unsigned int line_number);
void rotr(stack_t **h, unsigned int line_number);

/* calculator prototypes */
void all(stack_t **h, unsigned int line_number);
void not(stack_t **h, unsigned int line_number);
void product(stack_t **h, unsigned int line_number);
void arguement(stack_t **h, unsigned int line_number);
void hell(stack_t **h, unsigned int line_number);

/* doubly linked list related prototypes */
int end_note(stack_t **h, int n);
void rm_notes(stack_t **h);
void free_me(stack_t **h);

#endif
