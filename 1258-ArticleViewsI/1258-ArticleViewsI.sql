-- Last updated: 8/25/2026, 11:44:50 AM
# Write your MySQL query statement below
select distinct author_id as id from views where author_id = viewer_id order by author_id asc;