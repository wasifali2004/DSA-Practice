#include <bits/stdc++.h>
using namespace std;

        //Count Sort
/*        
void count_sort(vector<int> &v ,int n) {
    int ele = INT_MIN;
    for(int i=0; i<n; ++i) {
        ele = max(v[i], ele);
    }
    vector<int> freq (ele+1 ,0);
    for(int i=0; i<n; ++i) {
        freq[v[i]]++;
    }

    for(int i=1; i<=ele; ++i) {
        freq[i] += freq[i-1];
    }
    vector<int> ans(n);
    for(int i=n-1; i>=0; --i) {
        ans[--freq[v[i]]] = v[i];
    }
    for(int i=0; i<n; ++i) {
        v[i] = ans[i];
    }
    return;
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
    count_sort(v, n);
    for(int i=0; i<n; ++i) {
        cout<<v[i] <<" ";
    }

    return 0;
}
*/


        //Radix Sort

void count(vector<int> &v, int pos) {
    vector<int> freq(10, 0);
    for (int i = 0; i < v.size(); ++i) {
        freq[(v[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; ++i) {
        freq[i] += freq[i - 1];
    }
    vector<int> ans(v.size());
    for (int i = v.size() - 1; i >= 0; --i) {
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }
    for (int i = 0; i < v.size(); ++i) {
        v[i] = ans[i];
    }
}

void Radix_sort(vector<int> &v, int n) {
    int ele = INT_MIN;
    for (auto x : v) {
        ele = max(x, ele);
    }
    for (int pos = 1; ele / pos > 0; pos *= 10) {
        count(v, pos);
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter " << i << " element: ";
        cin >> v[i];
    }
    Radix_sort(v, n);
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
