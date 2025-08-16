#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }

        void insertNode(int val){
            Node* newnode = new Node(val);
            if(!head){
                head = newnode;
            }else{
                Node* temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }

        void display(){
            if(!head){
                return;
            }else{
                Node* temp = head;
                while(temp!=nullptr){
                    cout << temp->data << " ";
                    temp = temp->next;
                }
            }
        }

        void deleteNode(int val){
            if(!head){
                return;
            }
            if(head->data == val){
                Node*temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node* current = head;
            Node* prev = nullptr;

            while(current && current->data != val){
                prev = current;
                current = current->next;
            }
            if(!current){
                return;
            }

            prev->next = current->next;
            delete current;

        }
};

int main(){

}