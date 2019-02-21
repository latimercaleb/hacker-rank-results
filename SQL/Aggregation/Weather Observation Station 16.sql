-- https://www.hackerrank.com/challenges/weather-observation-station-16/problem
SELECT TOP 1 FORMAT(LAT_N, '.####')
FROM STATION
WHERE LAT_N > 38.7780
ORDER BY LAT_N
