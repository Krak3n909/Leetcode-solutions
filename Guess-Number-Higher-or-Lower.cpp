1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int l = 1;
14        int r = n;
15        while(l<=r)
16        {
17            cout<<l<<" "<<r<<endl;
18            int m = l + (r-l)/2;
19            cout<<m<<endl;
20            int res = guess(m);
21            if(res<0)
22            {
23                r = m-1;
24            }
25            else if(res>0)
26            {
27                l = m+1;
28            }
29            else
30            {
31                return m;
32            }
33        }
34        return 6;
35    }
36};