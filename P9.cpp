#include <iostream>
using namespace std;

/*
int fact (int x) {
    if(x==1) {
        return 1;
    }
    return x*fact(x-1);
}

int main() {
    int result = fact(10);
    cout<<result;

}
*/

/*
int power(int p, int q) {
    if((q==0 || p==1) && (q==1 ||p==0) ){
        return 0;
    }
    else if(q==0) return 1;
    return p*power(p,q-1);
}


int main() {
    int p=2,q=2;
    cout<<power(p,q);
}
*/


/*
int mx(int arr[], int n, int ans) {
    if(n==0) {
        return ans;
    }
    if(ans < arr[n]) {
        ans = arr[n];
    return mx(arr, n-1, ans );
    }
}

int main() {
    int size;
    cout<<"Enter size: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; ++i) {
        cout<<"Enter "<<i <<" index element: ";
        cin >> arr[i];
    }
    int ans = arr[0];
    cout<<mx(arr,size, ans);

    return 0;
}

*/


int sum(int *arr, int it ,int n ) {
    if(it == n-1) {
        return arr[it];
    }
    return arr[it] + sum(arr, it+1, n);
}

int main() {
    int arr[5];
    for(int i=0; i<5; ++i) {
        cout<<"Enter " <<i <<" element: ";
        cin >> arr[i];
    }
    int check = arr[0];
    cout<<sum(arr, 0, 5);
}