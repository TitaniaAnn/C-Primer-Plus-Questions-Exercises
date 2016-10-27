//
//  Chapter05Exercise03.cpp
//  Chapter05Exercise03
//
//  Created by Cynthia Brown on 10/26/16.
//  Copyright (c) 2015 Cynthia Brown. All rights reserved.
//
//  Daphne invests $100 at 10% simple interest. That is, every year, the investment earns
//	10% of the original investment, or $10 each and every year:
//		interest = 0.10 x original balance
//	At the same time, Cleo invests $100 at 5% compound interest. That is, interest is 5% of
//	the current balance, including previous additions of interest.
//		interest = 0.05 x current balance
//	Cleo earns 5% of $100 the first year, giving her $105. The next year she earns 5% of 
//	$105, or $5.25, and so on. Write a program that finds how many years it takes for the
//	value of Cleo's investment to exceed the value of Daphne's investment and then displays
//	the value of both investments at the time.

#include <iostream>
#include <string>
using namespace std;

struct Account {
	string name;
	float startBalance;
	float currentBalance;
	float interest;
	int type;
};

Account * getInput() {
	Account * account = new Account;
	cout << "Enter account type 0 for standard 1 for compound: ";
	cin >> account->type;
	cout << "Enter name: ";
	cin >> account->name;
	cout << "Enter start balance: ";
	cin >> account->startBalance;
	cout << "Enter interest rate: ";
	cin >> account->interest;
	account->currentBalance = account->startBalance;

	return account;
}

void updateAccount(Account * account) {
	switch (account->type) {
	case 0:
		account->currentBalance += account->startBalance * account->interest;
		break;
	case 1:
		account->currentBalance += account->currentBalance * account->interest;
		break;
	}
}

bool compareAccounts(Account * account1, Account * account2) {
	if (account2->currentBalance > account1->currentBalance)
		return true;
	return false;
}

int main(int argc, const char * argv[]) {
	Account * account1 = getInput();
	Account * account2 = getInput();
	int years = 0;
	while (!compareAccounts(account1, account2)) {
		years++;
		updateAccount(account1);
		updateAccount(account2);
		cout << "Year: " << years << endl;
		cout << account1->name << endl;
		cout << "Current Balance: " << account1->currentBalance << endl;
		cout << account2->name << endl;
		cout << "Current Balance: " << account2->currentBalance << endl;
	}

	cin >> years;
	return 0;
}