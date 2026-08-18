-- Last updated: 8/18/2026, 11:53:56 AM
# Write your MySQL query statement below
select e.name as Employee from Employee e join Employee m on e.managerId = m.id where e.salary > m.salary;