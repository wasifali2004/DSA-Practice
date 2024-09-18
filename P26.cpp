#include <bits/stdc++.h>
using namespace std;

/*
string decoding(string c){
    string result = "";
    for(int i=0; i<c.size(); ++i) {
        if(c[i] != ']') {
            result.push_back(c[i]);
        }
        else {
            string str = "";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin(), str.end());
            result.pop_back();
            string num = "";
            while(!result.empty() && result.back() >= '0' && result.back() <= '9' ) {
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(), num.end());
            int change = stoi(num);
            while(change) {
                result += str;
                change--;
            }
        }

    }
    return result;
}

int main() {
    string c;
    cout<<"Enter string: ";
    cin >> c;
    cout<< decoding(c);
    return 0;
}
*/


int find( string str, int k) {
    int count = 0;
    int s = 0;
    int len = 0;
    for(int i=0; i<str.length(); ++i ){
        if(str[i] == '0'){
            count++;
        }
        while(count > k) {
            if(str[s] == '0') {
                count--;
            }
            s++;
        }
        if(count <= k){
        len = max(len, i-s+1);
        }
    }
    return len;
}

int main() {
    string c;
    cout<<"Enter string: ";
    cin >> c;
    int k;
    cout<<"Enter k flips: ";
    cin >>k;
    cout<< find(c, k);
    return 0;
}
