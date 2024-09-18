#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
template <class T>

class checking {
    public:
    T n;
    T val;
    checking(T x, T y) {
        n = x;
        val = y;
    }
    void display() {
        cout<< n <<" "<< val << endl;
    }
};


int main() {
    checking<int> obj(5,5);
    checking<char> obj1('a','b');
    //obj.display();
    //obj1.display();
    list<int> check = {1,2,3,4,5};
    list<int> :: iterator dull = check.begin();
    //cout<< *dull <<endl;
    //advance(dull, 3);
    //cout<< *dull <<endl;
    //for(auto i : check) {
        //cout<< i <<" ";
    //}
    advance(dull , 3);
    check.insert(dull, 10);
    auto s = check.begin();
    auto r= check.end();
    advance(r,3);
    check.erase(s,r);
    for(auto i : check) {
        cout<< i <<" ";
    }
}

