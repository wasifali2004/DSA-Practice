#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    cout<< s.size() <<endl;
    set<int>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++) {
        cout<< *itr <<" ";
    }
    cout<<endl;
    for(auto check:s) {
        cout<< check <<" ";
    }
    cout<<endl;
    

    if(s.find(20) != s.end() ) {
     cout<<"Present!"<<endl;;
    }
    else {
     cout<< "Not Present!";
    }
    if(s.lower_bound(70) != s.end()) {
        cout<<"Present!" <<endl;;
    }
}
*/

/*
int main() {
    int n,m;
    cout<<"Enter sizes: ";
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    cout<<"Enter first vector elements: ";
    for(int i=0; i<n; ++i) {
        cin >> v1[i];
    }
    cout<<"Enter elements of second vector: ";
    for(int i=0; i<m; ++i) {
        cin >>v2[i];
    } 
    set<int> s;
    for(auto check: v1) {
        s.insert(check);
    }
    int sum = 0;
    for(auto temp: v2) {
        if(s.find(temp) != s.end()) {
            sum += temp;
        }
    }
    cout<<"Enter the sum is: " <<sum;
}
*/

/*
bool check_alphabets(string c) {
    transform(c.begin(), c.end(), c.begin(),::tolower);
    set<char> s;
    for(auto check:c){
        s.insert(check);
    }
    return s.size() == 26;
}

int main() {
    string c;
    cout<<"Enter string: ";
    cin >>c;
    cout<< check_alphabets(c);
}
*/

/*
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >> v[i];
    }
    set<int> s;
    for(auto check:v) {
        s.insert(check);
    }
    auto itr = s.begin();
    itr++;
    cout << *itr;   
}
*/

int main() {
    int n, p, q;
    unordered_set<int> s;
    cout<<"Enter n, p and q: ";
    cin >> n >> p >>q;
    for(int i=0; i<=n; ++i) {
        for(int j=0; j<=n; ++j) {
            int answered = i;
            int unanswered = j;
            int left = n - (i + j);
            if(left >= 0) {
                int score = answered*p + unanswered*q;
                s.insert(score);
            }
            else {
                break;
            }
        }
    }
    cout<<"Answer: " <<s.size();
}