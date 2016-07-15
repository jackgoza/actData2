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
private:
	vector<Employee> WorkQueue;
public:
	pQueue();
	const pQueue& operator = (const pQueue& rhs);
	void addEmployee(Employee temp);
	bool removeEmployee(string nameOf); // 
	void setQueueOrder(); // this NEEDS to be reimagined.
	Employee pop();
	Employee top();
	bool empty();
};

#endif /* pQueue_hpp */
