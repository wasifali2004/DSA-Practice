#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    int n;
    Node(int val) {
        n = val;
        next = NULL;
    }
};

class stacks{
    Node* head;
    int capacity;
    int currsize;
    public:
    stacks(int n) {
        capacity = n;
        currsize = 0;
        head = NULL;
    }
    bool isempty() {
        if(head == NULL) {
            return true;
        }
        return false;
    }
    bool isfull() {
        return currsize == capacity;
    }

    void push(int x) {
        if(currsize == capacity) {
            cout<<"Overflow!" <<endl;
            return;
        }
        Node* new_node = new Node(x);
        new_node -> next = head;
        head = new_node;
        currsize++;
    }

    void pop() {
        if(head == NULL) {
            cout<<"Underflow!" <<endl;
            return;
        }
        Node* new_head = head -> next;
        head -> next = NULL;
        free(head);
    }

    int gettop() {
        if(head == NULL){
            cout<<"Underflow!" <<endl;
            return -1;
        }
        return head -> n;
    }

    int size() {
        return currsize;
    }
};


int main(){
    stacks ob(5);
    ob.push(1);
    ob.push(2);
    ob.push(3);
    cout<<ob.gettop() <<endl;
    ob.push(4);
    ob.push(5);
    cout<<ob.gettop() <<endl;
    ob.pop();
    ob.push(5);
    cout<<ob.gettop() <<endl;
    cout<< ob.size()<<endl;
    cout<<ob.isempty() <<endl;
    cout<<ob.isfull() <<endl;
}