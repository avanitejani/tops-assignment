use classicmodels;

select * from customers;
select customerName,phone from customers;

select * from customers where city="Las Vegas";

select * from customers where country="USA" and creditLimit>100000;

select * from customers where country="USA" or customerNumber>400;

select * from customers;
-- order by-- 
select * from customers order by customerName;
select * from customers order by customerName desc;


-- drop  table demoo;
-- create table demoo
-- (
-- dob date,
-- situation datetime,
-- timestamp_ timestamp
-- );
-- insert into demo(dob,situation) value ("2023-02-03","2005-05-23 11:56:25");
-- select * from demoo;
drop table demo;
create table demo
(
dob date,
situation datetime,
timestamp_ timestamp
);
insert into demo(dob,situation)  values("2023-02-03","2005-05-23 11:56:25");

select * from demo;

-- like
-- wildcard characters
--   _	exact one character
--   %	0 1 more than one character
select * from customers where customerName like '%am%';
select * from customers where customerName like '%t';

