create database company;
use company;

create table employee
(
employee_id int auto_increment,
first_name varchar(20),
last_name varchar(20),
salary int,
joining_date datetime,
department varchar(30),
primary key (employee_id)
);

create table incentive
(
employee_ref_id int auto_increment,
incentive_date date,
incentive_amount int,
primary key (employee_ref_id)
);


 --  2013-03-09 12:30:15
insert into employee (first_name,last_name,salary,joining_date,department) 
values ("John" ,"Abraham","1000000","2013-01-10 12:00:00","Banking"),
       ("Michael" ,"Clarke","800000","2013-01-10 12:00:00","Insurance"),
       ("Roy" ,"Thomas","700000","2013-02-10 12:00:00","Banking"),
       ("Tom" ,"Jose","600000","2013-02-10 12:00:00","Insurance"),
       ("Jerry" ,"Pinto","6500000","2013-02-10  12:00:00","Insurance"), 
       ("Philip" ,"Mathew","7500000","2013-01-10 12:00:00","Services"),
       ("Testame1" ,"123","6500000","2013-01-10 12:00:00","Services"),
       ("TestName2" ,"Lname%","6000000","2013-02-10 12:00:00","Insurance");

insert into incentive (incentive_date,incentive_amount) 
values ("2013-02-01","5000"),
	   ("2013-02-01","3000"),
	   ("2013-02-01","4000"),
	   ("2013-01-01","4500"),
	   ("2013-01-01","3500");
-- 1  a) Get First_Name from employee table using Tom name “Employee Name”.
select first_name from employee where first_name="Tom"

-- 2  b) Get FIRST_NAME, Joining Date, and Salary from employee table.
select first_name, salary ,joining_date from employee

-- 3  c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?
 select * from employee order by first_name, salary desc
 
 -- 4 d) Get employee details from employee table whose first name contains ‘J’.
select * from employee where first_name like '%j%'

-- 5 e) Get department wise maximum salary from employee table order by salary ascending?
select max(salary)from employee group by department order by salary

-- 5 e) f) Select first_name, incentive amount from employee and incentives table for those employees who have incentives and incentive amount greater than 3000 
select employee.first_name, incentive.incentive_amount from employee join incentive on employee.employee_id=incentive.employee_ref_id

-- 6 g) Create After Insert trigger on Employee table which insert records in view table


