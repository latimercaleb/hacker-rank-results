-- https://www.hackerrank.com/challenges/african-cities/problem
SELECT CI.NAME
FROM CITY AS CI
INNER JOIN COUNTRY AS CO ON CI.COUNTRYCODE = CO.CODE
WHERE CO.CONTINENT = 'Africa'
