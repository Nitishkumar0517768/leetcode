-- Last updated: 8/25/2026, 11:45:01 AM
# Write your MySQL query statement below
select actor_id, director_id from ActorDirector group by actor_id, director_id having count(*) >= 3;