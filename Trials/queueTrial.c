#include <stdio.h>
#include "../Source/Queue.c"

#define _debug_ printf

int main()
{

    Queue_t * queue = makeQueue();

    queue = enqueue( queue , 5 );
    queue = enqueue( queue , 6 );
    queue = enqueue( queue , 7 );
    queue = enqueue( queue , 8 );


    queue = dequeue( queue );
    printf( "%d\n" , queue -> dequeued );
    queue = dequeue( queue );
    printf( "%d\n" , queue -> dequeued );
    queue = dequeue( queue );
    printf( "%d\n" , queue -> dequeued);
    queue = dequeue( queue );
    printf( "%d\n" , queue -> dequeued );

    freeQueue( queue );

    return 0;
}
