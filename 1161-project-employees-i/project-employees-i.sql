/* Write your PL/SQL query statement below */
SELECT PROJECT.project_id , ROUND(AVG(EMPLOYEE.experience_years),2) as average_years FROM PROJECT
LEFT JOIN EMPLOYEE ON 
    PROJECT.employee_id = EMPLOYEE.employee_id
-- AND PROJECT.project_id = Employee.employee_id
GROUP BY PROJECT.project_id;