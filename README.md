# 0x19. C - Stacks, Queues - LIFO, FIFO

## Description

### The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

***Here is an overview of the tasks:***

**Define the necessary data structures:** stack_t (doubly linked list representation of a stack) and instruction_t (opcode and its corresponding function).

**Compilation & Output:** Your code should be compiled using the following command: gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty. Any output should be printed on stdout, and any error message should be printed on stderr.

**Environment:** Ubuntu 14.04 LTS via Vagrant in VirtualBox and compiled with GCC version 4.8.4

**Monty ByteCode Files:** Monty ByteCode files have the .m extension and contain instructions that manipulate the stack. Each instruction is on a separate line and can have spaces before or after the opcode and its argument. Blank lines are allowed, and any additional text after the opcode or its argument is ignored.

**Task 0:** Implement the push and pall opcodes. The push opcode pushes an element to the stack, and the pall opcode prints all the values on the stack.

**Task 1:** Implement the pint opcode, which prints the value at the top of the stack.

**Task 2:** Implement the pop opcode, which removes the top element of the stack.

**Task 3:** Implement the swap opcode, which swaps the top two elements of the stack.

**Task 4:** Implement the add opcode, which adds the top two elements of the stack.

**Task 5:** Implement the nop opcode, which does nothing.

**Task 6:** Implement the sub opcode, which subtracts the top element from the second top element of the stack.

**Task 7:** Implement the div opcode, which divides the second top element by the top element of the stack.

**Task 8:** Implement the mul opcode, which multiplies the second top element with the top element of the stack.

**Task 9:** Implement the mod opcode, which computes the remainder of the division of the second top element by the top element of the stack.

**Task 10:** Implement comments. Lines starting with # should be treated as comments and ignored.

**Task 11:** Implement the pchar opcode, which prints the character at the top of the stack.

**Task 12:** Implement the pstr opcode, which prints the string starting from the top of the stack.
