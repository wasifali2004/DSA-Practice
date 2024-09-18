#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    vector<int> nums1(a);
    cin >> b;
    vector<int> nums2(b);
    for(int i=0; i<a; ++i) {
        cin >>nums1[i];
    }
    for(int i=0; i<b; ++i) {
        cin >> nums2[i];
    }
    double ans = 0;
        int n = nums1.size() + nums2.size();
        vector<int> v;
        int low = 0;
        int high = 0;
        while(nums1.size() > low || nums2.size() > high) {
            if(nums1[low] > nums2[high]) {
                v.push_back(nums2[high]);
                high++;
            }
            else {
                v.push_back(nums1[low]);
                low++;
            }
        }
    for(int i=0; i<v.size(); ++i) {
        cout<<v[i] <<" ";
    }
}