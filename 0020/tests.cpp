#include "main.h"
#include <string>
#include <iostream>

using std:: cout;

int main(){
    // test 1
    // Solution test1;
    // string s1 = "()";
    // bool res1 = test1.isValid(s1);
    // cout << res1;
    // return 0;

    // test 2
    // Solution test2;
    // string s2 = "()[]{}";
    // bool res2 = test2.isValid(s2);
    // cout << res2;
    // return 0;

    // test 3
    Solution test3;
    string s3 = "(]";
    bool res3 = test3.isValid(s3);
    cout << res3;
    return 0;
}