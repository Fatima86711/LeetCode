/* Write your PL/SQL query statement below */
SELECT weather2.id FROM weather  weather2
INNER JOIN weather  weather1
ON weather2.recordDate - weather1.recordDate =1
AND weather2.temperature > weather1.temperature