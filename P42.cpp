#include <bits/stdc++.h>
using namespace std;

class hashing{
    private:
    vector<list<int> > v;
    int buckets;
    public:
    hashing(int n) {
        buckets = n;
        v.resize(n);
    }

    int hashvalue(int k) {
        return k%buckets;
    }

    void add(int key) {
        int idx = hashvalue(key);
        v[idx].push_back(key);
    }

    list<int>::iterator search(int key) {
        int idx = hashvalue(key);
        return find(v[idx].begin(), v[idx].end(), key);
    }

    void deleted(int key){
        int idx = hashvalue(key);
        if(search(key) != v[idx].end()) {
            v[idx].erase(search(key));
            cout<<"Key is Deleted!" ;
        }
        else {
            cout<<"Not deleted!";
        }
    }
};

int main() {
    hashing h(10);
    h.add(5);
    h.add(10);
    h.add(15);
    h.deleted(10);
}