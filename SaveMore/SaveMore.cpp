// SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BankAccount.h"
#include "Savings.h"
using namespace std;


int main()
{
	cout << "Please enter your information." << endl;
	Savings *ptr = NULL;
	ptr = new Savings(10501, 3);
	ptr->deposit();
	ptr->assessInterest();
	ptr->withdraw();
	ptr->display();
    return 0;
}

