-- Last updated: 8/25/2026, 11:46:33 AM
# Write your MySQL query statement below
select score, dense_rank() over (order by score desc) as 'rank' from Scores;