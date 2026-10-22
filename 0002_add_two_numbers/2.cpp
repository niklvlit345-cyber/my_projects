#include <iostream>
#include "1.cpp"
using std:: cout;


int main(){
    ListNode node1(2);
    ListNode node2(3);
    ListNode *s1 = &node1;
    ListNode *s2 = &node2;
    node1.next = new ListNode(4);
    node2.next = new ListNode(5);
    ListNode *h1 = node1.next;
    ListNode *h2 = node2.next;
    h1->next = new ListNode(5);
    h2->next = new ListNode(2);
    h1 = h1->next;
    h2 = h2->next;
    h1->next = new ListNode(1);
    h2->next = new ListNode(2);
    h1 = h1->next;
    h2 = h2->next;
    // node 1: 1|5|4|2
    // node 2: 2|2|5|3
    Solution res;
    ListNode *value = res.addTwoNumbers(s1, s2);
    cout << "Result:\n";
    while (value != nullptr){
        cout << value->val << '\n';
        value = value->next;
    }

    return 0;
}