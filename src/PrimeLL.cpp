/*
 * PrimeLL.cpp
 *
 *  Created on: Dec 9, 2016
 *      Author: Michael Meehan, Konark Christian, and Don Merrit
 */

#include "Node.hpp"
#include "PrimeLL.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
using namespace std;

PrimeLL::PrimeLL() {
	first = NULL;
	last = NULL;
	size = 0;
}
PrimeLL::~PrimeLL() {
	Node *tmp = first;
	for (int i = 0; i < size; i++) {
		tmp = first->next;
		delete first;
		first = tmp;
	}
}

void PrimeLL::printLL() { //Prints the list of prime factors
	Node *tmp = first;
	while (tmp != NULL) {
		if (tmp->count == 1) {
			cout << "There is " << tmp->count << " of the number " << tmp->prime
					<< endl;
		} else {
			cout << "There are " << tmp->count << " of the number "
					<< tmp->prime << endl;
		}
		tmp = tmp->next;
	}
}

void PrimeLL::printFactors() { //Prints the list of ALL factors (prime and not prime)
	Node *tmp = first;
	int counter = 0;
	while (tmp != NULL) {
		cout << tmp->prime;
		if(tmp->next != NULL){ //Makes sure that there is no comma at the end
		cout << ", ";
		}
		if(counter >= 5){
			counter = 0;
			cout << endl;
		} // Creates a new line every 5 numbers
		tmp = tmp->next;
		counter++;
	}
}

void PrimeLL::addFirst(int p) {
	first = new Node(p);
	last = first;
	size = 1;
}

void PrimeLL::insertUnique(int p) {
	Node *tmp = first;
	if (tmp == NULL) {
		addFirst(p);
	} else {
		while (tmp != NULL && tmp->prime < p) {
			tmp = tmp->next;
		}
		if ((tmp != NULL) && (tmp->prime == p)) {
			tmp->count++;
		} else {
			Node *tmp2 = new Node(p);
			if (tmp != NULL) {
				if (tmp->prev != NULL) {
					tmp->prev->next = tmp2;
					tmp2->prev = tmp->prev;
				} else {
					first = tmp2;
				}
				tmp2->next = tmp;
				tmp->prev = tmp2;
			} else {
				last->next = tmp2;
				tmp2->prev = last;
				last = tmp2;
			}
			size++;

		}
	}
}

//This function gets the Greatest Common Divisor of the two inputed prime factor lists
int PrimeLL::getGCD(PrimeLL *primes) {

	Node *p = first;
	Node *q = primes->first;
	int gcd = 1;
	while (p != NULL && q != NULL) {
		if (p->prime == q->prime) {
			if (p->count > q->count) { // Multiplies the current gcd with the current prime factor to the lowest shared power
				gcd = gcd * (int) pow((double) q->prime, (double) q->count);
			} else { // Also multiplies the current gcd with the current prime factor to the lowest shared power
				gcd = gcd * (int) pow((double) p->prime, (double) p->count);
			}
			p = p->next;
			q = q->next;
		} else {
			if (p->prime > q->prime) {
				q = q->next;
			} else {
				p = p->next;
			}
		}
	}
	return gcd;
}

int PrimeLL::getLCM(PrimeLL *primes) {
	Node *p = first;
	Node *q = primes->first;
	int lcm = 1;
	while (p != NULL && q != NULL) { //Runs until either p or q are out of prime numbers to contribute to the LCM
									 //Must be run like this to incorporate primes that are in common
		if (p->prime == q->prime) {
			if (p->count > q->count) { // Multiply lcm by the prime number to the power of times counted when the factor IS shared
				lcm = lcm * (int) pow((double) p->prime, (double) p->count);
			} else {
				lcm = lcm * (int) pow((double) q->prime, (double) q->count);
			}
			p = p->next;
			q = q->next;

		} else {  // Multiply lcm by the prime number to the power of times counted when the factor is NOT shared
			if (p->prime > q->prime) {
				lcm = lcm * (int) pow((double) q->prime, (double) q->count);
				q = q->next;
			} else {
				lcm = lcm * (int) pow((double) p->prime, (double) p->count);
				p = p->next;
			}
		}
	}
	while (p != NULL) {	//Runs if there are still prime number from p that have not been included
		lcm = lcm * (int) pow((double) p->prime, (double) p->count);
		p = p->next;
	}
	while (q != NULL) {	//Runs if there are still prime number from q that have not been included
		lcm = lcm * (int) pow((double) q->prime, (double) q->count);
		q = q->next;
	}
	return lcm;
}

PrimeLL *PrimeLL::getFactors() { //Overloaded function for the initial call
	PrimeLL *newList = new PrimeLL();
	newList->addFirst(1);
	newList->getFactors(1, newList, first); //Base case
	return newList;
}

//Recursively calls to traverse every possible product of prime factors
void PrimeLL::getFactors(int prev, PrimeLL *n, Node *num) {
	int value;
	while (num != NULL) {
		for (int c = 1; c <= num->count; c++) {
			 // multiplies the previous product of factors with the current prime factor so it
		 	 // can be added to the list
			value = prev * (int) pow((double) num->prime, (double) c);
			n->insertUnique(value); //Inserts into new list
			getFactors(value, n, num->next); //Recursive call with new values
		}
		num = num->next; //Iterates through list
	}
}
