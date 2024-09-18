#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int n;
    Node* next;
    Node(int data) {
        n = data;
        next = NULL;
    }
};

class linkedlist{
    public:
    Node* head;
    linkedlist() {
        head = NULL;
    }
    void insert(int n) {
        Node* ne = new Node(n);
        if(head == NULL){
            head = ne;
            return;
        }
        Node* temp = head;
        while(temp ->next != NULL) {
            temp = temp -> next;
        }
        temp -> next = ne;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> n <<" ";
            temp = temp -> next;
        }cout<<"NULL!";
    }
};

void delete_alternate(Node* &head) {
    Node* current = head;
    while(current != NULL && current -> next != NULL) {
        Node* temp = current -> next;
        current -> next = current -> next -> next;
        free(temp);
        current = current -> next;
    }
}

void similar(Node* head) {
    Node* check = head;
    while(check != NULL){
        while(check -> next != NULL && check -> n == check -> next -> n ) {
            Node* temp = check -> next;
            check -> next = check -> next -> next;
            free(temp);
        }
        check = check -> next;
    }
}

void reverse(Node* &head) {
    Node* temp = head;
    if(temp == NULL){
        return;
    }
    reverse(temp -> next);
    cout <<temp -> n <<" ";
}

Node* reversed(Node* &head) {
    Node* pre = NULL;
    Node* curr = head;
    while(curr != NULL) {
        Node*next = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}

Node* recursively_reversed(Node* &head) {
        if(head == NULL ||head -> next == NULL) {
            return head;
        }
        Node* new_node = recursively_reversed(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return new_node;
}

Node* kth(Node* &head, int p) {
    Node* pre = NULL;
    Node* curr = head;
    int current_point = 0;
    while(curr != NULL && current_point < p) {
        Node* check = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = check;
        current_point++;
    }
    if(curr != NULL) {
        Node* nw = kth(curr, p); 
        head -> next = nw;
    }
    return pre;
}

int main() {
    linkedlist ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.insert(7);
    ll.insert(8);
    //ll.display();
    //cout<<endl;
    //delete_alternate(ll.head);
    //ll.display();
    //cout<<endl;
    //similar(ll.head);
    //ll.display();
    //cout<<endl;
    //reverse(ll.head);
    //cout<<endl;
    //ll.head = reversed(ll.head);
    //ll.display();
    //cout<<endl;
    //ll.head = recursively_reversed(ll.head);
    //ll.display();
    //cout<<endl;
    ll.head = kth(ll.head, 2);
    ll.display();
}