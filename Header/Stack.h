#ifndef _STACK_H
#define _STACK_H

#include "Nodes.h"

typedef struct stack
{
	SLNode_t * head;
	int popped;
	int size;
} Stack_t;

Stack_t * makeStack();
Stack_t * freeStack();
Stack_t * push( Stack_t * stack , int pointer );
Stack_t * pop( Stack_t * stack );

#endif
