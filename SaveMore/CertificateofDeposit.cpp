#include "stdafx.h"
#include "BankAccount.h"
#include "CertificateofDeposit.h"

Certificate::Certificate()
{
	cout << "Enter opening balance." << endl;
	cin >> balance;
	cout << "\nEnter Account Number." << endl;
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
	cout << "Your interest rate for account #" << accountNum << " is " << interestRt;
}

void Certificate::display()
{
	cout << "Your CD Account:" << endl;
	cout << "Account#: " << accountNum << "\nBalance: " << balance << "\nInterest Rate: " << interestRt << "Term: " << term << "\n\n";
}