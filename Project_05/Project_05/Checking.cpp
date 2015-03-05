/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 5
* File: Checking.cpp
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

#include "Checking.h"


Checking::Checking()
{
	monthlyFee = 0;
}

// prolog - done
Checking::Checking(Person* _human, int _account, double _bal, double _fee)
	: Account(_human, _account, _bal)
{
	monthlyFee = _fee;
}


double Checking::getAccountBalance() const
{
	return accBalance - monthlyFee;
}

void Checking::writeAccData(ofstream& _file) const
{
	// write out a word to look for in the file for which account it is for
	_file << "check" << endl;
	// write out a key for the type of data to write (check)
	_file << monthlyFee << endl;
	// have account wirite its data
	Account::writeAccData(_file);
}

void Checking::readAccData(ifstream& _file)
{
	if (_file.fail() && !_file.eof())
	{
		throw FileError(READ_ERROR);
	}
	else if (_file.eof())
	{
		throw FileError(END_OF_FILE);
	}
	// read the string and turn to double set as monthly fee.
	string temp = "";
	getline(_file, temp);
	monthlyFee = stod(temp);
	// Have Account read in its data.
	Account::readAccData(_file);
}

Checking::~Checking()
{

}
