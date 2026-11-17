#include <iostream>
#include <vector>
using std:: cout;
using std:: vector;


struct ListNode {
    int val; // значение узла
    ListNode *next; // указатель на следующий узел
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res_list = new ListNode();
        ListNode* result = res_list; // указатель на список
        if (list1 == nullptr){
            return list2;
        }
        if (list2 == nullptr){
            return list1;
        }
        ListNode* list1_next = list1->next;
        ListNode* list2_next = list2->next;


        while (true){
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

            if (list1 == nullptr or list2 == nullptr){
                break;
            }
            res_list->next = new ListNode;
            res_list = res_list->next;

            list1_next = list1->next;
            list2_next = list2->next;
        }
        if (list1 != nullptr){
            res_list->next = new ListNode;
            res_list = res_list->next;

            while (true){
                int value1 = list1->val;
                res_list->val = value1;
                list1_next = list1->next;
                list1 = list1_next;
                if (list1 == nullptr){
                    break;
                }
                res_list->next = new ListNode();
                res_list = res_list->next;

            }
        }
        if (list2 != nullptr){
            res_list->next = new ListNode;
            res_list = res_list->next;

            while (true){
                int value2 = list2->val;
                res_list->val = value2;
                list2_next = list2->next;
                list2 = list2_next;

                if (list2 == nullptr){
                    break;
                }
                res_list->next = new ListNode();
                res_list = res_list->next;

            }
        }

        return result;
    }
};

ListNode* make(vector<int>& mass){
    int n = mass.size();
    if (n == 0){
        ListNode* empty = new ListNode(0);
        return empty;
    }

    int x = mass[0];
    ListNode* node = new ListNode(x);
    ListNode* result = node;
    for (int i = 1; i < n; i++){
        x = mass[i];
        node->next = new ListNode(x);
        node = node-> next;
    }
    return result;
}

void print_listnode(ListNode* node){
    while (node != nullptr){
        cout << node->val << " ";
        node = node->next;
    }


    return;
}