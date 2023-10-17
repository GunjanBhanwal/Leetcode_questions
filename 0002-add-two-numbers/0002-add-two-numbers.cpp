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
        int count=0;
        int carry=0;
         ListNode *head=new ListNode(0);
         ListNode *tail=head;
        int k;
      while(l1!=NULL || l2 !=NULL || carry != 0){
          int digit1 = (l1 != nullptr) ? l1->val : 0;
          int digit2 = (l2 != nullptr) ? l2->val : 0;
           k=digit1+digit2+carry;
           int digit=k%10;
           carry=k/10;
          ListNode *temp= new ListNode(digit);
          tail->next=temp;
          tail=tail->next;
       l1 = (l1 != nullptr) ? l1->next : nullptr;
       l2 = (l2 != nullptr) ? l2->next : nullptr;
      }  
      return head->next;
    }
};