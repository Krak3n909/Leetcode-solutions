1# Write your MySQL query statement below
2select firstName,lastName, city, state
3from person as p
4left join address as a
5on p.personId=a.personId