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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        int c = 0;
15        ListNode* cur = head;
16        ListNode* pr = cur;
17        while(cur)
18        {
19            c++;
20            cur = cur->next;
21        }
22        int tmp = c;
23        c -= n;
24        if(c == 0)
25        {
26            return head->next;
27        }
28        cur = head;
29        while(c--)
30        {
31            pr = cur;
32            cur = cur->next;
33        }
34        pr->next = cur->next;
35        delete cur;
36        return head;
37    }
38};