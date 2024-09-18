#include <bits/stdc++.h>
using namespace std;

            //Merge Sorting Algorithm

/*
void merge(vector<int> &v, int l, int mid, int r) {
    int an = mid - l+1;
    int bn = r - mid;
    vector<int> arr(an), ar(bn);
    ;
    for(int i=0; i<an; ++i) {
        arr[i] = v[l+i];
    }
    for(int i=0; i<bn; ++i) {
        ar[i] = v[mid+i+1];
    }
    int i=0, j=0, k=l;
    while( i<an &&  j<bn ){
        if(arr[i] <= ar[j]) {
            v[k++] = arr[i++];       
        }
        else {
            v[k++] = ar[j++];
        }
    }
    while(i<an) {
        v[k++] = arr[i++];
    }
    while(j<bn) {
        v[k++] = ar[j++];
    }
}            

void merge_sort(vector<int> &v, int l ,int r){
    if(l >= r){
        return;
    }
    int mid = (l+r) / 2;
    merge_sort(v, l, mid);
    merge_sort(v, mid+1, r);
    merge(v, l, mid, r);
    return;
}

int main() {
    vector<int> v = {1,4,6,8,3,9,2};
    merge_sort(v,0,v.size()-1);
    for(int i=0; i<v.size(); ++i) {
        cout<<v[i] <<" "; 
    }

    return 0;
}
*/

int position(vector<int> &v, int s, int e){
    int pivot_ele = v[e];
    int i = s-1;
    
    for(int j = s; j<e-1; ++j) {
        if(v[j] < pivot_ele) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i+1], v[e]);
    return i+1;
}

void sort(vector<int> &v, int s, int e){
    if(s >= e) {
        return;
    }
    int ink = position(v, s, e);
    sort(v, s, ink-1);
    sort(v, ink+1 , e);
    return;
}

int main() {
    vector<int> v = {1,6,7,4,0,9,3};
    sort(v,0,v.size()-1);
    for(int i=0; i<v.size(); ++i){
        cout<<v[i] <<" ";
    }

    return 0;
}