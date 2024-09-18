#include <iostream>
#include <vector>
using namespace std;

/*
vector<int> add(vector<int> v) {
    int count = 0;
    for(int i=0; i<v.size(); ++i) {
        if(i>0) {
            v[i] = v[i] + v[i-1];
        }
    }
    return v;
}
*/

/*
bool change(vector<int> v) {
    int count = 0;
    for(int i=0; i<v.size(); ++i) {
        count += v[i];
    }
    int pre ,suf;
    for(int i=0; i<v.size (); ++i) {
        pre += v[i];
        suf = count - pre;
        if(pre == suf) {
            return true;
        }
    }
    return false;
}

*/


void queries(vector<int> &v) {
    for(int i=1; i<= v.size(); ++i) {
        v[i] += v[i-1];
    } 
}

int main() { 
    int size;
    cout<<"Input size: ";
    cin >> size;
    vector<int> v(size+1 , 0);
    for(int i=1 ; i<=size; ++i) {
        cout<<"Enter elements: ";
        cin >> v[i];
    }
    queries(v);
    int query;
    cout<<"Enter queries: ";
    cin >> query;
    while(query--) {
        int l, r;
        cout<<"Enter r: ";
        cin >>  r;
        cout<<"Enter l: ";
        cin >> l;
        int answer = 0;
        answer = v[r] - v[l-1];
            cout<<answer <<endl <<"\n";
    }



    //vector <int> newly = change(v);
   // for(int check : newly) {
        // cout<<" "<<check;
 //   }

}