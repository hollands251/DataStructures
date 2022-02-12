#ifndef _STACK_H
#define _STACK_H

#include "nodes.h"

typedef struct stack
{
	Node * head;
	int push;
	int poped;
	int size;
} Stack;

Stack * makeStack();
Stack * freeStack();
Stack * push( Stack * stack , int * pointer );
Stack * pop( Stack * stack );

#endif
