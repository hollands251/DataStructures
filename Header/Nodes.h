#ifndef _NODES_H
#define _NODES_H

typedef struct singlyLinkedNode
{
    int payload;
    struct singlyLinkedNode * nextNode;
} SLNode_t;

typedef struct doublyLinkedNode
{
    
} DLNode_t;

typedef struct multiLinkedNode
{
    
} MLNode_t;

SLNode_t * makeSinglyLinkedNode( SLNode_t * node , int payload );
SLNode_t * freeSinglyLinkedNode( SLNode_t * node );

#endif
