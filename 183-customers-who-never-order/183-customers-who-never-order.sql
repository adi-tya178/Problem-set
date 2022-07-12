
SELECT name AS Customers FROM customers LEFT JOIN orders ON Orders.customerId = customers.id WHERE Orders.CustomerID IS NULL
