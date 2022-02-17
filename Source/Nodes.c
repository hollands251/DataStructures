#ifndef _NODES_C
#define	_NODES_C

#include <stdlib.h>
#include "Header/Nodes.h"

SLNode_t * makeSinglyLinkedNode( SLNode_t * node , int payload )
{
	SLNode_t * newNode 	= malloc( sizeof(SLNode_t) );
	newNode -> payload	= payload;
	newNode -> nextNode	= node;

	return newNode;
}


SLNode_t * freeSinglyLinkedNode( SLNode_t * node )
{
	SLNode_t * nodeToFree 	= node;
	node 			= node -> nextNode;
	
	free( nodeToFree );

	return node;
}

#endif
