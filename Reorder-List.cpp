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
13    void reorderList(ListNode* head) {
14        ListNode* s = head;
15        ListNode* f = head;
16        
17        while(f && f->next)
18        {
19            s = s->next;
20            f = f->next->next;
21        }
22
23        ListNode* pr = nullptr;
24        ListNode* nx;
25        ListNode* c = s->next;
26        s->next = nullptr;
27        while(c)
28        {
29            nx = c->next;
30            c->next = pr;
31            pr = c;
32            c = nx;
33        }
34        ListNode* tr = head;
35        nx = pr;
36        while(nx)
37        {
38            ListNode* t1 = tr->next;
39            ListNode* t2 = nx->next;
40
41            tr->next = nx;
42            nx->next = t1;
43
44            tr = t1;
45            nx = t2;
46        }
47    }
48};