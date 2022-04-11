# Write your MySQL query statement below
select
sell_date,
COUNT(DISTINCT product) num_sold,
GROUP_CONCAT(DISTINCT product) products
from activities
group by sell_date
order by sell_date