/* Write your PL/SQL query statement below */
SELECT max(SALARY) as SecondHighestSalary FROM Employee
WHERE salary< (SELECT max(salary) FROM Employee);