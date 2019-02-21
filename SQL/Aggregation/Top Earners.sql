-- https://www.hackerrank.com/challenges/earnings-of-employees/problem
select top 1 max (salary * months), count (name)
from employee
group by salary*months
order by salary*months desc
