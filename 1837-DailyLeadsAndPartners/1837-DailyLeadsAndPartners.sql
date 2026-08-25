-- Last updated: 8/25/2026, 11:43:54 AM
# Write your MySQL query statement below
select date_id, make_name, count(distinct lead_id) as unique_leads, count(distinct partner_id) as unique_partners from dailysales group by date_id, make_name;