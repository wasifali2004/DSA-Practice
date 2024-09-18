#include <bits/stdc++.h>
using namespace std;

/*
int Binary_search(vector<int> v, int target) {
    int low = 0;
    int high = v.size() -1;
    while(low <= high) {
        int mid = (low+high)/2;
        if(v[mid] == target) {
            return mid;
        }
        else if(v[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cout<<"Enter size: ";
    cin >> n;
    vector<int> v(n, target);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >>v[i];
    }
    cout<<"Enter Target: ";
    cin >>target;
    cout<< Binary_search(v ,target);

    return 0;
}   
*/


/*
int Binary_search(vector<int> &v, int target, int low, int high) {    int low = 0;
    if(low>= high) {
        return -1;
    }
    int mid = low + (low+high) / 2;     // add low and subtract low b/c if both are INT_MAX then overflow range
    if(v[mid] == target) {
        return mid;
    }
    else if(v[mid] < target) {
        return Binary_search(v, target, mid+1, high);
    }
    else {
        return Binary_search(v, target, low, mid-1);
    }
}


int main() {
    int n, target;
    cout<<"Enter size: ";
    cin >> n;
    vector<int> v(n, target);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >>v[i];
    }
    cout<<"Enter Target: ";
    cin >>target;
    int low = 0;
    int high = v.size()-1;
    cout<< Binary_search(v ,target ,low, high);

    return 0;
} 
    
*/


/*
int Index(vector<int> &v, int target, int low, int high) {
    int ans = -1;
    while(low <= high) {
        int mid = low + (high - low ) /2;
        if(v[mid] == target) {
            ans = mid;
            high = mid - 1;
        }
        else if(v[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    cout<<"Enter size: ";
    cin >> n;
    vector<int> v(n, target);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >>v[i];
    }
    cout<<"Enter Target: ";
    cin >>target;
    int low = 0;
    int high = v.size()-1;
    cout<< Index(v ,target ,low, high);

    return 0;
} 
*/



int square(int sq) {
    int low=0 , high = sq;
    int ans = 1;
    while(low <= high) {
        int mid = low + (high - low)/ 2;
        if(mid*mid <= sq) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int sqr;
    cout<<"Enter a number: ";
    cin >> sqr;
    cout<<square(sqr);
    return 0;
} 