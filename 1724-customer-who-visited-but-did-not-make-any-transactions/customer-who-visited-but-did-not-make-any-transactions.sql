/* Write your PL/SQL query statement below */
SELECT VISITS.customer_id, COUNT (VISITS.visit_id) AS count_no_trans FROM VISITS
LEFT JOIN Transactions  ON VISITS.visit_id = Transactions.visit_id
WHERE Transactions.transaction_id is NuLL 
GROUP BY VISITS.customer_id 