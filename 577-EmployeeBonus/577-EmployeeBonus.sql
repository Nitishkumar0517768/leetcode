-- Last updated: 8/25/2026, 11:45:42 AM
# Write your MySQL query statement below
select e.name, b.bonus from employee e left join bonus b on e.empId = b.empId where b.bonus < 1000 or b.bonus is null;