# Write your MySQL query statement below
SELECT employee_id FROM Employees WHERE employee_id NOT IN (SELECT employee_id FROM salaries)
UNION
SELECT employee_id FROM salaries WHERE employee_id not in( SELECT employee_id FROM Employees)
ORDER BY employee_id;