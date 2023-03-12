create database Marketing;
use Marketing;

create table salesman
(
salesman_id int auto_increment,
sale_name varchar(30),
city varchar(10),
commission float,
primary key (salesman_id)
);

create table  costomer
(
customer_id int auto_increment,
cust_name varchar(30),
city varchar(10),
grade int,
salemans_id int,
primary key (customer_id)
);

insert into salesman (salesman_id,sale_name,city,commission) 
values  ("5001","James Hoog","New York","0.15"),
        ("5002","Nail Knite","Paris","0.13"),
        ("5005","Pit Alex","London","0.11"),
        ("5006","Mc Lyon","Paris","0.14"),
        ("5007","Paul Adam","Rome","0.13"),
        ("5003","Lauson Hen","San Jose","0.12");
        costomer
insert into costomer (customer_id,cust_name,city,grade,salemans_id) 
values ("3002","Nick Rimando","NewYork","100","5001"),
	   ("3007","Brad Davis","NewYork","200","5001"),
       ("3005","Graham Zusi","California","200","5002"),
       ("3008","Julian Green","London","300","5002"),
       ("3004","Fabian Johnson","Paris","300","5006"),
       ("3009","Geoff Cameron","Berlin"," 100","5003"),
       ("3003","Jozy Altidor","Moscow","200"," 5007"),
       ("3001","Brad Guzan","London","    ","5005");
		
        
-- From the above given tables write a SQL query to find the salesperson(s) and the customer(s) represented here.Return the Customer Name, City, Salesman, commission.
SELECT * from costomer  where "ust_nam","city",sale_name,commission;


SELECT * FROM costomer WHERE "city", "cust_name" , "commission";





