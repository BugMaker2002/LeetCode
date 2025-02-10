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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyNode = new ListNode(0, head);
        ListNode* node = dummyNode;
        ListNode* tmp = dummyNode;
        int length = 0;
        while(tmp->next != NULL)
        {
            length++;
            tmp = tmp->next;
        }
        for (int i = 0; i < length - n; i++)
        {
            node = node->next;
        }
        node->next = node->next->next;
        return dummyNode->next;
    }
};