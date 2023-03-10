create database business;
use business;

 create table salesperson
 (
 sno int auto_increment,
 sname varchar(30),
 city varchar(10),
 comm float,
 primary key (sno)
 );

 create table costomer
 ( 
 cnm int ,
 cname varchar(30),
 city varchar(10),
 rating int,
 sno int,
 primary key (cnm),
 foreign key(sno) references salesperson(sno)
 );

 insert into salesperson (sno,sname,city,comm) 
 values  ("1001","Peel" ,"london","0.12"),
		 ("1002","Seeres" ,"San Jose","0.13"),
         ("1004","Motika" ,"london","0.11"),
         ("1007","Rafkin" ,"Barcelona","0.15"),
         ("1003","Axelrod" ,"New York","0.1");

 insert into costomer (cnm,cname,city,rating,sno) 
 values ("201","Hoffman","london","100 ","1001"),
		("202","Giovanne","Roe","200 ","1003"),
 		("203","Liu","San Jose","300 ","1002"),
 		("204","Grass","Barcelona","100","1002"),
		("206","Clemrns","london","300 ","1007"),
 		("207","Pereira","Roe","100 ","1004");
         
 -- a) All orders for more than $1000. 
       Select *  from orders where amt > 1000;

 -- b) Names and cities of all salespeople in London with commission above 0.12 
       select * from salesperson where city="London" and comm>0.12;

 -- c) All salespeople either in Barcelona or in London
       select * from salesperson where city="Barcelona" or city="london"

     
 -- d) All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded). 
	   SELECT * FROM salesperson WHERE comm BETWEEN 0.10 and 0.12;

 -- e) All customers excluding those with rating <= 100 unless they are located in Rome
       Select cname from cust where rating <= 100 or city = ‘Rome’;
     



        
        