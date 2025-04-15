/* Write your PL/SQL query statement below */
SELECT eu.unique_id, e.name FROM EMPLOYEES e
LEFT JOIN EMPLOYEEUNI eu
ON e.id = eu.id