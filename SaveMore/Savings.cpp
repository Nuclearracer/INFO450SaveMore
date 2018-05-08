#include "stdafx.h"
#include "BankAccount.h"
#include "Savings.h"

Savings::Savings()
{
	balance = 0;
}
Savings::Savings(double bal, int accountN)
{
	balance = bal;
	accountNum = accountN;
}
double Savings::assessInterest()
{
	if (balance >= 10000)
	{
		interestRt = .02;
	}
	else
	{
		interestRt = .01;
	}
	return balance += interestRt * balance;
}
void Savings::display()
{
	cout << "Your Savings Account:" << endl;
	cout << "Balance: " << balance << "\nAccount#: " << accountNum << "\nInterest Rate: " << interestRt << endl;
}