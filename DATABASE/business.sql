create database business;

use business;

create table salesperson
(
sno int auto_increment,
sname varchar(30),
city varchar(10),
comm int,
primary key (sno)
);

create table costomer
( 
sno int,
cnm int,
cname varchar(30),
city varchar(10),
rating int,
foreign key(sno) references salesperson(sno)
);