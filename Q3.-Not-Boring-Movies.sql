1# Write your MySQL query statement below
2select * from cinema
3where id%2=1
4AND description<>'boring'
5Order by rating desc