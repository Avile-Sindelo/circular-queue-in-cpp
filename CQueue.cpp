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























