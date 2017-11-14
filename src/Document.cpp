/*
 * Document.cpp
 *
 *  Created on: Nov 7, 2016
 *      Author: Debra
 */

#include "Document.hpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <chrono>
using namespace std;

Document::Document(string f) {
	filename = f;
	primelist = new PrimeLL();
	input = 0;
}

int Document::getPrime(){
	return input;
}

void Document::setPrime(int p){
	input = p;
}

PrimeLL *Document::readFile() { //This function is responsible for making the LL of prime factors
	primelist = new PrimeLL();
	ifstream infile(filename.c_str(), ios::in);     // open file
	if (!infile.is_open()) {
		return NULL; //This will return null if the file does not open
	}
	string word;
	while (infile >> word) {          // loop getting single characters
		int prime = atoi(word.c_str()); //converts the "word" that it got (prime number) into an int
		while(input % prime == 0) { //Checks to see if the number that the user inputed is divisible by the prime number in the list
			primelist->insertUnique(prime); // If it is, then input it into the list
			input = input / prime; // Since the prime number is a factor, we can remove it from the number
		}
		if(input == 1){ //When input is one, then all of the prime factors have been found
			return primelist;
		}
	}

	//If the function reaches this point, the number must have contained a prime factor larger than our scope

	cout << "This number contains a prime number that is out of our scope. \n"
		<< "To see what numbers are within the scope, refer to primes1.txt"
		<< endl;
	return NULL;

}

