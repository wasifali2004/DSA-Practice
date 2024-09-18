#include <iostream>
#include <vector>
using namespace std;

/*
bool find(int *arr, int n, int x){
    if(n==0) {
        return false;
    }
    else if(arr[n] == x) {
        return true;
    }
    find(arr, n-1, x);
}

int main() {
    int size, x;
    cout<<"Enter size: ";
    cin >>size;
    cout<<"Enter number to find: ";
    cin >>x;
    int arr[size];
    for(int i=0;i <size; ++i) {
        cin >>arr[i];
    }
    cout<< find(arr, size, x);
    return 0;
}
*/


/*
void subsets(int *arr, int n, int idx, int sum, vector<int> &v) {
    if(idx == n) {
        return v.push_back(sum);
    }
    subsets(arr, n, idx+1, sum+arr[idx], v);
    subsets(arr, n, idx+1, sum, v);
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i) {
        cin >>arr[i];
    }
    int sum = 0;
    vector <int> v;
    subsets(arr, n, 0, sum ,v);
    for(int i=0; i<v.size(); ++i) {
        cout<<v[i];
    }

    return 0;
}

*/

int cal(int m, int n ,int i, int j) {
    if(i == m-1 and j== n-1) {
        return 1;
    }
    if(i >= m or j >=n) {
        return 0;
    }
    return cal(m,n,i+1,j) + cal(m,n,i,j+1);
}

int main() {

    cout<< cal(3,3,0,0);
    return 0;
}