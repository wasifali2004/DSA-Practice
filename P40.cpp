#include <bits/stdc++.h>
using namespace std;

/*
class Queue{
    private:
    stack<int> st;
    public:
    Queue(){ }

    void pushed(int x) {
        stack<int> temp;
        while(!st.empty()) {
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
    }

    void pop() {
        if(st.empty()) {
            return;
        }
        st.pop();
    }

    bool empty() {
        return st.empty();
    }

    int front() {
        return st.top();
    }

};
*/

/*
class Stack{
    private:
    queue<int> q;
    public:
    void pushed(int x) {
        q.push(x);
        int n = q.size();
        for(int i=0; i<n; ++i) {
            q.push(q.front());
            q.pop();
        } 
    }

    void pop(){
        q.pop();
    }

    int top() {
        if(!q.empty()) {
            return q.front();
        }
        return -1;
    }

    bool empty() {
        return q.empty();
    }
};
*/


class circular_Queue{
    private:
    vector<int> v;
    int front, back;
    int size;
    int cs;
    int ts;
    public:
    circular_Queue(int n) {
        size = n;
        front = 0;
        back = n-1;
        cs = 0;
        v.resize(n);
    }

    void enqueue(int x) {
        if(v.empty()) {
            return;
        }
        back = (back+1) % size;
        v[back] = x;
        cs++;
    }

    void dequeue() {
        if(v.empty()) {
            return;
        }
        front = (front + 1) % size;
        cs--;
    }
    int getfront() {
        if(front == -1) {
            return -1;
        }
        return v[front];
    }
    bool isEmpty() {
        return cs == 0;
    }

};
int main() {
    circular_Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.enqueue(50);
    while(!q.isEmpty()) {
        cout<< q.getfront() <<" ";
        q.dequeue();
    }

}