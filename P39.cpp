#include <bits/stdc++.h>
using namespace std;

vector<int> sliding_window(vector<int> &arr, int k) {
    deque<int> dq;
    vector<int> res;
    for(int i=0; i<k; ++i) {
        while(!dq.empty() && arr[dq.back()] < arr[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    } 
    res.push_back(arr[dq.front()]);
    for(int i=k; i<arr.size(); ++i) {
        if(dq.front() == (i-k) ){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] < arr[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
}

int main() {
    vector<int> arr(9);
    for(int i=0; i<9; ++i) {
        cin >> arr[i];
    }
    int k;
    cout<<"Enter sliding window: ";
    cin >> k;
    vector<int> v = sliding_window(arr, k);
    for(int i=0; i<v.size(); ++i) {
        cout<<v[i] <<" ";
    }
    return 0;
}