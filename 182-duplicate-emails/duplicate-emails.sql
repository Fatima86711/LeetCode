/* Write your PL/SQL query statement below */
SELECT email FROM Person group by email HAVING COUNT (email)>1;