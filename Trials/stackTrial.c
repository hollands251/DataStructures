#include <stdio.h>

#include "Source/Stack.c"

int main()
{
	Stack_t * stack = makeStack();

	stack = push( stack , 5 );
	stack = push( stack , 6 );
	stack = push( stack , 7 );
	stack = push( stack , 8 );

	stack = pop( stack );
	int fourthValue = stack -> popped;
	stack = pop( stack );
	int thirdValue = stack -> popped;
	stack = pop( stack );
	int secondValue = stack -> popped;
	stack = pop( stack );
	int firstValue = stack -> popped;

	printf( "The first popped value is: %d \n" , fourthValue  );
	printf( "The sencond popped value is: %d \n" , thirdValue  );
	printf( "The third popped value is: %d \n" , secondValue  );
	printf( "The fourth popped value is: %d \n" , firstValue  );
	
	freeStack( stack );

	return 0;
}

