1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* partition(ListNode* head, int x) {
14        ListNode* l= new ListNode();
15        ListNode* r= new ListNode();
16        ListNode* ll= l;
17        ListNode* rr= r;
18        while(head)
19        {
20            if(head->val<x)
21            {
22                l->next=new ListNode(head->val);
23                l=l->next;
24            }
25            else
26            {
27                r->next=new ListNode(head->val);
28                r=r->next;
29            }
30            head=head->next;
31        }
32        l->next=rr->next;
33        return ll->next;
34        
35    }
36};