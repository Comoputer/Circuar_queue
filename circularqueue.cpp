#include<iostream>
using namespace std;

class cqueue{
    static const int MAX=5;
    private:
    int* queue;
    int front,rear,size;
    
    public:
    cqueue(){
        queue=new int[MAX];
        front=-1;
        rear=-1;
        size=0;
    }

    bool isFull(){
        return (size==MAX);
    }
    bool isEmpty(){
        return (size==0);
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"Queue is full cannot enter the elements inside it"<<endl;
        }
        rear=(rear+1)%MAX;
        queue[rear]=data;
        size++;

        if(front==-1){
            front=0;
        }
        
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty cannot remove values from it"<<endl;
        }
        front=(front+1)%MAX;
        size--;

        if(isEmpty()){
            front=rear=-1;
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"No elements in the queue please insert elements first"<<endl;
        }
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
};
int main(){
    cqueue c1;
   // c1.enqueue(23);
   c1.dequeue();
    c1.display();
    return 0;
}