#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int n;
    Node* move;
    Node(int k) {
        n = k;
        move = NULL;
    }
};

class linkedlist{
    public:
    Node* head;
    linkedlist() {
        head = NULL;
    }
    void insert(int k) {
        Node* new_node = new Node(k);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* check = head;
        while(check -> move != NULL){
            check = check -> move; 
        }
        check -> move = new_node;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp -> n <<" ";
            temp = temp -> move;
        }
    }
};


bool similarity(Node* head1, Node* head2) {
    while(head1 != NULL && head2 != NULL) {
        if(head1 -> n != head2 -> n) {
            return false;
        }
        head1 = head1 -> move;
        head2 = head2 -> move;
    }
    return (head1 == NULL && head2 == NULL);
}

int len(Node* head) {
    int incre = 0;
    Node* temp = head;
    while(temp != NULL) {
        incre++;
        temp = temp -> move;
    }
    return incre;
}

Node* cal(Node* head, int k) {
    Node* temp = head;
    while(k--) {
        temp = temp -> move;
    }
    return temp;
}

Node* equal(Node* head1, Node* head2) {
    int l1 = len(head1);
    int l2 = len(head2);
    Node* pt;
    Node* ptr;
    if(l1 > l2) {
        int k = l1 -l2;
        pt = cal(head1, k);
        ptr = head2;
    }
    else {
        int k = l2 -l1;
        pt = head1;
        ptr = cal(head2, k);
    }
    while(pt && ptr){
        if(pt == ptr){
            return pt;
        }
        pt = pt -> move;
        ptr = ptr -> move;
        
    }
    return NULL;
}

void remove(Node* &head, int pos) {
    Node* ptr1 = head;
    Node* ptr2 = head;
    int count = pos;
    while(count --) {
        ptr2 = ptr2 -> move;
    }
    if(ptr2 == NULL) {
        if(pos == 0){
        Node* temp = head;
        head = head -> move;
        free(temp);
        }
    }
    while(ptr2 -> move != NULL) {
        ptr1 = ptr1 -> move;
        ptr2 = ptr2 -> move;
    }

    Node* temp = ptr1 -> move;  
    ptr1 -> move = ptr1 -> move -> move; 
    delete(temp);
}

Node* merge(Node* head1, Node* head2) {
    Node* check = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* dummy = check;
    while(ptr1 && ptr2) {
        if(ptr1 -> n < ptr2 -> n) {
            dummy -> move = ptr1;
            ptr1 = ptr1 -> move;
        }
        else {
            dummy -> move = ptr2;
            ptr2 = ptr2 -> move;
        }
        dummy = dummy -> move;
    }
    if(ptr1) {
        dummy -> move = ptr1;
    }
    else if (ptr2) {
        dummy -> move = ptr2;
    }
    return check -> move;

}

Node* multiple_merging(vector<Node*> lists) {
    if(lists.size() == 0) {
        return NULL;
    }
    while(lists.size() > 1) {
        Node* new_head = merge(lists[0], lists[1]);
       lists.push_back(new_head);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}

Node* middle(Node* &head) {
    Node* low = head;
    Node* high = head;
    while(high != NULL && high -> move != NULL) {
        low = low -> move;
        high = high -> move -> move;
    }
    return low;
}

bool cycle(Node* &head) {
    Node* low = head;
    Node* high = head;
    if(!head) {
        return false;
    }
    while(high != NULL && high -> move != NULL) {
        low = low -> move;
        high = high -> move -> move;
        if(high  == low) {
            return true;
        }
    }
    return false;
}

void removecycle(Node* &head) {
    Node* low = head;
    Node* high = head;
    do{
        low = low -> move;
        high = high -> move -> move;
    }while(low != high);

    Node* check = head;
    while(low -> move != check -> move){
        low = low -> move;
        check = check -> move;
    }

    low -> move = NULL;
}

bool palindrome(Node* &head) {
    Node* low = head;
    Node* high = head;
    while(high != NULL && high -> move != NULL) {
        low = low -> move;
        high = high -> move -> move;
    }
    Node* curr = low -> move;
    low -> move = NULL;
    Node* pre = low;

    while(curr) {
        Node* next = curr -> move;
        curr -> move = pre;
        pre = curr;
        curr = next;
    }

    Node* head1 = head;
    Node* head2 = pre;
    while(head2) {
        if(head1 -> n != head2 -> n){
            return false;
        }
        head1 = head1 -> move;
        head2 = head2 -> move;
    }
    return true;
}

Node* rotate(Node* &head, int k) {
    Node* check = head;
    int len = 0;
    while(check -> move!= NULL) {
        check = check -> move;
        len++;
    }
    len++;
    k = k % len;
    if(k ==0 ){
        return head;
    }
    check -> move = head;
    int n = len - k;
    Node* temp = head;
    for(int i=1; i<n; ++i) {
        temp = temp -> move;
    }
    Node* new_head = temp -> move;
    temp -> move = NULL;
    return new_head;
}

Node* even_odd(Node* &head) {
    Node* evenhead = head -> move;
    Node* even = evenhead;
    Node* odd = head;
    while(even != NULL && even -> move != NULL){
        even -> move = even -> move -> move;
        odd -> move = odd -> move -> move;
        even = even -> move;
        odd = odd -> move;
    }   
        odd -> move = evenhead;
        return head;
}


Node* adding(Node* &head) {
    Node* low = head;
    Node* high = head;
    Node* check = head;
    while (high && high -> move) {
        low = low -> move;
        high = high -> move -> move;
    }
    Node* temp = low -> move;
    low -> move = NULL;
    Node* pre = low;
    while(temp) {
        Node* next = temp -> move;
        temp -> move = pre;
        pre = temp;
        temp = next;
    }

    Node* head1 = head;
    Node* head2 = pre;
    while(head1 != head2) {
        Node* check = head1 -> move;
        head1 -> move = head2;
        head1 = head2;
        head2 = check;
    }
    
    return head;
}

Node* swapping(Node* &head) {
    if(head == NULL || head -> move ==NULL) {
        return head;
    }
    Node* second = head -> move;
    head -> move = swapping(second -> move);
    second -> move = head;
    return second;
}

int main() {
    linkedlist ll1, ll2 ,ll3;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.display();
    cout<<endl;
    ll2.insert(6);
    ll2.insert(7);
    ll2.insert(8);
    ll2.insert(9);
    ll2.insert(10);
    ll2.insert(20);
    //ll2.display();
    //cout<<endl;
    ll3.insert(9);
    ll3.insert(10);
    ll3.insert(20);
    //ll3.display();
    //cout<<endl;
    //cout<< similarity(ll1.head, ll2.head);
    //ll2.head -> move -> move = ll1.head -> move -> move -> move;
    //Node* check = equal(ll1.head, ll2.head);
    /*if(check) {
        cout<< check -> n <<" ";
    }
    else {
        cout<<" -1 ";
    }
    */
    //remove(ll1.head, 3);
    //ll1.display();

    //linkedlist check;
    //check.head = merge(ll1.head, ll2.head);
    //check.display();
    //vector<Node*> lists;
    /*lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);
    linkedlist check;
    check.head = multiple_merging(lists);
    check.display();
    */
   //Node* check = middle(ll1.head);
   //cout<< check -> n;
   ll1.head -> move -> move -> move -> move -> move  = ll1.head -> move -> move; 
   cout<< cycle(ll1.head) <<endl;
   removecycle(ll1.head);
   cout<< cycle(ll1.head) <<endl;
   cout<< palindrome(ll1.head);

    //ll1.head = rotate(ll1.head, 2);
    //cout<<endl;
    //ll1.display();
    //ll1.head = even_odd(ll1.head);
    //cout<<endl;
    //ll1.display();
    ll2.head = adding(ll2.head);
    cout<<endl;
    ll2.display();
    ll2.head = swapping(ll2.head);
    cout<<endl;
    ll2.display();
   
}

