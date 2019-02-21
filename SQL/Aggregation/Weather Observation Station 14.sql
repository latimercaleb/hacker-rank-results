-- https://www.hackerrank.com/challenges/weather-observation-station-14/problem
SELECT FORMAT(MAX(LAT_N), '.####')
FROM STATION
WHERE LAT_N < 137.2345
