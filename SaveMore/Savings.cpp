#include "stdafx.h"
#include "BankAccount.h"
#include "Savings.h"

Savings::Savings()
{
	cout << "Enter opening balance for Savings." << endl;
	cin >> balance;
	cout << "\nEnter Account Number for Savings." << endl;
	cin >> accountNum;
}
Savings::Savings(double bal, int accountN)
{
	balance = bal;
	accountNum = accountN;
}
int Savings::withdraw()
{
	cout << endl;
	double wd;
	cout << "Please enter withdrawal ammount for account #" << accountNum << endl;
	cin >> wd;
	if (balance - wd < 0)
	{
		cout << "Invalid amount. Please try again." << endl;
		return -1;
	}
	else
	{
		balance -= wd;
		balance = balance - 2;
	}
	return 0;
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
	cout << endl;
	return balance += interestRt * balance;
}
void Savings::display()
{
	cout << "\n**Your Savings Account**" << endl;
	cout << "Balance: $" << balance << "\nAccount#: " << accountNum << "\nInterest Rate: " << interestRt << "\n\n";
}