#ifndef _NODES_H
#define _NODES_H

typedef struct singlyLinkedNode
{
    void * payload;
    singlyLinkedNode * nextNode;
} SLNode_t;

typedef struct doublyLinkedNode
{
    
} DLNode_t;

typedef struct multiLinkedNode
{
    
} SLNode_t;

SLNode * makeSinglyLinkedNode( SLNode * node , void * payload );
SLNode * freesinglyLinkedNode( SLNode * node );

#endif
