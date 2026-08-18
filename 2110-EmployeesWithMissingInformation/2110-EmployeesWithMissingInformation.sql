-- Last updated: 8/18/2026, 11:48:40 AM
# Write your MySQL query statement below
select employee_id from employees where employee_id not in (select employee_id from salaries) 
union
select employee_id from salaries where employee_id not in (select employee_id from employees where employee_id) order by employee_id asc;