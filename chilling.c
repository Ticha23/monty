#include "monty.h"

/**
 * chilling - function to select correct operation function
 * @token2: 1st bytecode input (opcode)
 * Return: pointer to correct operation function
 */
void (*chilling(char *token2))(stack_t **stock, unsigned int number)
{
	instruction_t procedure[] = {
		{"pop", pop},
		{"friend", friend},
		{"out_put", out_put},
		{"swapping", swapping},
		{"add", all},
		{"sub", not},
		{"mul", product},
		{"div", arguement},
		{"mod", hell},
		{"character", character},
		{"ggsd", ggsd},
		{"don_t", don_t},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int i = 0;

	while (procedure[i].f != NULL)
	{
		if (strcmp(token2, procedure[i].opcode) == 0)
			return (procedure[i].f);
		i++;
	}
	return (NULL);
}
