#include "stdafx.h"
#include "BankAccount.h"
#include "Checking.h"

Checking::Checking()
{
	cout << "Enter opening balance." << endl;
	cin >> balance;
	cout << "\nEnter Account Number." << endl;
	cin >> accountNum;
}

void Checking::orderChecks()
{
	cout << "How many checks would you like to order? " << endl;
	cin >> numOfChecks;
	if (numOfChecks > 0)
	{
		balance -= 15;
		//Deducts $5 if below $500 threshold. May want to inform user before proceeding.
		if (balance < 500)
		{
			cout << "Account below $500. You have been charged a $5 fee." << endl;
			balance -= 5;
		}
	}
}

void Checking::display()
{
	cout << "Your Checking Account:" << endl;
		cout << "Account Number: " << accountNum << "\nBalance: " << balance << endl;
}