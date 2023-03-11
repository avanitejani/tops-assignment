create database informations;
use informations;

create table details
(
first_name varchar(20),
last_name varchar(20),
address varchar(70),
city varchar(20),
age int
);

insert into details (first_name, last_name, address, city, age ) 
values ("Mickey" ,"Mouse","123 Fantasy Way","Anaheim","73"),
	   ("Bat" ,"Man","321 Cavern Ave","Gotham","54"),
       ("Womder" ,"Woman","987 Turth Way","Paradise","39"),
       ("Donald" ,"Duck","555 Quack Street","Mallard","65"),
       ("Bugs" ,"Bunny","567 Carrot Street","Rascal","58"),
       ("Wiley" ,"Coyote","999 Acme Way","Canyon","61"),
       ("Cat" ,"Woman","234 Purrfect street","Hairball","32"),
       ("Tweety" ,"Bird","543 ","Itotltaw","28");