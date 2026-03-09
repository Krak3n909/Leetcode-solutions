1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int i = m - 1;
5        int j = n - 1;
6        int k = m + n - 1;
7        while(j >= 0 && i >= 0)
8        {
9            if(nums1[i] > nums2[j])
10            {
11                nums1[k--] = nums1[i--];
12            }
13            else
14            {
15                nums1[k--] = nums2[j--];
16            }
17        }
18        while(i >= 0)
19        {
20            nums1[k--] = nums1[i--];
21        }
22
23        while(j >= 0)
24        {
25            nums1[k--] = nums2[j--];
26        }
27
28    }
29};