#pragma once
#include "stdafx.h"
#include"BankAccount.h"

class Certificate : public BankAccount
{
public:
	int term;
	Certificate();
	void assessInterest();
	void display();
};