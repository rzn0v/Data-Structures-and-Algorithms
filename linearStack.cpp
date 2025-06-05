#include<iostream>
using namespace std;

class Stack{
private:
    int arr[5];
    int top;
public:
    Stack(){
        for(int i = 0; i < 5; i++){
            arr[i] = 0;
        }
        top = -1;
    }
    bool isFull(){
        return top == 4;
    }
    bool isEmpty(){
        return top == -1;
    }
    void push(int value){
        if(isFull()){
            cout << "The stack is Full" << endl;
        }else{
            top++;
            arr[top] = value;
            cout << "Pushed: " << value << endl;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "The stack is Empty" << endl;
        }else{
            int value = arr[top];
            top --;
            cout << "Popped: " << value << endl;
        }
    }
    int size(){
        return top + 1;
    }
    int peek(){
        return arr[top];
    }
};

int main(){
    Stack s;
    int value, operation;

    do{
        cout << "Enter an operation. Enter 0 to exit: " << endl;
        cout << "1.push(): " << endl;
        cout << "2.pop(): " << endl;
        cout << "3.isFull(): " << endl;
        cout << "4.isEmpty(): " << endl;
        cout << "5.size(): " << endl;
        cout << "6.peek(): " << endl;
        cin >> operation;

        switch(operation){
            case 0:
                break;
            case 1: 
                cout << "Enter a value to be pushed: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if(s.isFull()){
                    cout << "The stack is Full" << endl;
                }else{
                    cout << "The stack is not Full" << endl;
                }
                break;
            case 4:
                if(s.isEmpty()){
                    cout << "The stack is Empty" << endl;
                }else{
                    cout << "The stack is not Empty" << endl;
                }
                break;
            case 5:
                value = s.size();
                cout << "Size: " << value << endl;
                break;
            case 6:
                if(s.isEmpty()){
                    cout << "The stack is empty" << endl;
                }else{
                    value = s.peek();
                    cout << "Peeked: " << value << endl;
                }
                break;
            default:
                cout << "Enter a valid operation." << endl;
        }
    }while(operation!=0);
    return 0;
}
