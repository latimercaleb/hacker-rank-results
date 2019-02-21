-- https://www.hackerrank.com/challenges/average-population-of-each-continent/problem
SELECT co.CONTINENT, FLOOR(AVG(ci.POPULATION))
FROM CITY AS ci
INNER JOIN COUNTRY as co ON ci.COUNTRYCODE = co.CODE
GROUP BY co.CONTINENT
