#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
void subsequence(string &c, int i, string sum, vector<string> &v) {
    if( i == c.length() ) {
        v.push_back(sum);
        return;
    }
    subsequence(c, i+1, sum+c[i], v); 
    subsequence(c, i+1, sum, v);
}

int main() {
    string c ;
    cout<<"Enter a string: ";
    cin >>c;
    vector <string> v;
    subsequence( c, 0 , "", v );

    for(int i=0; i<v.size(); ++i) {
        cout<< v[i] <<" ";
    }

    return 0;
}
*/

void st(vector<string> &v,  int idx, string c, string &str, vector<string> &result ) {
        if(idx == str.length() ) {
            result.push_back(c);
            return;
        }
        int digit = str[idx] - '0';
        if(digit <= 1){
            st(v, idx+1, c, str, result);
            return;
        }
        for(int i=0; i<v[digit].size(); ++i) {
            st(v, idx+1, c + v[digit][idx], str ,result);
        }
        return;

}   

int main() {
    vector <string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string s;
    cout<<"Enter string: ";
    cin >>s;
    vector <string> result;
    string c ="";
    st(v, 0, c, s, result );
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    return 0;

}