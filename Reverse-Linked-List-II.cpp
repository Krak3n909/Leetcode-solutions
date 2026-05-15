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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        vector<int> data;
15        ListNode* c = head;
16        while(c)
17        {
18            data.push_back( c->val );
19            c = c->next;
20        }
21        reverse(data.begin() + left - 1, data.begin() + right);
22        c = head;
23        int i = 0;
24        while(c)
25        {
26            c->val = data[i++];
27            c = c->next;
28        }
29        return head;
30    }
31};