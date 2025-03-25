/* Write your PL/SQL query statement below */
SELECT Customers.name AS customers FROM Customers 
LEFT JOIN Orders
ON Customers.id = customerId
WHERE Orders.id IS NULL;