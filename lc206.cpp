#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummyNode = new ListNode(0);
        while(head != NULL)
        {
            int val = head->val;
            ListNode* tmp = new ListNode(val);
            tmp->next = dummyNode->next;
            dummyNode->next = tmp;
            head = head->next;
        }
        return dummyNode->next;
    }
};