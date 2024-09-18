#include <bits/stdc++.h>
using namespace std;


bool check(string c) {
    stack<char> st;
    for(int i=0; i<c.length(); ++i) {
        char x = c[i];
        if(x == '(' || x == '[' || x == '{') {
            st.push(x);
        }
        else {
            if(x == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            }
            else if(x == '}' && !st.empty() && st.top() == '{') {
                st.pop();
            }
            else if(x == ']' && !st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return true;
}


/*
vector<int> nge(vector<int> &check) {
    int n = check.size();
    vector<int> result(n, -1);
    stack<int> st;
    st.push(0);
    for(int i=1; i<n; ++i) {
        if(!st.empty() && check[i] > check[st.top()]){
            result[st.top()] = check[i];
            st.pop();
        }
        st.push(i);
    }
    return result;
}
*/



vector<int> pge(vector<int> &check) {
    int n = check.size();
    vector<int> result(n, -1);
    reverse(check.begin(), check.end());
    stack<int> st;
    st.push(0);
    for(int i=1; i<n; ++i) {
        while(!st.empty() && check[i] > check[st.top()]){
            result[st.top()] = n-i-1;
            st.pop();
        }
        st.push(i);
    }
    reverse(result.begin(), result.end());
    reverse(check.begin(), check.end());
    return result;
}


int histogram(vector<int> &v) {
    stack<int> st;
    int n = v.size();
    int ans = INT_MIN;
    for(int i=0; i<n; ++i) {
        while(!st.empty() && v[i] < v[st.top()]) {
            int ele = v[st.top()];
            st.pop();
            int ne = i;
            int pe = (st.empty())? -1 : st.top();
            ans = max(ans , ele * (ne - pe -1));   
        }
        st.push(i);
    }
    while(!st.empty()) {
            int ele = v[st.top()];
            st.pop();
            int ne = n;
            int pe = (st.empty())? -1 : st.top();
            ans = max(ans, ele * (ne - pe - 1));
    }
    return ans;
}

int main() {
    /*string c;
    cout<<"Enter a string: ";
    cin >> c;
    cout << check(c) <<endl;
    */
   int n;
   cout<<"Enter size: ";
   cin >> n;
   vector<int> check(n);
   for(int i=0; i<n; ++i) {
    cin >> check[i];
   }
   int ans = histogram(check);
   cout<< ans <<endl;
    return 0;
}