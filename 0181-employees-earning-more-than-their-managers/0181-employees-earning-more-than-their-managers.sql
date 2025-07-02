# Write your MySQL query statement below
-- SELECT EMP.name AS Employee
-- FROM Employee AS EMP, Employee AS MGR
-- WHERE EMP.managerId = MGR.id AND EMP.salary > MGR.salary;

SELECT e.name AS Employee
FROM Employee AS e
    JOIN Employee AS m ON e.managerId = m.id AND e.salary > m.salary;