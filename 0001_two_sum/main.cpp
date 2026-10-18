#include <iostream>
#include "solution.cpp"
#include <vector>
using std:: cout;
using std:: vector;


void print_pair(const vector<int> & r){
    if (r.size() == 2){
        printf("[%d,%d]", r[0], r[1]);
    }
    else{
        cout << "[] -  не найдена пара";
    }
}


int main(){
    Solution sol;

    // test 1: [2, 7, 11, 15], sum = 9;
    vector<int> n1 = {2, 7, 11, 15};
    cout << "Test 1: "; print_pair(sol.twoSum(n1, 9));

    // test 2: [3, 2, 4], sum = 6;
    vector<int> n2 = {3, 2, 4};
    cout << "Test 2: "; print_pair(sol.twoSum(n2, 6));

    // test 3: [3, 3], sum = 6;
    vector<int> n3 = {3, 3};
    cout << "Test 3: "; print_pair(sol.twoSum(n3, 6));

    return 0;
}