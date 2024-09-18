#include <bits/stdc++.h>
using namespace std;

/*
void Insertion_sort(vector<int> &v, int n) {
    for(int i=1; i<=n; ++i) {
        int ele = v[i];
        int j = i-1;
        while(j >= 0 && v[j] > ele){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = ele;
    }
    return;
}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >>n;
    vector<int> v(n);
    for(int i =0; i<n; ++i) {
        cin >>v[i];
    } 
    Insertion_sort(v, n);
    for(int i=0; i<n; ++i) {
        cout<<v[i] <<" ";
    } 

    return 0; 
}
*/

/*
 void sorting(vector<int> &v) {
    for(int i=v.size()-1 ; i >=0; --i) {
        bool flag = false;
        for(int j=0; j<i; ++j){
                if(v[j] ==0 && v[j+1] != 0 ){
                    swap(v[j], v[j+1]);
                    flag = true;
                }
            }
        if(flag == false) {
            break;
        }
    }
    return;
 }
int main() {
    vector<int> v(6);
    for(int i=0; i<6; ++i) {
        cin >> v[i];
    } 
    sorting(v);
    for(int i=0; i<6; ++i) {
        cout<<v[i] <<" ";
    }

    return 0;
}
*/

void changing(char c[][60], int n) {
    for(int i=0; i<n-1; ++i) {
        int min = i;
        for(int j=i+1; j<n; ++j){
            if(strcmp (c[min], c[j]) > 0){
                min = j;
            }
        }
        if(min != i) {
            swap(c[i], c[min]);
        }
    }
    return;
}

int main() {
    char c[][60] = {"water", "apple", "melon", "banana", "watermelon", "kiwi"};
    int n = sizeof(c) / sizeof(c[0]);
    changing(c,n);
    for(int i=0; i<n; ++i) {
        cout<<c[i] <<" ";
    }
    return 0;
}