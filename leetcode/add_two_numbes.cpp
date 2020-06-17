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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long int left=0,right=0;
        long long int c = 0;
        int carrie = 0;
        ListNode* output = new ListNode;
        ListNode* head = output;
        while(true){
            if(l1!=nullptr && l2!=nullptr){
                c = (l1->val)+(l2->val)+c;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1!=nullptr){
                c = (l1->val)+c;
                l1 = l1->next;
            }
            else if(l2!=nullptr){
                c = (l2->val)+c;
                l2 = l2->next;
            }
            else{
                break;
            }
            ListNode* tmp = new ListNode;
            tmp->val = c%10;
            output->next = tmp;
            c = c/10;
            output = output->next;
        }
        if(c>=1){
            ListNode* tmp = new ListNode;
            tmp->val = c%10;
            output->next = tmp;
            c = c/10;
        }
        return head->next;
    }
};
