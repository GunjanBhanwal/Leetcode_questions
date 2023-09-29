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
    ListNode* sortList(ListNode* head) {
         vector<int>ans;
       ListNode* a=head;
        ListNode* b=head;
       while(a!=NULL){
           ans.push_back(a->val);
           a=a->next;       } 
    
    int i=0;
    sort(ans.begin(),ans.end());
    while(b!=NULL){
           b->val=ans[i];
           i++;
           b=b->next;       } 
           return head;
    }
};