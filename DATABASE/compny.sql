create database company;
use company;
create table employee
(
employee_id int auto_increment,
first_name varchar(20),
last_name varchar(20),
salary int,
joining_date date,
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
