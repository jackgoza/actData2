//
//  employee.hpp
//  data2
//
//  Created by John Goza on 7/5/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#ifndef employee_hpp
#define employee_hpp

#include <stdio.h>
#include <string>
#include "Date.h"

using namespace std;

class Employee{
private:
	string name;
	int waitTime;
	int retainTime;
public:
	Employee();
	Employee(string newName);
	const Employee& operator = (const Employee& rhs);

	void setName(string newName);
	void setWait(int wait);
	void setRetain(int retain);
	void setStart(Date date);

	string getName();
	int getWait();
	int getRetain();
	Date getStart();

	friend bool operator<(const Employee& lhs, const Employee& rhs);
	friend bool operator>(const Employee& lhs, const Employee& rhs); // might be unnecessary
};

#endif /* employee_hpp */
