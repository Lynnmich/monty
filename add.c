#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _add -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @line_count: amount of lines
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_count)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_count);/*For top node*/
	(*stack)->n = result;
}
