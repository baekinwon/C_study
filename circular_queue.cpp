#include <stdio.h>
#define queue_size 4
char queue[queue_size];
int front = 0,rear=0;

int enqueue(char item){
	if(front == (rear+1)%queue_size)
	{
		printf("Queue Overflow!\n");
		return 0;
	}
	rear = ++rear%queue_size;
	queue[rear] = item;
	printf("queue : %c\n",queue[rear]);
	return 0;
}

int dequeue(){
	int data=0;
	if(front==rear)
	{
		printf("Queue Underflow!\n");
		return 0;
	}
	front=++front%queue_size;
	data = queue[front];
	printf("delete value : %c\n",data);
	return 0;
}

int main()
{
	enqueue('A');
	enqueue('B');
	enqueue('C');
	enqueue('D');
	dequeue();
	dequeue();
	enqueue('E');
	enqueue('F');
	enqueue('G');
	
	return 0;
}
