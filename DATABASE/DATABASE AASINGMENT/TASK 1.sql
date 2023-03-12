create database institute;
use institute;

create table student
(
rollno int auto_increment,
student_name varchar(20),
branch varchar(20),
primary key (rollno)
);

create table exam
(
rollno int,
sc_code varchar(20),
mark int,
p_code varchar(20),
foreign key (rollno) references student(rollno)
);

insert into student (student_name,branch) 
values ("jay" ,"computer_scienece"),
	   ("suhani", "electonic_and_com"),
       ("kriti" ," electonic_and_com");
       
insert into exam (sc_code,mark,p_code) 
values ("CS11" ,"50","CS"),
	("CS12" ,"60","CS"),
       ("EC101" ,"66","EC"),
       ("EC102" ,"70","EC"),
       ("EC101" ,"45","EC"),
       ("EC102" ,"50","EC");