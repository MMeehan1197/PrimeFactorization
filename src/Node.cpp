/*
 * Node.cpp
 *
 *  Created on: Nov 7, 2016
 *      Author: Debra
 */

#include "Node.hpp"
#include <iostream>
#include <string>
using namespace std;

Node::Node(int p) {
	count = 1;
	next = NULL;
	prev = NULL;
	prime = p;
}
Node::Node() {
	count = 1;
	next = NULL;
	prev = NULL;
	prime = 1;
}


