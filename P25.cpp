#include <bits/stdc++.h>
using namespace std;


/*
int main() {
    string a ,b;
    cout<<"Enter two words: ";
    cin >> a >> b;
    int n = a.length();
    int count = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if( n != b.length() ){
        cout<<"Not a anagram!";
    }
    else {
    for(int i=0; i<n; ++i) {
            if(a[i] == b[i]) {
                count++;
            }
        }
    }
    if(count == n) {
        cout<<"It is anagram!";
    }
    else {
        cout<<"Not a anagram!";
    }
}
*/

/*
bool isomorphic(string a, string b) {
    vector<int> v(128, -1);
    vector<int> v1(128, -1);
    int n = a.length();
    if( n != b.length() ){
        cout<<"Not a isomorphic!";
    }
    else {
    for(int i=0; i<n; ++i) {
            if(v[a[i]] != v1[b[i]]) {
                return false;
            }
            v[a[i]] = v1[b[i]] = i;
        }
    }
    return true;
}

int main() {
    string a ,b;
    cout<<"Enter two words: ";
    cin >> a >> b;
    cout<<isomorphic(a,b);
}
*/

/*
string common(vector<string> &v ,int n) {
    sort(v.begin(), v.end());
    string a = v[0];
    int i=0;
    string b = v[n-1];
    int j=0;
    string ans = "";
    while( i<a.length() && j<b.length() ) {
        if(a[i] == b[j] ) {
            ans += a[i]; 
            i++;
            j++; 
        }
        else {
            break;
        }
    } 
    return ans;
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<string> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    cout<<common(a, n);
}
*/

string common(vector<string> &v, int n) {
    string s = v[0];
    int ans_length = s.size();
    for(int i=0; i<v.size(); ++i) {
        int j=0; 
        while(j<s.size() && j<v[i].size() && s[j] == v[i][j] ) {
            j++;p
            ans_length = min(ans_length, j);
        }
    }
    string ans = s.substr(0, ans_length);
    return ans;

}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<string> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    cout<<common(a, n);
}