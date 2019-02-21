-- https://www.hackerrank.com/challenges/weather-observation-station-5/problem
SELECT TOP 1 CITY, LEN(CITY)
FROM Station
ORDER BY LEN(CITY), CITY


SELECT TOP 1 CITY, LEN(CITY)
FROM Station
ORDER BY LEN(CITY) DESC, CITY
