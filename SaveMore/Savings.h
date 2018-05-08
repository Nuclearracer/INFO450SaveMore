#pragma once
#include "stdafx.h"
#include "BankAccount.h"

class Savings : public BankAccount
{
public:
	Savings();
	Savings(double bal, int accountN);
	double assessInterest();
	void display();
};