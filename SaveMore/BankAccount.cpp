#include "stdafx.h"
#include "BankAccount.h"

int BankAccount::withdraw()
{
	double wd;
	//need to check for negative balance and not let witdraw exceed balance.
	cout << "Please enter withdrawal ammount." << endl;
	cin >> wd;
	if (balance - wd < 0)
	{
		cout << "Invalid amount. Please try again." << endl;
		return -1;
	}
	else
		balance -= wd;
	return 0;
}

double BankAccount::deposit()
{
	cout << "Please enter deposit ammount." << endl;
	double dp;
	cin >> dp;
	return balance += dp;
}

/*void BankAccount::display();
{

}*/