/*
Name:	Jack Goza, Joshua Ford, Scott Peery
Course:	CS303
Program:	Project 2
Due Date:

Description: using queues, design a sytem that allows the circulation of books to employees

Inputs: none

Outputs: none

Algorithm:
the program will keep track of two lists of book types
	1. books to be circulated
	2. archived books
the program will keep track of a list of employees
circulated books are books in the queue waiting to be read
archived books are books already read
a book has the following properties: name, circulation start date, circulation end date, and archived
employee has the following properties: name, wait time, and retain time

cirulation starts on a given date determined by type of book
	based on how long it shoud take on average to read the book
	each start and rotate time will be diffrent based on this
	this makes the priorities diffrent each time a new book is circulated
the queue will be prioritized on two factors
	1. total waiting time of the employee(how many days waited)
	2. total retain time (how many days the employee retained the book)
the data structure(priority queue) will push and pop items
	1. popped item is the item with highest priority
	2. queue will be updated whenever a priority item changes
priority is:
	the longer the employee waited the higher the priority
	the longer the empoyee retained the lower the priority
	waiting_time-retaining_time
	employee at front of queue gets the book
the program will pass the book on from the current employee on the given date
	if employee is last in the queue, the book is archived
	total retain time for the employee who passed the book gets adjusted
	total time for the employee who recieved the book is adjusted
	queues for other books must also be adjusted to reflect current priority


*****SPECIAL NOTE*****
extra credit for using GitHub

*/


#include <iostream>
#include <queue>
#include <list>
#include "book.hpp"
#include "library.hpp"



void main(){
	Library library;

	library.add_book("Software Engineering");
	library.add_book("Chemistry");

	library.add_employee("Adam");
	library.add_employee("Sam");
	library.add_employee("Ann");

	library.circulate_book("Chemistry", Date(2015, 3, 1, DateFormat::US));
	library.circulate_book("Software Engineering", Date(2015, 4, 1, DateFormat::US));

	library.pass_on("Chemistry", Date(2015, 3, 5, DateFormat::US)); //tell the next employee to pass the book on March 5, 2015
	library.pass_on("Chemistry", Date(2015, 3, 7, DateFormat::US));
	library.pass_on("Chemistry", Date(2015, 3, 15, DateFormat::US)); //at this point in time, the system will archive the chemistry book

	library.pass_on("Software Engineering", Date(2015, 4, 5, DateFormat::US));
	library.pass_on("Software Engineering", Date(2015, 4, 10, DateFormat::US));
	library.pass_on("Software Engineering", Date(2015, 4, 15, DateFormat::US));

	system("pause");
}
