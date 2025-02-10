#include <iostream>
using namespace std;

class MyLinkedList {
public:
    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val): val(val), next(nullptr){}
    };

    MyLinkedList() {
        _size = 0;
        _dummyHead = new LinkedNode(0);
    }
    
    int get(int index) {
        if (index >= _size)
        {
            return -1;
        }
        LinkedNode* node = _dummyHead;
        for(int i = 0; i <= index; i++)
        {
            node = node->next;
        }
        return node->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(_size, val);
    }
    
    void addAtIndex(int index, int val) {
        LinkedNode* tmp = new LinkedNode(val);
        LinkedNode* node = _dummyHead;
        if (index < 0) index = 0;
        if (index <= _size)
        {
            for (int i = 0; i < index; i++)
            {
                node = node->next;
            }
            tmp->next = node->next;
            node->next = tmp;
            _size++;   
        }
    }
    
    void deleteAtIndex(int index) {
        LinkedNode* node = _dummyHead;
        if (index < _size)
        {
            for (int i = 0; i < index; i++)
            {
                node = node->next;
            }
            node->next = node->next->next;
            _size--;  
        }
    }
private:
    int _size;
    LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main()
{
    MyLinkedList myLinkedList;
    myLinkedList.addAtHead(1);
    myLinkedList.addAtTail(3);
    myLinkedList.addAtIndex(1, 2);    // 链表变为 1->2->3
    myLinkedList.get(1);              // 返回 2
    myLinkedList.deleteAtIndex(1);    // 现在，链表变为 1->3
    myLinkedList.get(1);              // 返回 3
    
}