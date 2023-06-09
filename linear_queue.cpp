#include <stdio.h>
#define STACK_SIZE 5
int queue[STACK_SIZE];
int rear = -1;
int front = -1;
void put(char item)
{
	printf("insert item:%c\n",item);
	queue[++rear] = item;
	if(rear==STACK_SIZE)
	{
		printf("Queue Overflow!\n");
		return;
	}
	return;
}
int get()
{
	if(rear == front)
	{
		printf("Queue Underflow!\n");
		return 0;
	}
	return queue[++front];
}
void print_queue(void)
{
	for(int i = front+1;i<=rear;i++)
	{
		printf("%c ",queue[i]);
	}
	printf("\n");
	return;
}
int main()
{
	int data=0;
	put('A');
	put('B');
	print_queue();
	data= get();
	printf("\ndelete value:%c\n",data);
	data=get();
	printf("\ndelete value:%c\n",data);
	put('C');
	put('D');
	put('E');
	print_queue();
	put('F');
}

