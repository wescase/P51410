/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 5
* File: Savings.h
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: March 5th 2015
* Description: Write the users information to file and read back to the user when requested.
*
* I declare the the following source code was written by Wes and Morgan,
* I understand the copying of any source code in whole or in part constitutes cheating,
* and I will recieve a 0 on this assignment if I violate this policy
*
*/

#pragma once
#include "Account.h"
class Savings : public Account
{
public:
	// Default Savings Constructor
	Savings();

	// Savings Parameterized Constructor
	// Purpose: Initialize the variables in the Savings Object
	// Parameters: Person*, int account number, double account balance, double interest rate
	// Returns: none
	Savings(Person*, int, double, double);

	// getAccountBalance
	// Purpose: retrieve balance of the Savings Object
	// Parameters: none
	// Returns: double account balance
	double getAccountBalance() const;

	// writeAccData
	// Purpose: Has the object write its data to a file.
	// Parameters: ofstream file object
	// Returns: none
	void writeAccData(ofstream& _file) const;

	// readAccData
	// Purpose: Has the object read its data in from a file.
	// Parameters: if file object
	// Returns: none
	void readAccData(ifstream& _file);

	// Savings Destructor
	~Savings();
private:
	double interest;
};

