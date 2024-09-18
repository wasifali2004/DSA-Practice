#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int n;
    Node* next;
    Node(int x) {
        n = x;
        next = NULL;
    }
};

class Queue{
    private:
    Node* head;
    Node* tail;
    int size;
    public:
    Queue() {
        head = NULL;
        tail = NULL;
        this -> size = 0;
    }

    void enqueue(int data) {
        Node* new_node = new Node(data);
        if(head == NULL) {
            head = new_node;
            tail = new_node;
        }
        else {
            tail -> next = new_node;
            tail = new_node;
        }
        size++;
    }

    void dequeue() {
        if(head == NULL) {
            return;
        }
        Node* new_head = head;
        head = head -> next;
        new_head -> next = NULL;
        if(head == NULL) {
            tail = NULL;
        }
        delete(new_head);
    }

    bool isempty() {
        return head == NULL;
    }

    int front() {
        if(head == NULL) {
            return -1;
        }
        return head -> n;
    }

    int total() {
        return size;
    }

};



int main() {
    /*
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);
    qu.enqueue(60);
    qu.dequeue();
    while(! qu.isempty()) {
        cout << qu.front() <<" ";
        qu.dequeue();
    }
    */

   queue<int> qu;
   qu.push(10);
   qu.push(20);
   qu.push(30);
   qu.push(40);
   qu.push(50);
   stack<int> st;
   while(! qu.empty()) {
    st.push(qu.front());
    qu.pop();
   }
   while(!st.empty()) {
    qu.push(st.top());
    st.pop();
   }
   while(!qu.empty()) {
    cout<<qu.front() <<" ";
    qu.pop();
   }
}
