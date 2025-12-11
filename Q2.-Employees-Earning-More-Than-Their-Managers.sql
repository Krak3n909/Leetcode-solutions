1# Write your MySQL query statement below
2select e2.name as Employee 
3from employee e2 inner join employee e1
4on e2.managerid=e1.id
5where e2.salary>e1.salary