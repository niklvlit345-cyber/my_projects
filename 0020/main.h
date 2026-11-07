#include <string>
#include <vector>

using std:: string;
using std:: vector;

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if (n % 2 == 1){
            return false;
        }
        
        vector<char> deq;

        for (char x : s){
            if (x == '(' or x == '[' or x == '{'){
                deq.push_back(x);
            }
            else{
                if (deq.size() == 0){
                    return false;
                }

                char y = deq.back();
                deq.pop_back();
                if (x == ']' and y != '['){
                    return false;
                }
                else if (x == ')' and y != '('){
                    return false;
                }
                else if (x == '}' and y != '{'){
                    return false;
                }
            }
        }

        int check = deq.size();
        if (check > 0){
            return false;
        }
        else{
            return true;
        }
    }
};