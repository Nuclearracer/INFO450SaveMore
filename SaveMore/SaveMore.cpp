// SaveMore.cpp : Defines the entry point for the console application.
//INFO450 SaveMore program Rickey Morris Demonstrates polymorphism by creating three types of bank accounts.

#include "stdafx.h"
#include "BankAccount.h"
#include "Savings.h"
#include "Checking.h"
#include "CertificateofDeposit.h"
using namespace std;


int main()
{
	cout << "Please enter your account information." << "\n\n";
	Savings *svg = NULL;
	Checking *chk = NULL;
	Certificate *cd = NULL;
	svg = new Savings();
	chk = new Checking();
	cd = new Certificate();
	svg->deposit();
	chk->deposit();
	cd->deposit();
	chk->orderChecks();
	svg->assessInterest();
	cd->assessInterest();
	svg->withdraw();
	chk->withdraw();
	cd->withdraw();
	svg->display();
	chk->display();
	cd->display();
	delete svg;
	delete chk;
	delete cd;
    return 0;
}

