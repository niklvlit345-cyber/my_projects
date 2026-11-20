#include "main.h"
#include <iostream>
Solution sol;

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    std:: cout << "TEST 1:\t" << sol.convert(s, numRows) << '\n';

    s = "PAYPALISHIRING";
    numRows = 4;
    std:: cout << "TEST 2:\t" << sol.convert(s, numRows) << '\n';


    s = "A";
    numRows = 1;
    std:: cout << "TEST 3:\t" << sol.convert(s, numRows) << '\n';


    return 0;
}