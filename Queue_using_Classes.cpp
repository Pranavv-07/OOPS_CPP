//  implementation of queue using classes

#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int front=-1,rear=-1;
    int queue[1001];

    public :
    Queue(){
        front=-1;
        rear=-1;
    }
    void enquee(int ele){
    if(rear==front)
    {
        front++;
        rear++;
        queue[front]=ele;
        rear++;
        
    }
    else {
        queue[rear]=ele;
        rear++;
    }

  } 
  void dequeue()
{
    if (rear==front)
    {
       cout<<"Queue is empty, there are no elements in the queue\n";
    }
    else 
    {
        front++;
    }
}
void peek()
{
    if(rear==front)
    {
        cout<<"queue is empty"<<endl;
    }
    else 
    {
         for(int i=front;i<rear;i++)
   {
       cout<<queue[i]<<endl;
        return;
   }
   
    }
}
bool is_empty()
{
    return front==rear;
  
}
void display()
{
    if (rear==front)
    {
        cout<<"Queue is empty, there are no elements in the queue"<<endl;
    }
    else 
    {
        for(int i=front;i<rear;i++)
    {
        cout<<queue[i]<<endl;
    }

        
    }
}
};


int main()
{
    Queue q;
     q.enquee(10);
     q.enquee(20);
     q.enquee(30);
     q.display();
     q.dequeue();
     q.peek();
     bool a = q.is_empty();
     if(a==1) cout<<"True"<<endl;
     else cout<<"False"<<endl;
    return 0;

}
