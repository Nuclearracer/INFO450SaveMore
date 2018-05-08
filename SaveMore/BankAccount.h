#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class BankAccount
{
protected:
	int accountNum;
	double interestRt;
	double balance;
public:
	int withdraw();
	double deposit();
	void display();
};
