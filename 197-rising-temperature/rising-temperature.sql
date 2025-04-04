/* Write your PL/SQL query statement below */
SELECT weather2.id FROM weather  weather1
CROSS JOIN weather  weather2
WHERE weather2.recordDate - weather1.recordDate =1
AND weather2.temperature > weather1.temperature