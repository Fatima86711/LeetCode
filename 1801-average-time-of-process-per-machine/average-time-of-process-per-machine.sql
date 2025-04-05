SELECT a.machine_id, Round( AVG(b.timestamp-a.timestamp),3) as processing_time
FROM Activity a
JOIN Activity b
ON a.machine_id = b.machine_id
AND a.process_id = b.process_id 
And a.timestamp<b.timestamp
GROUP BY a.machine_id;