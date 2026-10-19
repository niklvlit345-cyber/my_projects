struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int value1, value2, res, x;
        ListNode dummy(0);
        ListNode* result = &dummy;
        x = 0;

        while (l1 != nullptr && l2 != nullptr){
            value1 = l1->val;
            value2 = l2->val;
            l1 = l1->next;
            l2 = l2->next;
            res = ((x + value1 + value2) % 10);
            result->next = new ListNode(res);
            result = result->next;
            x = (x + value1 + value2) / 10;
        }
        
        while (l1 != nullptr && l2 == nullptr){
            value1 = l1->val;
            l1 = l1->next;
            res = ((x + value1) % 10);
            result->next = new ListNode(res);
            result = result->next;
            x = (x + value1) / 10;
        }

        while (l2 != nullptr && l1 == nullptr){
            value2 = l2->val;
            l2 = l2->next;
            res = ((x + value2) % 10);
            result->next = new ListNode(res);
            result = result->next;
            x = (x + value2) / 10;
        }

        if (x == 1){
            result->next = new ListNode(1);
        }

        return dummy.next;
    }
};
