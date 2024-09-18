#include <bits/stdc++.h>
using namespace std;


bool check(string c, string d) {
    map<char ,int> mp;
    for(char temp: c) {
        mp[temp]++;
    }
    for(auto a: d) {
        if(mp.find(a) == mp.end()) {
            return false;
        }
        else {
            mp[a]--;
        }
    }

    for(auto x: mp) {
        if(x.second != 0){
            return false;
        }
    }
    return true;
}

int main() {
    string a,b;
    cout<<"Enter a string: ";
    cin >>a >> b;
    cout << check(a, b);

    return 0;
}



/*
bool check(vector<string> v) {
    unordered_map<char, int> mp;
    for(auto check:v){
        for(char c:check) {
            mp[c]++;
        }
    }
    int n = v.size();
    for(auto x:mp) {
        if(x.second % n != 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >>n;
    vector<string> v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }
    cout<< ( check(v) ? "Yes": "No") ;
}
*/

/*
bool Is_isomorphic(string x, string y){
    unordered_map<char, char> mp;
    if(x.length() != y.length()) {
        return false;
    }
    for(int i=0; i<x.length(); ++i) {
        if(mp.find(x[i]) != mp.end()) {
            if(mp[x[i]] != y[i]){
            return false;
            }
        }
        else {
            mp[x[i]] = y[i];
        }
    }
    mp.clear();
    for(int i=0; i<y.length(); ++i) {
        if(mp.find(y[i]) != mp.end()) {
            if(mp[y[i]] != x[i]){
            return false;
            }
        }
        else {
            mp[y[i]] = x[i];
        }
    }
    return true;
}

int main() {
    string a, b;
    cout<<"Enter strings: ";
    cin >> a >> b;
    cout<< ( (Is_isomorphic(a,b)? "YUP!": "NOPE!") );
}
*/


/*
vector<int> pair_sum(vector<int> v, int target) {
    unordered_map<int, int> mp;
    vector<int> ans(2, -1);
    for(int i=0; i<v.size(); ++i) {
        if(mp.find(target - v[i]) != mp.end()) {
            ans[0] = mp[target-v[i]];
            ans[1] = i;
            return ans;
        }
        else {
            mp[v[i]] = i;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >> v[i];
    } 
    int target;
    cin >>target;
    vector<int> temp = pair_sum(v,target);
    cout<<v[0] <<" "<<v[1];
}
*/

/*
int subsets(vector<int> v) {
    unordered_map<int, int> mp;
    int pre_sum = 0;
    int maxlen = 0;
    for(int i=0; i<v.size(); ++i) {
        pre_sum += v[i];
        if(pre_sum == 0) {
            pre_sum++;
        }
        if(mp.find(pre_sum) != mp.end()) {
            maxlen = max(maxlen, i-mp[pre_sum]);
        }
        else {
            mp[pre_sum] = i;
        }
    }
    return maxlen;
}   

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >>v[i];
    } 
    cout<< subsets(v);
}
*/