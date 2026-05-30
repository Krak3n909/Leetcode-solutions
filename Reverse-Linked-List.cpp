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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* p = nullptr;
15        ListNode* c = head;
16        ListNode* n = nullptr;
17        
18        while(c)
19        {
20            n = c->next;
21            c->next = p;
22            p = c;
23            c = n;
24        }
25        return p;
26    }
27};