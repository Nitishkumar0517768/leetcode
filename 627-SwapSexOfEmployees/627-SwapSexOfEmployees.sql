-- Last updated: 8/25/2026, 11:45:31 AM
update salary set sex = case when sex = 'm' then 'f'
                             when sex = 'f' then 'm' end;