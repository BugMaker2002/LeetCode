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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyNode = new ListNode(0, head);
        ListNode* node = dummyNode;
        while(node->next != NULL && node->next->next != NULL)
        {
            ListNode* tmp1 = node->next;
            ListNode* tmp2 = node->next->next;
            node->next = tmp2;
            tmp1->next = tmp2->next;
            tmp2->next = tmp1;
            for (int i = 0; i < 2; i++)
            {
                node = node->next;
            }
        }
        return dummyNode->next;
    }
};