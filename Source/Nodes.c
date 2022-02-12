#include <stdio.h>
#include <stdlib.h>

#include "Header/Nodes.h"

SLNode * makeSinglyLinkedNode( SLNode * node , int payload )
{
	SLNode * newNode 	= malloc( sizeof(SLNode) );
	newNode -> payload	= payload;
	newNode -> nextNode	= node;

	return newNode;
}


SLNode * freeSinglyLinkednode( SLNode * node )
{
	nodeToFree 	= node;
	node 		= node -> nextNode;
	
	free( nodeToFree );

	return node;
}
