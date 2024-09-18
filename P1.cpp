#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main() {
    float arr[10];
    for(float &element : arr) {
        cin >> element;
    }                                                 //Vetors are dynamic arrays
    for(float elements: arr) {
        cout<<elements;   
    }
    return 0;
}
*/

/*
int main() {
    vector<float> v= {1.1 , 2.2, 3.3 ,4.4, 5.5};
    float my;
    for(int i=0; i<5; ++i) {
        cout<<"Enter: ";
        cin >> my;
        v.push_back(my);
    }

    for(int i=0; i<v.size()- 1; ++i) {
        if(v[i] > v[i+1]) {
            cout<<"Not sorted!";
            break;
        }
    } 
}
*/

int main() {
    vector<int> v= {1 , 2, 3 ,4, 5};
    float my;
    for(int i=0; i<5; ++i) {
        cout<<"Enter: ";
        cin >>my;
        v.push_back(my);
    }
    int add = 0;
    int add2 = 0;
    for(int i=0;i <v.size(); ++i) {
        if(v[i] % 2 ==0) {
            add += v[i];
        }
        else {
        add2 += v[i];
    }
    }
     cout<< "Difference is : " << add - add2;
    
}
