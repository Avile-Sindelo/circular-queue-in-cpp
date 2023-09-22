#include<iostrem>
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


