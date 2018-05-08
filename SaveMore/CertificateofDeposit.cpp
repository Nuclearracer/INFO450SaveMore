#include "stdafx.h"
#include "BankAccount.h"
#include "CertificateofDeposit.h"

Certificate::Certificate()
{
	cout << "Enter opening balance for CD." << endl;
	cin >> balance;
	cout << "\nEnter Account Number for CD." << endl;
	cin >> accountNum;
	cout << "\nEnter number of years for CD." << endl;
	cin >> term;
}

void Certificate::assessInterest()
{
	if (term < 5)
	{
		interestRt = .05;
	}
	else
	{
		interestRt = .1;
	}
	balance += interestRt * balance;
	cout << "Your interest rate for account #" << accountNum << " is " << interestRt;
}

void Certificate::display()
{
	cout << "\n**Your CD Account**" << endl;
	cout << "Account#: " << accountNum << "\nBalance: $" << balance << "\nInterest Rate: " << interestRt << "\nTerm: " << term << "years\n\n";
}