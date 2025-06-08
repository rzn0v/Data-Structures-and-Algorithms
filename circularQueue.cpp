#include<iostream>
using namespace std;

class CircularQueue{
private:
    int arr[5];
    int front;
    int rear;
    int itemCount;
public:
    CircularQueue(){
        for(int i = 0; i < 5; i++){
            arr[i] = 0;
        }
        front = -1;
        rear = -1;
        itemCount = 0;
    }

    bool isFull(){
        return (rear + 1) % 5 == front;
    }
    bool isEmpty(){
        return (rear == -1 && front == -1);
    }

    void enqueue(int val){
        if(isFull()){
            cout << "Queue is Full." << endl;
            return;
        }else if(isEmpty()){
            rear = front = 0;
        }else{
            rear = (rear + 1) % 5;
        }
        arr[rear] = val;
        cout << "Enqueued: " << arr[rear] << endl;
        itemCount++;
    }
    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }else if(rear == front){
            int dequeued = arr[front];
            rear = front = -1;
            cout << "Dequeued: " << dequeued << endl;
            itemCount--;
        }else{
            int dequeued = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            cout << "Dequeued: " << dequeued << endl;
            itemCount--;
        }
    }
    int count(){
        return itemCount;
    }
    void display(){
        for(int i = 0; i < 5; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main(){
    CircularQueue q;
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