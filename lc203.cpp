#include <iostream>
#include <vector>
using namespace std;
// 单链表
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// ListNode* removeElements(ListNode* head, int val) {
//     while (head != NULL && head->val == val) 
//     {
//         ListNode* tmp = head;
//         head = head->next;
//     }
//     ListNode* cur = head;
//     while(cur != NULL && cur->next != NULL)
//     {
//         if (cur->next->val == val)
//         {
//             ListNode* tmp = cur->next;
//             cur->next = cur->next->next;
//             delete tmp;
//         }
//         else
//         {
//             cur = cur->next;
//         }
//     }
//     return head;
// }
ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummyNode = new ListNode(0, head);
    ListNode* cur = dummyNode;
    while(cur->next != NULL)
    {
        if (cur->next->val == val)
        {
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }
        else
        {
            cur = cur->next;
        }
    }
    return dummyNode->next;
}
int main()
{
    
}