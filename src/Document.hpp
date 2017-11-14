/*
 * Document.hpp
 *
 *  Created on: Nov 7, 2016
 *      Author: Debra
 */

#ifndef DOCUMENT_HPP_
#define DOCUMENT_HPP_
#include "Node.hpp"
#include "PrimeLL.hpp"
#include <string>

class Document {
	string filename;
	PrimeLL *primelist;
	int input;

public:
	Document(string f);
	PrimeLL *readFile();
	void setPrime(int p);
	int getPrime();
};



#endif /* DOCUMENT_HPP_ */
