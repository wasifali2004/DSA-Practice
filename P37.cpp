#include <bits/stdc++.h>
using namespace std;

/*
int cal(string c) {
    stack<int> st;
    for(int i=0; i<c.length(); ++i) {
        if(c[i] >= '0' && c[i]<= '9'){
            st.push(c[i] - '0');
        }
        else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(c[i] == '+'){
                st.push(a+b);   
            }
            else if (c[i] == '-'){
                st.push(a-b);
            }
            else if (c[i] == '*'){
                st.push(a*b);
            }
            else if (c[i] == '/'){
                st.push(a/b);
            }
        }
    }
    return st.top();
}
*/


/*
int precedence(char c) {
    if(c == '*' || c == '/') {
        return 2;
    }
    else if(c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

int calculate(string c) {
    stack<int> st;
    stack<char> st1;
    for(int i=0; i<c.length(); ++i) {
        if(c[i] >= '0' && c[i]<= '9'){
            st.push(c[i] - '0');
        }
        else if(c[i] == '('){
            st1.push(c[i]);
        }
        else if(c[i] == ')') {
            while(!st1.empty() && st1.top() != '('){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            char x = st1.top();
            st1.pop();
            if(x == '+'){
                st.push(a+b);   
            }
            else if (x == '-'){
                st.push(a-b);
            }
            else if (x == '*'){
                st.push(a*b);
            }
            else if (x == '/'){
                st.push(a/b);
            }
            }
            if(! st1.empty()) {
            st1.pop();
            }
        }
         else {
            while(!st1.empty() && precedence(st1.top()) >= precedence(c[i]) ) {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            char x = st1.top();
            st1.pop();
            if(x == '+'){
                st.push(a+b);   
            }
            else if (x == '-'){
                st.push(a-b);
            }
            else if (x == '*'){
                st.push(a*b);
            }
            else if (x == '/'){
                st.push(a/b);
            }
            }
            }
            st1.push(c[i]);
        }
        while(! st1.empty()) {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        char x = st1.top();
        st1.pop();
        if(x == '+'){
            st.push(a+b);   
        }
        else if (x == '-'){
            st.push(a-b);
        }
        else if (x == '*'){
            st.push(a*b);
         }
        else if (x == '/'){
            st.push(a/b);
        }
    }
    return st.top();

}
*/


string ex(string c) {
    stack<string> st;
    reverse(c.begin(), c.end());
    for(int i=0; i<c.length(); ++i) {
        if(isdigit(c[i])) {
            st.push(to_string (c[i] - '0'));
        }
        else {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            string res = a + b + c[i];
            st.push(res);
        }
    }
    return st.top();
}


int main() {
    string c;
    cout<<"Enter a string: ";
    cin >>c;
    cout<< ex(c);

    return 0;
}