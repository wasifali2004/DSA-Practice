#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

class Stacks{
    int n;
    int* arr;
    int top;
    public:
    Stacks(int cap) {
        this -> n = cap;
        arr = new int[cap];
        this -> top = -1;
    }

    void push(int val) {
        if(top == n-1) {
            cout<<"Overflow!" <<endl;
            return;
        }
        top++;
        this -> arr[this -> top] = val;
    }

    void pop() {
        if(top == -1) {
            cout<<"Underflow!"<<endl;
            return;
        }
        top--;
    }

    int gettop() {
        if(top == -1) {
            cout<<"Underflow!"<<endl;
        }
        return arr[top];
    }

    bool isempty() {
        return top == -1;
    }

    int size() {
        return top+1;
    }

    bool isfull() {
        return top == n-1;
    }
};


int main() {
    Stacks ob(5);
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