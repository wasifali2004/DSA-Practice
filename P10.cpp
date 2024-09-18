#include <bits/stdc++.h>
using namespace std;

/*
bool palindrome_num(int palindrome, int *check) {
    if(palindrome == 0 ) {
        return true;
    }
    bool result = (palindrome_num(palindrome/10, check) and (palindrome%10) == (*check)%10 );
    (*check) /= 10;
    return result;
}

int main() {
    int palindrome;
    cout<<"Enter palindrome number: ";
    cin >> palindrome;
    int num = palindrome;
    int *check = &num;
    cout<<palindrome_num(palindrome, check); 

}
*/

string string_check(string c, int n) {
    if(n == 0) {
        return "";
    }
    string check = "";
    if(c[n] != 'a'&& c[n] != 'A') {
        check = c[n];
    }
    return string_check(c, n-1) + check;
}

int main() {
    string c = "AbaBcAC";
    int size = 7;
    cout<<string_check(c,7);

    return 0;
}