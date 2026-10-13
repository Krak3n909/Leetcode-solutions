DELETE p1
From person p1
JOIN person p2
where p1.email = p2.email and p1.id > p2.id