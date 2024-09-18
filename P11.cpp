#include <bits/stdc++.h>
using namespace std;


/*
void sequence(int n) {
    if(n == 0) {
        return ;
    }
    sequence(n-1);
    cout<<" " <<n;

}

int main() {
    int n;
    cout<<"Enter size: ";
    cin >> n;
    sequence(n);

    return 0;
}n
*/

/*
void multiples(int num, int k) {
    if(k == 0) {
        return;
    }

    multiples(num, k-1);
    cout<<(num*k) <<" ";

}

int main() {
    int num, k;
    cout<<"Enter a number: ";
    cin >> num;
    cout<<"Enter k: ";
    cin >>k;
    multiples(num, k);

    return  0;
}
*/

int summation(int num) {
    if(num == 0) {
        return num;
    }
    return summation(num - 1) + ( (num % 2 ==0)? (-num): (num) );
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin >> num;
    cout<<summation(num);
}