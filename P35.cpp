#include <iostream>
#include <stack>
using namespace std;

/*
stack<int> copying(stack<int> check) {
    stack<int> temp;
    while(!check.empty()) {
        int curr = check.top();
        check.pop();
        temp.push(curr);
    }

    stack<int> final;
    while(!temp.empty()) {
        int curr = temp.top();
        temp.pop();
        final.push(curr);
    }
    return final;
}
*/

void copying_recursively(stack<int> &check, stack<int> &finale, int x, int pos, int cur) {
    if(check.empty()) {
        return;
    }
    int curr = check.top();
    check.pop();
    copying_recursively(check, finale, x, pos, cur+1);
    if(cur == pos) {
        finale.push(x);
    }
    finale.push(curr);
}


void insertAtBottom(stack<int> &st, int curr) {
    stack<int> temp;
    while(!st.empty()) {
        int n = st.top();
        st.pop();
        temp.push(n);
    }
    st.push(curr);
    while(! temp.empty()) {
        int n = temp.top();
        temp.pop();
        st.push(n);
    }
}

void insert_At_bottom(stack<int> &check) {
    if(check.empty()) {
        return;
    }
    int curr = check.top();
    check.pop();
    insert_At_bottom(check);
    insertAtBottom(check, curr);
}

int main() {
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(0);
    stack<int> result;
    //copying_recursively(st);
    insert_At_bottom(st);
    while(!st.empty()) {
        int curr = st.top();
        st.pop();
        cout<< curr <<" ";
    }

}

