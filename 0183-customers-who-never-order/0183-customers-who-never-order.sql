# Write your MySQL query statement below
SELECT Customers.name AS Customers
FROM Customers
    LEFT JOIN Orders ON Customers.id = Orders.customerId
GROUP BY Customers.id
HAVING COUNT(Orders.id) = 0;