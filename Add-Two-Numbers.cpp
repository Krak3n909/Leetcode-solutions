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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        int c = 0;
15        ListNode* head = new ListNode(0);
16        ListNode* dummy = head;
17        while(l1 && l2)
18        {
19            int tmp = l1->val;
20            tmp += l2->val;
21            tmp += c;
22            ListNode* l = new ListNode((tmp % 10));
23            head->next = l;
24            head = head->next;
25            c = tmp / 10;
26            l1 = l1->next;
27            l2 = l2->next;
28        }
29        
30        while(l1)
31        {
32            int tmp = l1->val;
33            tmp += c;
34            ListNode* l = new ListNode((tmp % 10));
35            head->next = l;
36            head = head->next;
37            c = tmp / 10;
38            l1 = l1->next;
39        }
40        
41        while(l2)
42        {
43            int tmp = l2->val;
44            tmp += c;
45            ListNode* l = new ListNode((tmp % 10));
46            head->next = l;
47            head = head->next;
48            c = tmp / 10;
49            l2 = l2->next;
50        }
51
52        if(c > 0)
53        {
54            ListNode* l = new ListNode((c));
55            head->next = l;
56            head = head->next;
57        }
58
59        return dummy->next;
60    }
61};