# Write your MySQL query statement below
SELECT user_id, CONCAT(UPPER(LEFT(name, 1)), lower(RIGHT(name, length(name)-1))) AS name
FROM users
ORDER BY user_id;