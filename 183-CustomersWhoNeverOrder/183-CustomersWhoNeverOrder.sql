-- Last updated: 8/18/2026, 11:53:54 AM
# Write your MySQL query statement below
select c.name as Customers from customers c left join orders o on c.id = o.customerId where o.customerId is null;