#ifndef _STACK_H
#define _STACK_H

#include "nodes.h"

typedef struct stack
{
	SLNode * head;
	int popped;
	int size;
} Stack;

Stack * makeStack();
Stack * freeStack();
Stack * push( Stack * stack , int pointer );
Stack * pop( Stack * stack );

#endif
