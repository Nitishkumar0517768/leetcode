-- Last updated: 8/25/2026, 11:43:52 AM
# Write your MySQL query statement below
select user_id, count(*) as followers_count from followers group by user_id order by user_id asc;