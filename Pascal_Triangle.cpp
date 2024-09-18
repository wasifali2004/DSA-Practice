#include <iostream>
#include <vector>
using namespace std;


vector <vector<int> > pascal(int n) {
    vector <vector<int> > triangle(n);
    for(int i=0; i<n; ++i) {
        triangle[i].resize(i+1);
        for(int j=0; j<=i; ++j) {
            if(j==0 || j==i) {
                triangle[i][j] = 1;
            }
            else {
                triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
            }
        }
    }
    return triangle;
}


int main() {
    int size;
    cout<<"Enter size: ";
    cin >> size;
    vector <vector<int>> v; 
     v = pascal(size);
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); ++j) {
            cout<<v[i][j] << " " ;
        }
            cout<<endl;

    }
}