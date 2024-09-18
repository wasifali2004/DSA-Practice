#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main() {
    vector<int> arr = {1,4,3,5,1};

    int check = arr[0];
    int count = 0;
    for(int i=0; i<arr.size(); ++i){
        if(check < arr[i]) {
            check = arr[i];
            count = i;
        }
    }
    check = 0;
    arr.erase(arr.begin() + count);
    for(int i=0; i<arr.size(); ++i){
        if(check < arr[i]) {
            check = arr[i];
        }
    }
        cout<<"Second largest number is: " <<check;
}

*/


/*
int main() {
    int arr[5] = {1,2,3,4,5};
    int k , size = 5;
    cout<<"Enter rotation: ";
    cin >> k;
    k = k%5;
    int newarr[size];
    int j=0;
    for(int i=size - k; i<size; ++i) {
        newarr[j++] = arr[i];
        
    } 
    for(int i=0; i<=k; ++i) {
        newarr[j++] = arr[i];

    }
    for(int i=0; i<size; ++i) {
        cout<<newarr[i] <<" " ;
    }
}
*/


/*
int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int k , size = 5;
    cout<<"Enter rotations: ";
    k = k%size;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin()+k, v.end());
    for(int i=0; i<size; ++i) {
        cout<<v[i] <<" " ;
    }
}
*/


int main() {
    int size;
    cout<<"Enter size: ";
    cin >> size;
    vector <int> v(size);
    for(int &check: v) {
        cout<<"Enter vector elements: ";
        cin >> check;
    }

    const int N = 1e5 + 10;
    vector <int> check(N,0);
    for(int i=0; i<size; ++i) {
        check[v[i]]++;
    }
    int queries;
    cout<<"Enter queries: ";
    cin >> queries;

    while(queries--) {
        int queryelement;
        cout<<"Input num to check: ";
        cin >> queryelement;
        cout<<"=> "<<check [ queryelement];
        cout<<endl;
    }
}