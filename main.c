#include <stdio.h>

#include "Source/Stack.h"

int main()
{
	Stack * stack = makeStack();

	stack = push( stack , 5 );
	stack = pop( stack );

	printf( "The popped value is: %d \n" , stack -> popped  );
	
	freeStack( stack );

	return 0;
}
