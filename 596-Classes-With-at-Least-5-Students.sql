-- select student class from courses group by class having count(*) > 5;
SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(*) >= 5;