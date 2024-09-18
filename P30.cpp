#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int n;
    Node* pre;
    Node* next;
    Node(int k) {
        n = k;
        pre = NULL;
        next = NULL;
    } 
};

class doublyll{
    public:
    Node* head;
    Node* tail;
    doublyll() {
        head = NULL;
        tail = NULL;
    }
    void insert(int k) {
        Node* check = new Node(k);
        if(head == NULL){
            head = check;
            tail = check;
            return;
        }
        tail -> next = check;
        check -> pre = tail;
        tail = check;
    }

    void display() {
        Node* check = head;
        while(check != NULL) {
            cout<< check -> n <<" ";
            check = check -> next;
        }
    }

};

void inserted(Node* &head,int val, int k) {
    Node* check = head;
    int count = 1;
    while (count < (k-1) ) {
        check = check -> next;
        count++;
    }
    Node* new_node = new Node(val);
    new_node -> next = check -> next;
    check -> next = new_node;
    new_node -> pre = check;
    new_node -> next -> pre = new_node;
    return;
}

void deletion(Node* &head, int pos) {
    Node* check = head;
    int count = 1;
    while(count < pos) {
        count++;
        check = check -> next;
    }
    if(check != NULL) {
        if(check == head) {
            head = check -> next;
        }
        
        if(check -> pre != NULL) {
            check -> pre -> next = check -> next;
        }
        if(check -> next != NULL) {
            check -> next -> pre = check -> pre;
        }
    }
    delete(check);
}

void reversed(Node* &head, Node* &tail) {
    Node* curr= head;
    Node* nextptr = NULL;
    while(curr != NULL) {
        nextptr = curr -> next;
        curr -> next = curr -> pre; 
        curr -> pre = curr -> next;
        curr = nextptr;
    }
    swap(head, tail);
}

bool palindrome(Node* &head, Node* &tail){
    while(head != tail && tail != head -> pre) {
        if(head -> n != tail -> n) {
            return false;
        }
        head = head -> next;
        tail = tail -> pre;
    }
    return true;
}

void delete_same_neighbour(Node* &head, Node* &tail) {
        Node* curr = tail -> pre;
        while(curr != head) {
            Node* pre_node = curr -> pre;
            Node* next_node = curr -> next;
            if(pre_node -> n == next_node -> n) {
                pre_node -> next = next_node;
                next_node -> pre = pre_node;
                free(curr);
            }
            curr = pre_node;
        }
}

bool is_critical_point(Node* &curr) {
    if(curr -> pre -> n < curr -> n && curr -> next -> n < curr -> n) {
        return true;
    }
    if(curr -> pre -> n > curr -> n && curr -> next -> n > curr -> n) {
        return true;
    }
    return false;
}

vector<int> maxi_mini(Node* &head, Node* &tail) {
    Node* curr = tail -> pre;
    vector<int> ans(2, INT_MAX);
    int firstCP = -1, lastCP = -1;
    int curr_pos = 0;
    while( curr -> pre != NULL) {
    if(is_critical_point(curr)) {
        if(firstCP == -1) {
            firstCP = lastCP = curr_pos;
        }
        else {
            ans[0] = min(ans[0], curr_pos - lastCP);
            ans[1] = curr_pos - firstCP;
        }
    } 
    curr_pos ++;
    curr = curr -> pre;
    }
    if(ans[0] == INT_MAX) {
        ans[0] = ans[1] = -1;
    }
    return ans;
}


vector<int> sum(Node* &head, Node* &tail, int x) {
    vector<int> ans(2, -1);
    while(head != tail) {
        int sum = head -> n + tail -> n;
        if(sum == x) {
            ans[0] = head -> n;
            ans[1] = tail -> n;
            return ans;
        }
        if(sum > x) {
            tail = tail -> pre;
        }
        else {
            head = head -> next;
        }
    }
    return ans;
}

int main() {
    Node* new_node = new Node(3);
    doublyll d1;
    d1.insert(1);
    d1.insert(2);
    d1.insert(3);
    d1.insert(4);
    d1.insert(5);
    d1.display();
    //cout<< endl;
    /*inserted(d1.head, 4, 3);
    d1.display();
    cout<< endl;
    deletion(d1.head, 2);
    d1.display();
    */cout<< endl;
    /*reversed(d1.head, d1.tail);
    d1.display();
    cout<< endl; */
    //cout << palindrome(d1.head, d1.tail) <<endl;
    //delete_same_neighbour(d1.head, d1.tail);
    //d1.display();
    //vector<int> check;
    //check = maxi_mini(d1.head, d1.tail);
    //cout<< check[0] <<" "<< check[1] <<endl;
    vector<int> check;
    check = sum(d1.head, d1.tail, 4);  
    cout<< check[0] <<" "<< check[1] <<endl;
    
    return 0;
}