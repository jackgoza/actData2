//
//  library.cpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#include "library.hpp"


/*
	library();
	add_book(string newBook);
	add_employee(string newPerson);
	circulate_book(string bookToMove, Date dayOfMove);
	pass_on(string bookToMove);
 */

library::library(){
}

library::library(library& other){
	bookList = other.bookList;
}

void library::add_book(string newBook){

}

void library::add_employee(string newPerson){

}

void library::circulate_book(string bookToMove, Date dayOfMove){
}

void library::pass_on(string bookToMove){
}
