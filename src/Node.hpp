/*
 * Node.hpp
 *
 *  Created on: Nov 7, 2016
 *      Author: Debra
 */

#ifndef NODE_HPP_
#define NODE_HPP_

#include <iostream>
#include <string>
using namespace std;

class Node {
	friend class Document;
	friend class PrimeLL;
	Node *next;
	Node *prev;
	int count;
	int prime;
public:
	Node(int p);
	Node();
};

#endif /* NODE_HPP_ */
