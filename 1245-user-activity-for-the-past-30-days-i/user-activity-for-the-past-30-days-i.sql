/* Write your PL/SQL query statement below */
SELECT to_char(activity_date, 'YYYY-MM-DD') AS day, COUNT(DISTINCT(user_id)) AS active_users FROM ACTIVITY
WHERE activity_date BETWEEN to_Date('2019-06-28', 'YYYY-MM-DD') AND to_Date('2019-07-27', 'YYYY-MM-DD') 
GROUP BY (activity_date);
/* Write your PL/SQL query statement below */
-- select substr(activity_date,1,10) as day, count(distinct user_id) as active_users
-- from activity 
-- where   activity_date between '2019-06-28' and'2019-07-27'
-- group by activity_date;
