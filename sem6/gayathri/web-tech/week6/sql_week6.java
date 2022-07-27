use javalab;
create table if not exists `StudentInfo`(
	`id` numeric unique not null,
    `name` varchar(20) not null,
    `branch` varchar(3) not null
);
select * from StudentInfo;
 
-- delete from StudentInfo where branch = "4";
-- describe StudentInfo;
-- drop table StudentInfo;