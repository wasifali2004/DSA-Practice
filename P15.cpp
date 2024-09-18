#include <bits/stdc++.h>
using namespace std;

        //Bubble Sort Algorithm
/*
void Bubble_sort(vector<int> &arr, int n) {
    bool check = false;
    for(int i=0; i<n-1; ++i) {
        for(int j=0; j<n-1-i; ++j) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                check = true;
            }
        }
        if(check == false) {
            break;
        }
    }
    return ;
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter " <<i <<" element: ";
        cin >> arr[i];
    }
    Bubble_sort(arr, n);
    for(int i=0; i<n; ++i) {
        cout<< arr[i] <<" ";
    }

    return 0;
}
*/

            //--------------------------//
             //Selection Sort Algorithm//
            //--------------------------//

void Selection_Sort(vector<int> &v, int  n) {
    for(int i=0; i<n-1; ++i) {
            int min_idx = i;
        for(int j=i+1; j<n ; ++j) {
            if(v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(v[i], v[min_idx]);
        }
 
    }
    return;
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter " <<i <<" element: ";
        cin >>v[i];
    }
    Selection_Sort(v, n);
    for(int i=0; i<n; ++i) {
        cout<<v[i] <<" ";
    }

    return 0;
}