#include <string>
#include <vector>
#include <algorithm> // используем поиск find для vector
using std::find;
using std:: string;
using std:: vector;
using std:: distance; // индекс по значению

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int n = s.length();
        int copy_i = -3;
        vector<string> sym1 = {"M", "D", "C", "L", "X", "V", "I"};
        vector<string> sym2 = {"CM", "CD", "XL", "XC", "IV", "IX"};
        vector<int> num1 = {1000, 500, 100, 50, 10, 5, 1};
        vector<int> num2 = {900, 400, 40, 90, 4, 9};

        for (int i = 0; i < n - 2; i++){
            int in1 = distance(sym1.begin(), find(sym1.begin(), sym1.end(), s.substr(i, 1)));
            int in2 = distance(sym2.begin(), find(sym2.begin(), sym2.end(), s.substr(i, 2)));
            if (in2 != 6){
                result += num2[in2];
                i++;
                copy_i = i;
            }
            else{
                result += num1[in1];
            }
        }

        if (n == 1){
            int in1 = distance(sym1.begin(), find(sym1.begin(), sym1.end(), s.substr(0, 1)));
            return num1[in1];
        }

        int in2 = distance(sym2.begin(), find(sym2.begin(), sym2.end(), s.substr(n - 2, 2)));
        if (in2 != 6 and copy_i != n - 2){
            result += num2[in2];
        }
        else if (copy_i == n - 2){
            int in1 = distance(sym1.begin(), find(sym1.begin(), sym1.end(), s.substr(n - 1, 1)));
            result += num1[in1];
        }
        else{
            int in1 = distance(sym1.begin(), find(sym1.begin(), sym1.end(), s.substr(n - 2, 1)));
            result += num1[in1];
            in1 = distance(sym1.begin(), find(sym1.begin(), sym1.end(), s.substr(n - 1, 1)));
            result += num1[in1];
        }
        return result;
    }
};