#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node* next;
};

	struct Node* front = NULL;
	struct Node* rear = NULL;
	
void enqueue(int a){
	
	struct Node* t = (struct Node*) malloc(sizeof(struct Node));
	t->data = a;
	t->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = t;
}
	else{
		rear->next = t;
		rear = t;
}
	printf(" %d kuyruga eklendi.\n", a);
}

void dequeue(){
	
	if(front == NULL){
		printf(" Kuyrukta eleman yoktur.\n");
}
	 else{
		struct Node* t = front;
		if(front == rear){
			front = rear = NULL;
}
		else{
			front = front->next;
}
		printf(" %d kuyruktan cikarildi.\n", t->data);
		free(t);
 }
}

void printQueue(){
	
	printf(" Kuyruktaki elemanlar: ");
	struct Node* temp = front;
	while(temp != NULL){
		printf(" %d ",temp->data);
		temp = temp->next;
}
	printf("\n");
}

int main(void){
	
	enqueue(5);
	enqueue(12);
	enqueue(9);
	enqueue(1);
	enqueue(7);
	
	dequeue();
	dequeue();
	
	enqueue(5);
	
	printQueue();
	
	getch();
	return 0;
}
