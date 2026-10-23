Select *,
CASE 
WHEN x + y > z
    AND x + z > y
    AND y + z > x
    THEN 'Yes'
    Else 'No'
    END AS 'triangle'
FROM Triangle