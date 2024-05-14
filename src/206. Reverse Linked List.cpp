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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next==nullptr)
        {
            return head;
        }
        vector<int> temp;

        do {
            temp.push_back(head->val);
            head = head->next;
        } while (head != nullptr);

        reverse(temp.begin(), temp.end());

        ListNode* result = new ListNode(temp[0]);
        ListNode* current = result;

        for (int i = 1; i < temp.size(); i++) {
            current->next = new ListNode(temp[i]);
            current = current->next;
        } 
        current->next = nullptr;
        return result;
    }
};
