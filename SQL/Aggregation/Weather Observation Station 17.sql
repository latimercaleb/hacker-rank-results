-- https://www.hackerrank.com/challenges/weather-observation-station-17/problem
SELECT TOP 1 FORMAT(LONG_W,'.####')
FROM STATION
WHERE LAT_N > 38.7780
ORDER BY LAT_N ASC
