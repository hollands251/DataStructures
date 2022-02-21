#ifndef _QUEUE_H
#define _QUEUE_H

#include "Nodes.h"

typedef struct queue 
{
    SLNode_t * head;
    SLNode_t * tail;
    int dequeued;
    int size;
} Queue_t; 

Queue_t * makeQueue();
Queue_t * freeQueue( Queue_t * queue );
Queue_t * dequeue( Queue_t * queue );
Queue_t * enqueue( Queue_t * queue , int payload );

#endif
