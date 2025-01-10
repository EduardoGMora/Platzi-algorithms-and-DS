#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 5

class queue
{
private:
    int arr[SIZE];
    int front;
    int rear;
    
public:
    queue( int front = -1, int rear = -1){
        this->front = front;
        this->rear = rear;
    }; // constructor

    void enQueue(int value);
    int deQueue();
    void display();

    ~queue();
};


void queue::enQueue( int value){
    if (rear == SIZE - 1)
        cout << "Queue is full" << endl;
    else{
        // if the queue is empty
        if (front == -1)
            front = 0;
        
        rear++;
        arr[rear] = value;
        cout << "Inserted " << value << endl;
    }
    
}

int queue::deQueue(){
    // if arr is empty
    if (front == -1)
        cout << "Queue is empty" << endl;
    else{
        for (int i = 0; i < rear; i++)
            arr[i] = arr[i + 1];

        rear--;

        if (front > rear)
            front = rear = -1;
    }

    return arr[front];
}

void queue::display(){
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
        for (int i = front; i <= rear; i++)
            cout << arr[i] << "->";
    
}


queue::~queue() {}


int main(){
    queue q;
    q.enQueue(1);
    q.enQueue(3);
    q.enQueue(2);
    q.enQueue(4);
    q.enQueue(5);
    q.display();
    cout<<"\nDeleted " << q.deQueue()<<endl;
    q.enQueue(6);
    cout<<"Deleted "<<q.deQueue()<<endl;
    cout<<"Deleted "<<q.deQueue()<<endl;
    q.display();
    return 0;
}