#include<iostream>
#define MAX 100
using namespace std;

class CQueue {
	private: 
			char queue[MAX];
			int front;
			int back;
			int size;
	
	public: 
			CQueue(); // constructor
			bool isEmpty();
			bool isFull();
			void enqueue(char ch);
			char dequeue();
};

CQueue::CQueue(){
	size = 0;
}

bool CQueue::isFull(){
	return (size == MAX);
}

bool CQueue::isEmpty(){
	return (size == 0);
}

//ENQUEUE
void CQueue::enqueue(char character){
	//if the queue is full
	if(isFull()){
		//cannot enqueue
		cout << "Cannot enqueue - the circular queue is full" << endl;
	} else if(isEmpty()){
		//front = back = 0;
		front = 0;
		back = 0;
		
		//Add the new character at queue[back]
		queue[back] = character;
	} else { // NOT empty && NOT full
		//Increment the Back
		back++;
		//if Back equals to MAX, restart the Back variable
		if(back == MAX){
			back = 0;
		}
		
		//Add the new character at queue[back]
		queue[back] = character;
		//Increment the Size by 1
		size++;
	}	
}

//DEQUEUE
char CQueue::dequeue(){
	//if the queue is empty
	if(isEmpty()){
		//CANNOT dequeue - queue is empty
		cout << " Cannot dequeue - queue is empty" << endl;
	} else { //There's something in the queue
		//declare a variable to hold the dequeued character
		char value;
		//store the value of queue[front] into the new variable declared above
		value = queue[front];
		//increment front by 1
		front++;
		//if front==MAX, restart the front variable
		if(front == MAX){
			front = 0;
		}
		//Decrement the size by 1
		size--;
		//Return the dequeued variable
		return value;
	}		
}


int main(){
	//Create an instance of the class - an object
	CQueue circle;	
	//Try to dequeue from an empty queue
	circle.dequeue();
	//Enqueue 5 characters - the word 'Bravo'
	circle.enqueue('B');
	circle.enqueue('r');
	circle.enqueue('a');
	circle.enqueue('v');
	circle.enqueue('o');
	//remove the first character - 'B'
	circle.dequeue();
	
	
	return 0;
}























