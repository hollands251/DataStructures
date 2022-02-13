#include <stdio.h>
#include <stdlib.h>

#include "Header/Stack.h"
#include "Header/Nodes.h"

Stack * makeStack()
{
	Stack * stack 	= malloc( sizeof(Stack) );
	stack -> head 	= NULL;
	stack -> push 	= NULL;
	stack -> popped	= NULL;

	return stack;
}


Stack * freeStack( Stack * stack )
{
	for ( int i = 0 ; i < stack -> size ; i++ )
	{
		stack -> head = freeSLNode( stack -> head );
	}

	free( stack );

	return NULL;
}


Stack * push( Stack * stack , int payload )
{
	SLNode * newHead 	= malloc( sizeof(SLNode) );
	newHead -> nextNode  	= stack -> head;
	newHead -> payload	= payload;
	stack -> head		= newHead;

	return stack;
}


Stack * pop( Stack * stack )
{
	SLNode * deprecatedNode = stack -> head;
	stack -> head 		= deprecatedNode -> nextNode;
	stack -> popped		= deprecatedNode -> payload;

	free( deprecatedNode );

	return stack;
}
