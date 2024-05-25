/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = new ListNode(head->val);
        ListNode* current = head->next;
        ListNode* curTemp = temp;
        int counter = 0;
        while(current!=nullptr)
        {
            curTemp->next = new ListNode(current->val);
            curTemp = curTemp->next;
            current = current->next;
            counter ++;
        }
        if(counter%2==0)
        {
            for(int i = 0;i<counter/2;i++)
            {
                head = head->next;
            }
            return head;
        }
        for(int a = 0;a<(counter/2)+(0.5);a++)
        {
            head = head->next;
        }
        return head;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* tempCount = head;
        int counter = 0;
        while(temp!=nullptr)
        {
            temp = temp->next;
            counter ++;
        }
        int count = counter/2;
        int i = 0;
        while(i<count)
        {
            tempCount=tempCount->next;
            i++;
        }
        return tempCount;
    }
};
