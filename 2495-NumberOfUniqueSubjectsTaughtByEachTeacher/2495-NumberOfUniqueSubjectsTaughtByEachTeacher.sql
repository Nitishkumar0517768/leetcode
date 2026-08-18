-- Last updated: 8/18/2026, 11:47:19 AM
# Write your MySQL query statement below
select teacher_id, count(distinct subject_id) as cnt from teacher group by teacher_id;