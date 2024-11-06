#include <iostream>

#include <stdlib.h>
using namespace std;

class bank {
public:
	int teke_value;
	float deposit_amount, balance, withdow_amount;
	string name, address, accont_type, exit;

	void Open_account();
	void deposit();
	void withdow();
	void account_statment();
	void exits();
	void home();
};

void bank::home() {
	cout << "$$$$$$$$$$$$$==> Welcome to bank <==$$$$$$$$$$$$$\n\n";

	cout << "1) Open an account\n";
	cout << "2) Deposit\n";
	cout << "3) Money withdrow\n";
	cout << "4) Account statment\n";
	cout << "5) Exit\n\n\n";
	cout << "Select (1-5)\n";
	cin >> teke_value;

	system("cls");
	if (teke_value == 1)
		Open_account();
	else if (teke_value == 2)
		deposit();
	else if (teke_value == 3)
		withdow();
	else if (teke_value == 4)
		account_statment();
	else
		exits();
}

void bank::deposit() {
	cout << "$$$$$$$$$$$==> Depodit section <==$$$$$$$$$$$$\n\n\n";
	cout << "Please, enter deposit amount:";
	cin >> deposit_amount;
	balance += deposit_amount;
	cout << "Your total balance:" << balance << endl;
	cout << "Exit to press YES(y) or NO(n):";
	cin >> exit;
	if (exit == "y" or exit == "Y") {
		quick_exit(1);
	}

	else {
		system("cls");
		home();
	}
}void bank::withdow() {
	cout << "$$$$$$$$$$$==> Withdow section <==$$$$$$$$$$$$\n\n\n";
	cout << "Please, enter withdow amount:";
	cin >> withdow_amount;
	balance -= withdow_amount;
	cout << "Your total balance:" << balance << endl;
	cout << "Exit to press YES(y) or NO(n):";
	cin >> exit;
	if (exit == "y" or exit == "Y") {
		quick_exit(1);
	}

	else {
		system("cls");
		home();
	}
}void bank::account_statment() {
	cout << "$$$$$$$$$$$==> Account statment section <==$$$$$$$$$$$$\n\n\n";

	if (accont_type == "s") {
		accont_type = "saving";
	}
	else {
		accont_type = "currunt";
	}
	cout << "Account name:" << name << "\n\n";
	cout << "Account address:" << address << "\n\n";
	cout << "Account type:" << accont_type << "\n\n";
	cout << "Account total balance:" << balance << "\n\n";
	if (accont_type == "saving") {
		accont_type = "s";
	}
	else {
		accont_type = "c";
	}
	cout << "Exit to press YES(y) or NO(n):";
	cin >> exit;
	if (exit == "y" or exit == "Y") {
		quick_exit(1);
	}

	else {
		system("cls");
		home();
	}
}void bank::exits() {
	cout << "Exit to press YES(y) or NO(n):";
	cin >> exit;
	if (exit == "y" or exit == "Y") {
		quick_exit(1);
	}

	else {
		system("cls");
		home();
	}
}
void bank::Open_account() {
	cout << "$$$$$$$$$$$==> Open Account section <==$$$$$$$$$$$$\n\n\n";
	cout << "Enter your full name: ";
	cin >> name;
	cout << "Enter your address: ";
	cin >> address;
	cout << "What type of account you went to open saving (s) or currunt (c):";
	cin >> accont_type;
	cout << "First time deposit amount: ";
	cin >> balance;

	cout << "Exit to press YES(y) or NO(n):";
	cin >> exit;
	if (exit == "y" or exit == "Y") {
		quick_exit(1);
	}

	else {
		system("cls");
		home();
	}
}

int main()
{
	bank b1;
	b1.home();
}