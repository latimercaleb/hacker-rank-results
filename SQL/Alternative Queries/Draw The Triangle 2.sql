--  https://www.hackerrank.com/challenges/draw-the-triangle-2/problem
DECLARE @COUNT int = 1
WHILE @COUNT <= 20
    BEGIN
        PRINT REPLICATE('* ', @COUNT)
        SET @COUNT = @COUNT + 1
    END
