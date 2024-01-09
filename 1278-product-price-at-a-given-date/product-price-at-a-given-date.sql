# Write your MySQL query statement below
SELECT DISTINCT a.product_id, IFNULL(temp.new_price, 10) AS price
FROM products AS a
LEFT JOIN
(   SELECT *
    FROM products
    WHERE (product_id, change_date) IN (SELECT product_id, max(change_date) FROM products   WHERE change_date<="2019-08-16" GROUP BY product_id)) AS temp
    ON a.product_id = temp.product_id;