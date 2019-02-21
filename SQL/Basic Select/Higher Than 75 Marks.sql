-- https://www.hackerrank.com/challenges/more-than-75-marks/problem
SELECT NAME
FROM STUDENTS
WHERE Marks > 75
ORDER By RIGHT(Name,3), ID ASC
