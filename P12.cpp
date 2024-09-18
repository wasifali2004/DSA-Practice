#include <bits/stdc++.h>
using namespace std;


/*
int gcd(int x, int y) {
    if(y>x) {
        return gcd(y,x);
    }
    if( y == 0) {
        return x;
    }
    return gcd(y, x%y);
}

int main() {
    int num, num1;
    cout<<"Enter two numbers: ";
    cin >> num >> num1;
    cout<< gcd(num, num1);

    return 0;
}
*/

/*
int armstong(int n, int d) {
    if(n == 0) {
        return 0;
    }
    int check = n%10;
    return pow(check, d) + armstong(n/10, d);
    
}

int main() {
    int num, d=0;
    cout<<"Enter a armstong number: ";
    cin >> num;
    int temp = num;
    while(temp > 0) {
        temp /= 10;
        d++;
    }
    int result = armstong(num, d);
    if(result == num) {
        cout<<"ARMSTONG! ";
    }
    else {
        cout<<"NOT A AMRSTONG! ";
    }

    return 0;
}
*/

int minimum(int *st, int n, int idx) {
    if(idx == n-1) {
        return 0;
    }
    else if(idx == n-2) {
        return minimum(st,n,idx+1) + abs(st[idx]- st[idx+1]);
    }
    return min(minimum(st, n, idx+1) + abs(st[idx] - st[idx+1] ), minimum(st, n, idx+2) + abs(st[idx] - st[idx+2]) );

}

int main() { 
    int size;
    cout<<"Enter size: ";
    cin >>size;
    int arr[size];
    for(int i=0; i<size; ++i) {
        cin >>arr[i];
    }
    cout<< minimum(arr, size, 1);

    return 0;
}