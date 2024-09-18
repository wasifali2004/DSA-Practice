#include <bits/stdc++.h>
using namespace std;

/*
int ocurrence(vector<int> &v, int n, int target) {
    int low = 0;
    int high = n-1;
    int max = -1;
    while( low<= high) {
        int mid = low + (high - low) /2;
        if(v[mid] >= target) {
            max = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return max;
}

int ocurrence_end(vector<int> &v, int n, int target) {
    int low = 0;
    int high = n-1;
    int ans = -1;
    while( low<= high) {
        int mid = low + (high - low) /2;
        if(v[mid] <= target) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
    return ans;
}


int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >> v[i];
    }
    int target;
    cout<<"Enter target: ";
    cin >> target;
    int check = ocurrence(v, n, target);
    vector<int> result;
    if(v[check] != target) {
        result.push_back(-1);
        result.push_back(-1);
    }
    else {
        int check1 = ocurrence_end(v, n, target);
        result.push_back(check);
        result.push_back(check1);
        cout<<result[0] <<" "<<result[1];  
    }

    return 0;
}
*/

/*
 int find(vector<int> &v, int n) {
    int low = 0, high = v.size()-1;
    if(v[low] < v[high] ) {
        return low;
    }
    else {
        while(low <= high) {
            int mid = low + (high - low)/2;
            if(v[mid] > v[mid+1]){
                return mid+1;
            }
            else if(v[mid] < v[mid-1]) {
                return mid;
            }
            else if(v[mid] > low) {
                low = mid+1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
 }

int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >> v[i];
    }
    cout<< find(v,n); 
}
*/

/*
int find(vector<int> v, int n, int target) {
    int low = 0, high = v.size()-1;
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(v[mid] == target) {
            return mid;
        }
        if(v[mid] >= v[low]) {
            if(target >= v[low] && target <= v[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if(target >= v[mid] && target <= v[high]) {
                low = high + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
    
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >> v[i];
    }
    int target;
    cout<<"Enter target: ";
    cin >> target;
    cout<< find(v, n, target); 
}
*/


bool find(vector<int> &v, int n, int target){
    int low = 0, high =v.size()-1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(v[mid] == target) {
            return true;
        }
        else if(v[mid] >target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >> v[i];
    }
    int target;
    cout<<"Enter target: ";
    cin >> target;
    cout<< find(v, n, target); 
}

