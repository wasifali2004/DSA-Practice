#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
int main() {
    int row , columns;
    cout<<"Enter row: ";
    cin >> row;
    cout<<"Enter columns: ";
    cin >> columns;
    vector <vector<int> > v(row, vector<int> (columns));
    int count = 0;
    for(int i=0; i<row; ++i) {
        for(int j=0; j<columns; ++j) {
            cin >> v[i][j];
        }
    }
    int check = INT_FAST8_MIN;
    int column = v[0].size();
    for(int i=0; i<v.size(); ++i) {
        for(int j=0; j<v[i].size(); ++j) {
            if(v[i][j] == 1) {
                count = columns - j;
                if(count > check) {
                    check = count;
                    column = i;
                }
                break;
            }
        }
    }
    cout<<column;

}

*/

vector <vector<int> > transpose(vector <vector<int> >& v) {
    for(int i=0; i<v.size(); ++i) {
        for(int j=0; j<i; ++j) {
            swap(v[i][j] , v[j][i]);
        }
    }

    for(int i=0; i<v.size(); ++i) {
        reverse(v[i].begin(), v[i].end());
    }
    return v;
}

int main() {
    int size;
    cout<<"Enter size: ";
    cin >> size;
    vector <vector<int> > v(size, vector<int> (size));
    for(int i=0; i<size; i++) {
        for(int j=0; j<size;++j) {
            cin >> v[i][j];
        }
    }

    vector <vector<int> > vec = transpose(v);
    for(int i=0; i<vec.size(); ++i) {
        for(int j=0; j<vec[i].size(); ++j) {
            cout<<vec[i][j] <<" ";
        }
        cout<<endl;
    }
}