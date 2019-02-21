-- https://www.hackerrank.com/challenges/weather-observation-station-13/problem
SELECT FORMAT(ROUND(SUM(LAT_N),2),'###.##'), FORMAT(ROUND(SUM(LONG_W),2), '###.##')
FROM STATION
