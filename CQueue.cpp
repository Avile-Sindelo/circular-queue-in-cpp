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
		//cannot enqueue
	//else if the queue is empty
		//front = back = 0;
		//Add the new character at queue[back]
	//else (NOT empty && NOT full)
		//Increment the Back
		//if Back == MAX
			//Back = 0
		//Add the new character at queue[back]
		//Increment the Size by 1
}

//DEQUEUE
char CQueue::dequeue(){
	//if the queue is empty
		//CANNOT dequeue - queue is empty
	//else  (There's something in the queue)
		//declare a variable to hold the dequeued character
		//store the value of queue[front] into the new variable declared above
		//increment front by 1
		//if front==MAX
			//front = 0
		//Decrement the size by 1
		//Return the dequeued variable
}


int main(){
	CQueue circle;	
	
	
	
	return 0;
}























