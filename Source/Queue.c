#ifndef _QUEUE_C
#define _QUEUE_C

#include <stdlib.h>
#include "Header/Queue.h"
#include "Nodes.c"

Queue_t * makeQueue()
{
    Queue_t * queue = malloc( sizeof(Queue_t) );
    queue -> tail = makeSinglyLinkedNode( NULL , 0 );
    queue -> size = 0;                                      // head and tail do not count
    queue -> dequeued = 0;

    return queue;
}


Queue_t * freeQueue( Queue_t * queue )
{
    int i;

    for ( i = 0 ; i < queue -> size ; i++ ) {
        queue = dequeue( queue );
    }

    freeSinglyLinkedNode( queue -> head );
    freeSinglyLinkedNode( queue -> head );
    free( queue );

    return NULL;
}

Queue_t * dequeue( Queue_t * queue )
{
    SLNode_t * deprecatedNode = queue -> tail;

    int i;
    for ( i = 0 ; i < queue -> size ; i++ ) 
         deprecatedNode = deprecatedNode -> nextNode;

    queue -> dequeued = deprecatedNode -> payload;
    queue -> size--;
    freeSinglyLinkedNode( deprecatedNode );                       

    return queue;
}


Queue_t * enqueue( Queue_t * queue , int payload ) 
{
    SLNode_t * newNode = makeSinglyLinkedNode( queue -> tail -> nextNode , payload );
    queue -> tail -> nextNode = newNode;
    queue -> size++;

    return queue;
}

#endif
