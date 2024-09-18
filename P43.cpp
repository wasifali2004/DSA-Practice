#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    map<string, int> check;
    check = { {"wasif", 007}, {"ahmed", 111}, {"imran", 999}};
    check["HASHIM"] = 555;
    for(auto temp : check) {
        cout<<"Name: " <<temp.first <<endl;
        cout<<"Code: "<<temp.second <<endl;
    }
    map<string, int> :: reverse_iterator itr;
    for(itr = check.rbegin(); itr != check.rend(); ++itr) {
        cout<<"Name: " <<itr->first <<endl;
        cout<<"Code: " <<itr->second <<endl;
    }
    if(check.find("wasif") != check.end()) {
        cout<<"FOUND!" <<endl;
    }
    cout<< check.count("imran")<<endl;
}
*/

/*
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cin >>v[i];
    }
    map<int, int> temp;
    for(int i=0; i<n; ++i) {
        temp[v[i]]++;
    }
    int sum=0;
    for(auto check: temp) {
        if(check.second > 1) {
            sum += check.first;
        }
    }
    cout<<"Answer: "<<sum <<endl;
}
*/ 

int main() {
    unordered_multimap<string, int> fruits;
    fruits.insert(make_pair("Apple", 0));
    fruits.insert(make_pair("Banana",1));
    fruits.insert(make_pair("Citrus", 2));
    fruits.insert(make_pair("Dates",3));
    fruits.insert(make_pair("Elderberry",4));
    for(auto temp:fruits){
        cout<<"Fruit: "<<temp.first <<endl;
        cout<<"Code: "<<temp.second <<endl;
    }
}