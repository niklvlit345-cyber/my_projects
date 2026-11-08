#include "main.h"
#include <vector>
using std:: vector;

int main(){
    // test 1
    Solution test1;
    vector<int> v1 = {1,2,4};
    vector<int> v2 = {1,3,4};
    ListNode* l1 = make(v1);
    ListNode* l2 = make(v2);

    ListNode* res1 = test1.mergeTwoLists(l1, l2);

    print_listnode(res1);

    return 0;

}