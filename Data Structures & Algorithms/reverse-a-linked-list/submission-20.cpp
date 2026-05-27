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
        stack<ListNode*> s;

        while(head){
            s.push(head);
            head = head->next;
        }
    
        ListNode* reverse = nullptr;

        while(s.size() != 0){
            ListNode* newNode = new ListNode(s.top()->val,nullptr);
            if(reverse == nullptr){
                reverse = newNode;
                s.pop();
                continue;
            }

            ListNode* temp = reverse;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
            s.pop();
        }

        return reverse;
    }
};
