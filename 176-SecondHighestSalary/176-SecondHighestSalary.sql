-- Last updated: 8/18/2026, 11:54:03 AM
# Write your MySQL query statement below

-- Method -1 
-- select max(salary) as SecondHighestSalary from employee where salary < (select max(salary) from employee );



-- Method - 2
select (select distinct salary from employee order by salary desc limit 1 offset 1 ) as SecondHighestSalary;