#pragma once
#include "stdafx.h"
using namespace std;

class BankAccount
{
protected:
	int accountNum;
	double interestRt;
	double balance;
public:
	double withdraw(double wd);
	double deposit(double dp);
	void display();
};
