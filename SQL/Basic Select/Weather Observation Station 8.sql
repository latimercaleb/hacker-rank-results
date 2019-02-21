-- https://www.hackerrank.com/challenges/weather-observation-station-8/problem
SELECT DISTINCT CITY
FROM STATION
WHERE CITY LIKE '[AEIOU]%[AEIOU]'
ORDER BY CITY ASC;
