#include<iostream>
using namespace std;
//enqueue, dequeue, isFull, isEmpty, count;

class Queue{
private:
    int front;
    int rear;
    int arr[5];
public:
    Queue(){
        for(int i = 0; i < 5; i++){
            arr[i] = 0;
        };
        front = -1;
        rear = -1;
    }

    bool isFull(){
        return rear == 4;
    }
    bool isEmpty(){
        return rear == -1 && front == -1;
    }

    void enqueue(int value){
        if(isFull()){
            cout << "The Queue is full" << endl;
            return;
        }else if(rear == -1 && front == -1){
            rear = front = 0;
        }else{
            rear++;
        }
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout << "The Queue is empty" << endl;
            return;
        }else if(rear == front){
            int dequeued = arr[front];
            rear = front = -1;
            cout << "Dequeued: " << dequeued << endl;
        }else{
            int dequeued = arr[front];
            front ++;
            cout << "Dequeued: " << dequeued << endl;
        }
        
    }
    int count(){
        if(isEmpty()){
            return 0;
        }
        return (rear - front) + 1;
    }
    void display(){
        if(isEmpty()){
            cout << "The Queue is empty" << endl;
        }else{
            for(int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
};

int main(){
    Queue q;
    int value, operation;

    do{
        cout << "Enter an operation. Enter 0 to exit: " << endl;
        cout << "1.Enqueue()" << endl;
        cout << "2.Dequeue()" << endl;
        cout << "3.Count()" << endl;
        cout << "4.isEmpty()" << endl;
        cout << "5.isFull()" << endl;
        cout << "6.display()" << endl;
        cin >> operation;

        switch(operation){
            case 0:
                break;
            case 1:
                cout << "Enter the value to be Enqueued: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                value = q.count();
                cout << "Count: " << value << endl;
                break;
            case 4:
                if(q.isEmpty()){
                    cout << "The Queue is empty" << endl; 
                }else{
                    cout << "The Queue is not empty" << endl;
                }
                break;
            case 5:
                if(q.isFull()){
                    cout << "The Queue is full" << endl;
                }else{
                    cout << "The Queue is not full" << endl;
                }
                break;
            case 6:
                q.display();
                
                break;
            default:
                cout << "Enter a valid operation" << endl;
                break;
        }
    }while(operation!=0);

    return 0;
}