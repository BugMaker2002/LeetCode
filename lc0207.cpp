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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* node = headA;
        int len1 = 0, len2 = 0;
        while(node != NULL)
        {
            len1++;
            node = node->next;
        }
        node = headB;
        while(node != NULL)
        {
            len2++;
            node = node->next;
        }
        if (len2 >= len1) 
        {
            for (int i = 0; i < len2 - len1; i++)
            {
                headB = headB->next;
            }
        }
        else
        {
            for (int i = 0; i < len1 - len2; i++)
            {
                headA = headA->next;
            }
        }
        while (headA != NULL && headB != NULL)
        {
            if (headA == headB)
            {
                return headA;
            }     
            if (headA->next == headB->next && headA->next != NULL)
            {
                return headA->next;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};