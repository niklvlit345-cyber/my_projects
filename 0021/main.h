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
        ListNode* res_list = new ListNode();
        ListNode* result = res_list;
        if (list1 == nullptr){
            return list2;
        }
        if (list2 == nullptr){
            return list1;
        }
        ListNode* list1_next = list1->next;
        ListNode* list2_next = list2->next;


        while (list1 != nullptr and list2 != nullptr){
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
            res_list->next = new ListNode;
            res_list = res_list->next;
            list1_next = list1->next;
            list2_next = list2->next;
        }

        while (list1 != nullptr){
            int value1 = list1->val;
            res_list->val = value1;
            list1_next = list1->next;
            list1 = list1_next;

            res_list->next = new ListNode();
            res_list = res_list->next;

        }

        while (list2 != nullptr){
            int value2 = list2->val;
            res_list->val = value2;
            list2_next = list2->next;
            list2 = list2_next;

            res_list->next = new ListNode();
            res_list = res_list->next;

        }

        res_list->next = nullptr;
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