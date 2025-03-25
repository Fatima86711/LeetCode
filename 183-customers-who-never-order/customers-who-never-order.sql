/* Write your PL/SQL query statement below */
SELECT Customers.Name AS Customers  FROM Customers
 WHERE Customers.id NOT IN (SELECT CustomerId FROM Orders)