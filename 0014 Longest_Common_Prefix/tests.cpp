#include "main.h"
#include <vector>
#include <string>
#include <iostream>


using std:: cout;
using std:: string;
using std:: vector;



int main(){
    Solution check;
    // test 1:
    // vector<string> test1 = {"flower","flow","flight"};
    // string res1 = check.longestCommonPrefix(test1);
    // cout << res1;

    // test 2:
    vector<string> test2 = {"dog","racecar","car"};
    string res2 = check.longestCommonPrefix(test2);
    cout << res2;
    return 0;
}