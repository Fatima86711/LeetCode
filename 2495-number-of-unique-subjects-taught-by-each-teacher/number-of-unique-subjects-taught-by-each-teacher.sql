/* Write your PL/SQL query statement below */
SELECT teacher_id , count(distinct subject_id) as cnt FROM TEACHER
group by (teacher_id)