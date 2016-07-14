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

using namespace std;

class Employee{
public:
	Employee();
	Employee(string newName);
	string getName();
	void setName(string newName);
	void setWait(int wait);
	void setRetain(int retain);
	void refreshPriority(); // hate the fact that this is O(n).
	friend bool operator<(const Employee& lhs, const Employee& rhs);
	friend bool operator>(const Employee& lhs, const Employee& rhs); // might be unnecessary
	
private:
	string name;
	int waitTime;
	int retainTime;
	int priority; // new!
};

#endif /* employee_hpp */
