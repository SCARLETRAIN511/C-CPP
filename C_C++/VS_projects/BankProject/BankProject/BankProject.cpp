// BankProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>
using namespace std;


#define MIN_BALANCE 500
class Account {
private:
	long accountNumber;
	string firstName;
	string lastName;
	float balance;
	static long NextAccountNumber;
public:
	Account() = default;
	Account(string fname, string lname, float balance);
	long getAccNo() { return accountNumber; };
	string getFistName() { return firstName; };
	float getBalance() { return balance; };

	void Deposit(float amount);
	void Withdraw(float amount);
	static void setLastAccountNumber(long accountNumber);
	static long getLastAccountNumber();
	friend ostream &operator<<(ofstream &ofs, Account &acc);
	friend ifstream &operator>>(ifstream &ifs, Account &acc);
	friend ostream &operator<<(ostream &os, Account &acc);
};

long Account::NextAccountNumber = 0;
Account::Account(string fname, string lname, float balance) {
	NextAccountNumber++;
	accountNumber = NextAccountNumber;
	firstName = fname;
	lastName = lname;
	this->balance = balance;
}

class Bank {
private:
	map<long, Account> accounts;
public:
	Bank() = default;
	Account OpenAccount(string fname, string lname, float balance);
	Account BalanceEnquiry(long accountNumber);
	Account Deposit(long accountNumber, float amount);
	Account WithDraw(long accountNumber, float amount);

	void closeAccount(long accountNumber);
	void showAllAccounts();
	~Bank();
};


int main()
{
    std::cout << "Hello World!\n";
}
