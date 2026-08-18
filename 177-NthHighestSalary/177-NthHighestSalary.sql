-- Last updated: 8/18/2026, 11:53:58 AM
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN set n=n-1;
  RETURN (
      # Write your MySQL query statement below.
    
    select distinct salary from employee order by salary desc limit 1 offset n
  );
END