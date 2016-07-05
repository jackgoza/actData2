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

class employee{
public:
	employee();
	employee(string newName);
	string getName();
	void setName(string newName);
	void setWait(int wait);
	void setRetain(int retain);
	
private:
	string name;
	int waitTime;
	int retainTime;
};

#endif /* employee_hpp */
