-- Last updated: 8/25/2026, 11:43:36 AM
# Write your MySQL query statement below
select user_id, max(time_stamp) as last_stamp from logins where year(time_stamp) = 2020 group by user_id;