-- Last updated: 8/18/2026, 11:53:52 AM
# Write your MySQL query statement below

select d.name as Department, e.name as Employee, e.salary as Salary from department d
join employee e on d.id = e.departmentId where 
e.salary = (select max(e2.salary) from employee e2 where e2.departmentId = d.id)