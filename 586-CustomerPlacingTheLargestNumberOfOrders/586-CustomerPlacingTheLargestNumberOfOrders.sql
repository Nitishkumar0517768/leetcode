-- Last updated: 8/18/2026, 11:52:40 AM
# Write your MySQL query statement below
select customer_number from orders group by customer_number order by count(customer_number) desc limit 1;