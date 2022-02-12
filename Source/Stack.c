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
		stack -> head = freeSLNode( stack -> head );

	free( stack );

	return NULL;
}


Stack * push( Stack -> stack , int payload )
{
}
