1# Write your MySQL query statement below
2select o.customer_number 
3from orders o
4group by (o.customer_number)
5order by count(o.customer_number) desc
6limit 1