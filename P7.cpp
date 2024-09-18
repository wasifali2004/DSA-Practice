#include <iostream>
#include <vector>
using namespace std;

void sum( vector<vector<int>> &v, int r1, int r2, int c1, int c2 ){
    int add = 0;
    for(int i=r1; i<=r2; ++i) {
        for(int j=c1; j<=c2; ++j) {
            add += v[i][j];
        }
    }
    cout<<"The sum is: "<<add <<endl;
}

int main() {
    int rows ,columns, r1, r2, c1, c2;
    cout<<"Enter rows: ";
    cin >>rows;
    cout<<"Enter columns: ";
    cin >> columns;
    vector <vector<int> > v(rows, vector<int> (columns));
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<columns; ++j) {
            cin >> v[i][j];
        }
    }
    cout<<"Enter first: ";
    cin >> r1 >> c1;
    cout<<"Enter second: ";
    cin >> r2 >>c2;
    if(r1 >rows || r2 >rows || c1 >columns || c2>columns || r1> r2 || c1 >c2) {
        cout<<"Invalid! "<<endl;
    }
    sum(v, r1, r2, c1, c2);

    return 0; 
}