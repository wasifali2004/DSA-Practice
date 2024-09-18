#include <bits/stdc++.h>
using namespace std;

/*
bool choco_calculate(vector<int> v, int mid, int p) {
    int choco_sum = 0;
    int peoples = 1;
    for(int i=0; i<v.size(); ++i) {
        if(v[i] > mid){
            return false;
        }
        else if(choco_sum+v[i] > mid) {
            choco_sum = v[i];
            peoples++;
            if(peoples > p) {
                return false;
            }
        }
        else {
            choco_sum += v[i];
        }
    }
    return true;
}

int choco(vector<int> &v, int n, int p) {
    int low = v[0];
    int high = 0;
    int ans = -1;
    for(int i=0; i<v.size(); ++i) {
        high += v[i];
    }
    while (low <= high) 
    {
        int mid = low + (high - low)/2;
        if(choco_calculate(v, mid, p)){
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
    
}

int main() {
    int n;
    cout<<"Enter total: ";
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >>v[i];
    }
    int people;
    cout<<"Enter Total Peoples: ";
    cin >> people;
    cout << choco(v, n, people);

    return 0;
}

*/

bool race_distance(vector<int> v, int mid, int p) {
    int poeples = 1;
    int last_dis = v[0];
    for(int i=0; i<v.size(); ++i) {
        if(v[i] - last_dis >= mid) {
            poeples++;
            last_dis = v[i];
            if(poeples == p) {
                return true;
            }
        }
    }
    return false;
}

int race(vector<int> &v, int n, int p) {
    int low = 0;
    int high = v[n-1] - v[0];
    int ans = -1;
    while( low <= high) {
        int mid = low + (high - low)/2;
        if(race_distance(v, mid, p)) {
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
    int n;
    cout<<"Enter total: ";
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        cout<<"Enter "<<i <<" element: ";
        cin >>v[i];
    }
    int people;
    cout<<"Enter Total Peoples: ";
    cin >> people;
    cout << race(v, n, people);

    return 0;
}