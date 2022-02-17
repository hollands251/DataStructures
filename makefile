CC=clang


######################################################################## 
# Make Stack Options
######################################################################## 

StackSourceFiles=Source/Stack.c
StackObjectFiles=Object/Nodes.o Object/Stack.o

Stack:
	$(CC) -Wall -c 	$(StackSourceFiles) -o Object/Stack.o
	$(CC) -Wall 	$(StackObjectFiles) -o Binary/Stack

DebugStack:
	$(CC) -Wall -gc $(StackSourceFiles) -o Object/Stack.o
	$(CC) -Wall 	$(StackObjectFiles) -o Binary/Stack

AssembleStack:
	$(CC) -Wall -c 	$(StackSourceFiles) -o Object/Stack.o

CleanStack:
	rm Object/Stack.o
	rm Binary/Stack

########################################################################


########################################################################
# Make Node Option
########################################################################

NodeSourceFiles=Source/Nodes.c
NodeObjectFiles=Object/Nodes.o

ObjectFileLocation=Object/Nodes.o
BinaryFileLocation=Binary/Nodes

Node:
	$(CC) -Wall -c	$(NodeSourceFiles) -o $(ObjectFileLocation)
	$(CC) -Wall 	$(NodeObjectFiles) -o $(BinaryFileLocation)

DebugNode:
	$(CC) -Wall -gc	$(NodeSourceFiles) -o $(ObjectFileLocation)
	$(CC) -Wall 	$(NodeObjectFiles) -o $(BinaryFileLocation)

AssembleNode:
	$(CC) -Wall -c	$(NodeSourceFiles) -o $(ObjectFileLocation)

CleanNode:
	rm Object/Node.o
	rm Binary/Node

########################################################################
