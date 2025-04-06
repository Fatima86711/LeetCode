/* Write your PL/SQL query statement below */
SELECT  emp.name,  b.bonus FROM  employee emp
LEFT JOIN BONUS b ON emp.empID = b.empID
WHERE b.bonus < 1000 OR b.bonus is NULL ;
