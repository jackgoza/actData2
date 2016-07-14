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
	void addEmployee(employee temp);
	bool removeEmployee(string nameOf);
	void setQueueOrder(); // this could be reimagined.
	
private:
	vector<employee> WorkQueue;
	// Yeah, we're using a vector. Don't even trip dawgs.
	
};

#endif /* pQueue_hpp */
