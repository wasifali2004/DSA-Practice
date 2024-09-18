#include <bits/stdc++.h>
using namespace std;

/*
int posi(vector<int> &v, int s, int e) {
    int pivot = v[e];
    int i=s;
    for(int j=s; j<e; ++j) {
        if(v[j] > pivot) {
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[i], v[e]);
    return i;
}

int find(vector<int> &v, int s,int n,  int e ) {
    int pos = posi(v, s, e);
    if(pos - s == n-1) {
        return v[pos];
    }
    else if(pos-s > n-1) {
        return find(v, s, n, pos-1);
    }
    else {
        return find(v, pos+1, n-(pos-s+1) , e);
        }
    return INT_MAX;
    
}

int main() {
    vector<int> v(5);
    for(int i=0; i<5; ++i) {
        cin >> v[i];
    } 
    cout << find(v,0, 4-1 ,v.size()-1);
    
    return 0;
}
*/

void check(vector<int> &v, vector<int> &v1, vector<int> &v2) {
    int i=0 ,j =0 ,k=0;
    while(i < v.size() && j < v1.size()) {
        if(v[i] < v1[j]) {
            v2[k++] = v[i++];
        }
        else {
            v2[k++] = v1[j++];
        }
    }
    while(i < v.size()){
        v2[k++] = v[i++];
    }
    while(j < v1.size()) {
        v2[k++] = v1[j++];
    }
}

int main() {
    vector<int> v = {1,2,3,4,5};
    vector<int> v1 = {6,7,8,9,10};
    int n= v.size() + v1.size();
    vector<int> v2(n);
    check(v, v1, v2);
    for(int i=0; i<n; ++i) {
        cout<<v2[i] <<" ";
    }
    return 0;
}