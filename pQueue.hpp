//
//  pQueue.hpp
//  data2
//
//  Created by John Goza on 7/12/16.
//  Copyright © 2016 JohnGoza. All rights reserved.
//

#ifndef pQueue_hpp
#define pQueue_hpp

#include <stdio.h>
#include <vector>
#include "employee.hpp"

using namespace std;

class pQueue{
public:
	pQueue();
	void addEmployee(Employee temp);
	bool removeEmployee(string nameOf);
	void setQueueOrder(); // this NEEDS to be reimagined.
	
private:
	vector<Employee> WorkQueue;
	// Yeah, we're using a vector. Trip. Dare you.
	
};

#endif /* pQueue_hpp */
