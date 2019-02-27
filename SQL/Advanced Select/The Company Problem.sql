-- https://www.hackerrank.com/challenges/the-company/problem
SELECT DISTINCT cp.company_code, cp.founder, (
    SELECT COUNT(DISTINCT lead_manager_code)
    FROM Employee
    WHERE company_code = cp.company_code
), (
    SELECT COUNT(DISTINCT senior_manager_code)
    FROM Employee
    WHERE company_code = cp.company_code
), (
    SELECT COUNT(DISTINCT manager_code)
    FROM Employee
    WHERE company_code = cp.company_code
),(
    SELECT COUNT(DISTINCT employee_code)
    FROM Employee
    WHERE company_code = cp.company_code
)
FROM COMPANY as cp
ORDER BY cp.company_code
