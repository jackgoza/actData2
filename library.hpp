//
//  library.hpp
//  data2
//
//  Created by John Goza on 7/4/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#ifndef library_hpp
#define library_hpp

#include <stdio.h>
#include <string>
#include <queue>
#include "Date.h"
#include "book.hpp"

class library{
public:
	library();
	add_book(string newBook);
	add_employee(string newPerson);
	circulate_book(string bookToMove, Date dayOfMove);
	pass_on(string bookToMove);
};

#endif /* library_hpp */
