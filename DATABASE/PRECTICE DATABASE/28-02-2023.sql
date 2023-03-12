-- 21/02/2023

-- DDL(DATA DEFINITION LANGUAGE)
-- create database databasename
create database company;

-- use dattabasename
use company;

-- drop database databasename
drop database company;

------------------------------------------------------------------------

primary key

primary key cannot be empty
primary key cannot be duplicate
primary key would be unique

auto_increment

not null

foriegn key

forign key can be null also
foregn key can be repat also

datatypes
 
int 
float
varchar(20)
date       
datetime
timestamp

-- create table tablename
-- (
-- field1 datatype,
-- field2 datatype,
-- field3 datatype,
-- constraints

-- );
 
create table employee
(



);

create table department
(
deptid int auto_increment,
deptname varchar(50),
location varchar(20),
deptdesc varchar(100),
total_emp int,
primary key(deptid)
);

create table employee
(
empid int auto_increment,
empname varchar(50),
age int,
salary int,
emial varchar(20),
deptid int,
primary key(empid),
foreign key(deptid) references department(deptid)
);

-- deleteing table syntax;
-- drop table tabelnmae

-- drop table department;
-- drop table employee;

-- alter
-- change name
-- change datatype
-- delete column
-- add column

-- ADD CPOLUMN
-- alter table tablename add column columnname datatype;
alter table employee add column address varchar(50);
alter table employee add column demo varchar(50) after age;
alter table employee add column demo2 varchar(50) first;

-- delete column
-- alter table tablename drop column columnname
alter table employee drop column demo;
alter table employee drop column demo2;

--  change name or datatype 
-- alter table tablename change column oldname newname datatype;
alter table employee change column age empage int;