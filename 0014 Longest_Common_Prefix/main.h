#include <vector>
#include <string>
#include <algorithm>


using std:: vector;
using std:: string;
using std:: min_element;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int result = 0;
        auto min_el = min_element(strs.begin(), strs.end(),
            [](const string& a, const string& b){
                return a.length() < b.length();   
            }   
        );
        
        size_t min_count = min_el->length();



        for (size_t i = 0; i < min_count; i++){
            char check = strs[0][i];
            for (size_t j = 1; j < n; j++){
                if (check != strs[j][i]){
                    string s = strs[0];
                    return s.substr(0, result);                    
                }
            }
            result += 1;
        }


        string s = strs[0];
        return s.substr(0, result); 

    }
};