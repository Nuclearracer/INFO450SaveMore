#pragma once
#include "stdafx.h"
#include "BankAccount.h"

class Checking : public BankAccount
{
public:
	int numOfChecks;
	Checking();
	void orderChecks();
	void display();
};