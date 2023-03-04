create database university;
use university;
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

update student set student_name = "kriya" where rollno=3;
-- truncate table student;
show tables;

select * from student;
select student_name from student;

-- alter table stude
