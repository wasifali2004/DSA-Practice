#include <bits/stdc++.h>
using namespace std;

/*
int find(vector<int> &v, int n ){
    int low=0, high=n-1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(v[mid])
        if(v[mid] > v[mid-1]){
            ans = max(ans, mid);
            low = mid +1;
        }
        else {
            high = mid - 1;
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
    cout<< find(v, n); 
}
*/



/*
int find(vector<int> &v, int n) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(mid == 0) {
            if(v[mid] > v[mid+1]) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if(mid == n-1) {
            if(v[mid] > v[mid - 1]) {
                return n-1;
            }
            else {
                return n-2;
            }
        }
        else  {
            if( (v[mid] > v[mid+1]) && (v[mid] > v[mid-1] )){
                return mid;
            }
            else if(v[mid] > v[mid-1]){
                low = mid + 1;
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
    cout<< find(v, n); 
}
*/


bool find(vector <vector<int>> &v, int target) {
    int n = v.size(), m = v[0].size();
    int low = 0, high = n*m -1;
    while(low <= high) {
        int mid = n + (m-n)/2;
        int x = mid/m;
        int y = mid % m;
        if(v[x][y] == target) {
            return true;
        }
        else if(v[x][y] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    int n, m;
    cout<<"Enter size: ";
    cin >>n >> m;
    vector <vector<int>> v(n,vector<int>(m));
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
        cout<<"Enter "<<i <<" row " <<j <<" column element: ";
        cin >> v[i][j];
    }
    }
    int target;
    cout<<"Enter target: ";
    cin >>target;
    cout<< find(v, target); 
}