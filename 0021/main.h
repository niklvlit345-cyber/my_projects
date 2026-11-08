#include <iostream>
#include <vector>
using std:: cout;
using std:: vector;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res_list;
        ListNode* result = res_list;
        ListNode* list1_next = list1->next;
        ListNode* list2_next = list2->next;


        while (list1->next != nullptr and list2->next != nullptr){
            int value1 = list1->val;
            int value2 = list2->val;

            if (value1 > value2){
                res_list->val = value2;
                list2 = list2_next;
            }
            else{
                res_list->val = value1;
                list1 = list1_next;
            }

            ListNode* next_res = res_list->next;
            res_list = next_res;

            ListNode* list1_next = list1->next;
            ListNode* list2_next = list2->next;
        }

        while (list1->next != nullptr){
            int value1 = list1->val;
            res_list->val = value1;
            ListNode* list1_next = list1->next;
            list1 = list1_next;

            ListNode* next_res = res_list->next;
            res_list = next_res;
        }

        while (list2->next != nullptr){
            int value2 = list2->val;
            res_list->val = value2;
            ListNode* list2_next = list2->next;
            list2 = list2_next;

            ListNode* next_res = res_list->next;
            res_list = next_res;
        }
        return result;
    }
};


void print_listnode(ListNode* node_1){
    ListNode* node = node_1;
    ListNode* node_next = node->next;
    while (node_next != nullptr){
        int value = node->val;
        cout << value << ' ';
        node = node_next;
        node_next = node->next;
    }
    cout << '\n';
}


ListNode* make(vector<int>& mass){
    int n = mass.size();
    if (n == 0){
        ListNode* empty(0);
        return empty;
    }

    int x = mass[0];
    ListNode node(x);
    ListNode* result = &node;
    for (int i = 1; i < n; i++){
        ListNode next(mass[i]);
        node.next = &next;
        node = next;
    }
    return result;
}