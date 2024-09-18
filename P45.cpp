#include <bits/stdc++.h>
using namespace std;



int main() {
    string str1, str2;
    cin >> str1 >> str2;
    string common = "";
        for(int i=0; i<str1.length(); ++i) {
            if(str1[i] == str2[i] ){
                if(str1[i] != common[i]){
                    common += str1[i];
                }
            }
            
        }
    cout << common;
}



/*
int check = nums.size();
        int count = 1;
        char c = '_';
        sort(nums.begin(), nums.end());
        for(int i=1; i<=check; ++i) {
           if(nums[i-1] == nums[i]) {
                nums.push_back(nums[i-1]);
           }
           else {
            count ++;
           }
            }
        return count;
*/


/*
if(word1.length() == 0) {
                result += word2[high];
                high++;
            }
            else if(word2.length() == 0) {
                result += word1[low];
                low++;
            }
            if(low == 0){
            result += word1[low];
            low++;
            }
            else if(low%2 == 0) {
                result += word1[low];
                low++;
            }
            else if(high%2 == 0){
                result += word2[high];
                high++;
            }
            n--;
        }

        */
