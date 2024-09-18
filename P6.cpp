#include <iostream>
#include <vector>
using namespace std;

/*
void spherical(vector <vector<int> > v) {
    int left = 0;
    int right = v[0].size()-1;
    int top = 0;
    int bottom = v.size()-1;
    int position = 0;
    do {
        if(position == 0) {
            for(int i=left; i<=right; ++i) {
                cout<<"| "<< v[top][i];
            }
            top++;
        }
        else if(position == 1) {
            for(int i=top; i<=bottom; ++i) {
                cout<<"| "<< v[i][right];
            }
            right--;
        }
        else if(position == 2) {
            for(int i=right; i>=left; --i) {
                cout<<"| "<< v[bottom][i];
            }
            bottom--;
        }
        else {
            for(int i=bottom; i>=top; --i) {
                cout<<"| "<< v[i][left];
            }
            left++;
        }
        position = (position+1) %4;
    }while(left <= right && top <= bottom);
}
*/

vector <vector<int> > sphericalmatrix(int n) {
    vector <vector<int> > v(n, vector<int>(n));
    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;
    int position = 0;
    int check = 1;
    do {
        if(position == 0) {
            for(int i=left; i<=right; ++i) {
                 v[top][i] = check++;
            }
            top++;
        }
        else if(position == 1) {
            for(int i=top; i<=bottom; ++i) {
                v[i][right] = check++;
            }
            right--;
        }
        else if(position == 2) {
            for(int i=right; i>=left; --i) {
                v[bottom][i] = check++;
            }
            bottom--;
        }
        else {
            for(int i=bottom; i>=top; --i) {
                v[i][left] = check++;
            }
            left++;
        }
        position = (position+1) %4;
    }while(left <= right && top <= bottom);
    return v;
}

int main() {
    int size;
    cout<<"Enter matrix size: ";
    cin >>size;
    vector <vector<int>> v;

    v = sphericalmatrix(size);
    for(int i=0; i<size; ++i) {
        for(int j=0; j<size; ++j) {
            cout<<  v[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}