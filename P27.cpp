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

void insert(Node* &head, int n) {
    Node* new_node = new Node(n);
    new_node->next = head;
    head = new_node;
}

void inserted_tail(Node* &head, int n) {
    Node* new_node = new Node(n);
    Node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = new_node;
}

void display(Node* head) {
    while(head != NULL) {
        cout<<head -> n<<" ";
        head = head -> next;    
    }
    cout<<"Null" <<endl;
}

void insert_pos(Node* head , int val, int pos) {
    Node* new_node = new Node(val);
    Node* temp = head;
    int new_pos = 0;
    while(new_pos != pos-1) {
        temp = temp -> next;
        new_pos++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;

}

void deletion(Node* head) {
    Node* temp = head;
    Node* second_last = head;
    while(second_last -> next -> next != NULL) {
        second_last = second_last -> next;
    }
    temp = second_last -> next;
    second_last -> next = NULL;
}

void deleted(Node* head, int pos) {
    Node* new_delete = head;
    int inc = 0;
    while(inc != pos-1){
        new_delete = new_delete -> next;
        inc++;
    }
    Node* temp = new_delete -> next;
    new_delete -> next = new_delete -> next -> next;
    free(temp);
}

int main() {
    Node* head = NULL;
    insert(head, 3);
    display(head);
    insert(head, 5);
    display(head);
    inserted_tail(head, 7);
    display(head);
    insert_pos(head, 10, 3);
    display(head);
    deletion(head);
    display(head);
    deleted(head, 2);
    display(head);
}