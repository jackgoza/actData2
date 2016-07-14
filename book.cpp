//
//  book.cpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#include "book.hpp"

Book::Book(){

}

Book::Book(string bookName){
	name = bookName;
}

Book::Book(string bookName,Date start){
	name = bookName;
	startDate = start;
}

Book::Book(Book& other){ // Why?
	name = other.name;
	startDate = other.startDate;
	endDate = other.endDate;
	archived = other.archived;
}

string Book::getname(){
	return name;
}
Date Book:: getstartDate(){
	return startDate;
}
Date Book::getendDate(){
	return endDate;
}
bool Book::getarchived(){
	return archived;
}

void Book::setname(string newName){
	name = newName;
}
void Book::setstartDate(Date newDate){
	startDate = newDate;
}
void Book::setendDate(Date newDate){
	endDate = newDate;
}
void Book::setarchived(bool newBool){
	archived = newBool;
}