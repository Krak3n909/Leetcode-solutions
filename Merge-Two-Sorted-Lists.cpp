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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        ListNode* h = new ListNode();
15        ListNode* c = h;
16        while (list1 && list2) {
17            if (list1->val < list2->val) {
18                h->next = list1;
19                list1 = list1->next;
20            } else {
21                h->next = list2;
22                list2 = list2->next;
23            }
24            h = h->next;
25        }
26        while (list1) {
27            h->next = list1;
28            list1 = list1->next;
29            h = h->next;
30        }
31
32        while (list2) {
33            h->next = list2;
34            list2 = list2->next;
35            h = h->next;
36        }
37        return c->next;
38    }
39};