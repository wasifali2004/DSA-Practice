#include <iostream>
#include <vector>
using namespace std;

/*
void change(vector<int> &v) {
    int count = 0;
    for(int check : v) {
        if(count == check){
            count++;
        }
     }
     for(int i=0; i<v.size(); ++i) {
        if(i<count) {
            v[i] = 0;
        }
        else {
            v[i] = 1;
        }
     } 
}
*/

/*
void change(vector<int> &v) {
    int left = 0;
    int right = v.size() - 1;
    while(left < right) {
        if(v[left] % 3 == 0 && v[right] % 2 ==0 ) {
            swap(v[left], v[right]);
            left++, right++;
        }
        else if(v[left] %2== 0) {
            left++;
        }
        else if(v[right] %3 == 0){
            right--;
        }    
        }
}
*/


/*
vector<int> square(vector <int> &v) {
    int sq = 0;
    for(int i=0; i<v.size(); ++i){
        v[i] *= v[i];
    }
    return v;
}
*/


vector<int> sq_sorted(vector<int> v) {

}


int main() {
    int n;
    cout<<"Enter size: ";
    cin >> n;
    vector<int> v(n);
    for(int i=0 ;i<n; ++i) {
        cout<<"Enter elements: ";
        cin >> v[i];
    }

    vector <int> ar = square(v);
    for(int i=0; i<n; i++) {
        cout<<"=> " <<ar[i] <<"  ";
    }
}

