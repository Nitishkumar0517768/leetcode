-- Last updated: 8/25/2026, 11:46:30 AM
# Write your MySQL query statement below
select email from person group by email having count(email) > 1;