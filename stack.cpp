#include <stdio.h>
#define STACK_SIZE 3
int stack[STACK_SIZE];
int top = -1;
int Full()
{
	if(top>=STACK_SIZE-1)
	{
		printf("\n Stack is Full!\n");
		return 0;
	}
	return 1;
}
int Empty()
{
	if(top==-1)
	{
		printf("\n Stack is Empty\n");
		return 0;
	}
	return 1;
}
void push(int item)
{
	
	if(Full())
	{
		stack[++top]=item;
		return;
	}
}
int pop()
{
	if(Empty())
	{
		return stack[top--];
	}
}
void print_stack()
{
	for(int i = top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
	return;
}

int main()
{
	int i;
	push(18);
	push(3);
	push(4);
	print_stack();
	i=pop();
	printf("pop value:%d\n",i);
	int j=pop();
	printf("pop value:%d\n",j);
	print_stack();
}
