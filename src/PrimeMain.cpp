/*
 * PrimeMain.cpp
 *
 *  Created on: Dec 9, 2016
 *      Author: Michael
 */

#include "Document.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int askForPrime();
PrimeLL *makePrimeList(Document doc);

int main() {

	Document doc("primes1.txt");
	PrimeLL *primes1 = makePrimeList(doc);
	PrimeLL *primes2 = makePrimeList(doc);
	cout << "\nFIRST LIST OF PRIMES: \n";
	primes1->printLL();

	cout << "\n\n SECOND LIST OF PRIMES: \n";
	primes2->printLL();

	cout << "\nTHIS IS THE GCD OF THE TWO LISTS:" << endl;
	cout << primes1->getGCD(primes2) << endl;

	cout << "\nTHIS IS THE LCM OF THE TWO LISTS:" << endl;
	cout << primes1->getLCM(primes2) << endl;

	cout << "\nTHESE ARE THE FACTORS OF THE FIRST NUMBER:" << endl;
	primes1->getFactors()->printFactors();

	cout << "\nTHESE ARE THE FACTORS OF THE SECOND NUMBER:" << endl;
	primes2->getFactors()->printFactors();

	return 0;
}

int askForPrime() { //This function asks the user to input a number, and then returns that number
	string prime_string;
	int prime;
	do { //Loops until the user inputs a Natural Number
		cout << "Please input a Natural Number that you want to be made into a list of prime numbers: ";
		cin >> prime_string;
		prime = atoi(prime_string.c_str()); // Makes the string that the user inputed into a number
		if (prime <= 1) {
			cout << "Don't input a Natural Number (n > 1) you dingus." << endl; //1 is not a prime number and is not composed of any prime numbers
		}
	} while (prime <= 1);
	return prime;
}

PrimeLL *makePrimeList(Document doc) { // This function will create the linked list of prime numbers
	int prime = askForPrime();
	doc.setPrime(prime); //Sets the input parameter in Document to the integer prime
	PrimeLL *primelist = new PrimeLL();
	primelist = doc.readFile(); //This handles getting all of the prime numbers and creating the LL
	return primelist;
}
