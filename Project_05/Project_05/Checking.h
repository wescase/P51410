/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 5
* File: Checking.h
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

class Checking : public Account
{
public:
	// Default Checking Constructor
	Checking();

	// Checking Parameterized Constructor
	// Purpose: Initialize the variables in the Checking Object
	// Parameters: Person*, int account number, double account balance, double monthly fee
	// Returns: none
	Checking(Person*, int, double, double);

	// getAccountBalance
	// Purpose: retrieve balance of the Savings Object
	// Parameters: none
	// Returns: double account balance
	double getAccountBalance() const;

	// prolog
	void writeAccData(ofstream& _file) const;

	// prolog
	void readAccData(ifstream& _file);

	// prolog
	~Checking();
private:
	double monthlyFee;
};

