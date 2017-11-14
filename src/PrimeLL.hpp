/*
 * PrimeLL.hpp
 *
 *  Created on: Dec 9, 2016
 *      Author: Michael
 */

#ifndef PRIMELL_HPP_
#define PRIMELL_HPP_


#include "Node.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class PrimeLL {
	friend class Document;
	Node *first;
	Node *last;
	int size;

public:
	PrimeLL();
	~PrimeLL();
	void printLL();
	void printFactors();
	void addFirst(int p);
	void insertUnique(int p);
	int getGCD(PrimeLL *primes);
	int getLCM(PrimeLL *primes);
	PrimeLL *getFactors();
	void getFactors(int prev, PrimeLL *n, Node *num);

};

#endif /* PRIMELL_HPP_ */
