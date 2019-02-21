-- https://www.hackerrank.com/challenges/draw-the-triangle-1/problem
DECLARE @LOOPNUM int = 20
WHILE @LOOPNUM > 0
    BEGIN
        PRINT REPLICATE('* ',@LOOPNUM)
        SET @LOOPNUM = @LOOPNUM - 1
    END
