#pragma once
#include "stdafx.h"
#include "BankAccount.h"

class Savings : public BankAccount
{
public:
	Savings();
	Savings(double bal, int accountN);
	int withdraw();
	void assessInterest();
	void display();
};