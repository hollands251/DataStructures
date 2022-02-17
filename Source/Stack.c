#ifndef	_STACK_C
#define _STACK_C

#include <stdlib.h>
#include "Header/Stack.h"
#include "Nodes.c"

Stack_t * makeStack()
{
	Stack_t * stack 	= malloc( sizeof(Stack_t) );
	stack -> head 	= NULL;
	stack -> popped	= 0;
	stack -> size	= 0;

	return stack;
}


Stack_t * freeStack( Stack_t * stack )
{
	for ( int i = 0 ; i < stack -> size ; i++ )
	{
		stack -> head = freeSinglyLinkedNode( stack -> head );
	}

	free( stack );

	return NULL;
}


Stack_t * push( Stack_t * stack , int payload )
{
	SLNode_t * newHead 	= malloc( sizeof(SLNode_t) );
	newHead -> nextNode  	= stack -> head;
	newHead -> payload	= payload;
	stack -> head		= newHead;
	stack -> size		= ( stack->size += 1 );

	return stack;
}


Stack_t * pop( Stack_t * stack )
{
	SLNode_t * deprecatedNode 	= stack -> head;
	stack -> head 			= deprecatedNode -> nextNode;
	stack -> popped			= deprecatedNode -> payload;
	stack -> size			= ( stack->size -= 1 );

	free( deprecatedNode );

	return stack;
}

#endif
