#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    int n;
    Node(int k) {
        n = k;
        next = NULL;
    }
};

class circularll{
    public:
    Node* head;
    circularll() {
        head = NULL;
    }

    void insert(int x) {
        Node* new_node = new Node(x);
        if(head == NULL) {
            head = new_node;
            new_node -> next = head;
            return;
        }
        Node* tail = head;
        while(tail -> next != head) {
            tail = tail -> next;
        }
        tail -> next = new_node;
        new_node -> next = head;
        head = new_node;
        
    } 

    void display(){ 
        Node* temp  = head;
        do {
            cout<< temp -> n <<" ";
            temp = temp -> next;
        }while(temp != head);
    }
};


void add(Node* &head, int n) {
    Node* new_node = new Node(n);
    if(head == NULL) {
        head = new_node;
        new_node -> next = head;
        return;
    }
    Node* tail = head;
     while(tail -> next != head) {
        tail = tail -> next;
    }
    new_node -> next = head;
    tail -> next = new_node;
}

void add_at_k(Node* &head, int pos, int n) {
    Node* new_node = new Node(n);
    if(head == NULL) {
        head = new_node;    
        new_node -> next = head;
        return;
    }
    Node* check = head;
    int count = 1;
    while(count < pos-1 ){
        check = check -> next;
        count++;
    }
    new_node -> next = check -> next;
    check -> next = new_node;
}


void remove_tail(Node* &head) {
    Node* check = head;
    while( check -> next -> next != head) {
        check = check -> next;
    }
    Node* tail = check -> next ;
    check -> next = head;
    free(tail);
}

int main() {
    circularll cl;
    cl.insert(3);
    cl.insert(1);
    cl.insert(2);
    cl.display();
    cout<< endl;
    //add(cl.head ,3);
    //cl.display();
    //cout<< endl;
    //add_at_k(cl.head, 3, 5);
    //cl.display();
    //cout<< endl;
    remove_tail(cl.head);
    cl.display();
}