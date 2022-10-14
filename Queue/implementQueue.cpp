// implementaion of queue

#include<iostream>
#include<queue>
using namespace std;

class Queue {
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 1000001;
        arr = new int[size];
        qfront = 0;    // initally dono zero pe hi hoge bro rear aur front
        rear = 0;  

    }   


    // public functions of queue

    bool isEmpty() {        
        if(qfront == rear) {    // agar empty hai toh front aur rear dono bhi zero pe hi rhenge n bro
            return true;   // true empty
        }
        else 
        {
              return false;   // nhi empty hai isley false
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }

    }
    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

    
         
