/* Write your PL/SQL query statement below */
SELECT contest_id, round(count(distinct user_id)*100.0 /(SELECT count(user_id) FROM USERS ),2) 
AS Percentage
 FROM REGISTER 
GROUP BY contest_id
Order BY percentage desc ,contest_id; 