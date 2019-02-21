-- https://www.hackerrank.com/challenges/what-type-of-triangle/problem
SELECT
    CASE
    WHEN A+B > C AND A+C > B AND B+C > A
    THEN CASE
        WHEN A=B AND B=C then "Equilateral"
        WHEN A=B OR B=C OR C=A then "Isosceles"
        ELSE "Scalene"
    END
    ELSE "Not A Triangle"
    END
FROM TRIANGLES;
