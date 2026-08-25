-- Last updated: 8/25/2026, 11:45:32 AM
# Write your MySQL query statement below
select max(num) as num from (select num from MyNumbers group by num having count(num) = 1) as t