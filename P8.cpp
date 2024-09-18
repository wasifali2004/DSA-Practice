#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size: ";
    cin >> n;
    int a = 0;                  // space complexity is O(1) (constant) b/c space does not increase on increasing or changing size.
    int b = 1;                  // whereas in a array if you change size, array occupy more space so extra space is increased.
    int result = 1;             // By Asymtotic Analysis change in input does instruction increases?
    for(int  i=2; i<=n; ++i) {
        result = a+b;           //Time Complexity will be O(n)
        a = b;                  //But Actually is 3n-2 but b/c its constant and small as compared to n its ignore.
        b = result;
    }
    cout<<result;               //Average Case time complexity: Big theta
    return 0;                   //Worse Case time complexity: Big O
}                               //Best Case time complexity: Big omega
                                