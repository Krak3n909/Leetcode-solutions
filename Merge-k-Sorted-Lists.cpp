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
13
14    ListNode* merge(ListNode* l1, ListNode* l2)
15    {
16        if(l1 == nullptr)
17        {
18            return l2;
19        }
20        if(l2 == nullptr)
21        {
22            return l1;
23        }
24        if(l1->val >= l2->val)
25        {
26            l2->next = merge(l2->next, l1);
27            return l2;
28        }
29        else
30        {
31            l1->next = merge(l1->next, l2);
32            return l1;
33        }
34    }
35
36    ListNode* mergeKLists(vector<ListNode*>& lists) {
37        if(lists.size() == 0)
38        {
39            return nullptr;
40        }
41        else if(lists.size() == 1)
42        {
43            return lists[0];
44        }
45        ListNode* tmp = lists[0];
46        for(int i=1;i<lists.size();i++){
47           tmp = merge(tmp, lists[i]);
48        }
49        return tmp;
50    }
51};