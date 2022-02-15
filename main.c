#include <stdio.h>

#include "Source/Stack.c"

int main()
{
	Stack_t * stack = makeStack();

	stack = push( stack , 5 );
	stack = pop( stack );

	printf( "The popped value is: %d \n" , stack -> popped  );
	
	freeStack( stack );

	return 0;
}
