-- https://www.hackerrank.com/challenges/weather-observation-station-15/problem
SELECT TOP 1 FORMAT(LONG_W,'.####')
FROM STATION
WHERE LAT_N < 137.2345
ORDER BY LAT_N DESC
