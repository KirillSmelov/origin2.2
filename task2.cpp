#include<iostream>
#include<string>
#include<Windows.h>
struct Account
{
	int account_number = 0;
	std::string name;
	double balance = 0;
};
void Change(Account* balance, double &NewBalance)
{
	balance->balance = NewBalance;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Account account;
	std::cout << "Введите номер счёта: ";
	std::cin >> account.account_number;
	std::cout << "Введите имя владельца: ";
	std::cin >> account.name;
	std::cout << "Введите баланс: ";
	std::cin >> account.balance;
	double NewBalance;
	std::cout << "Введите новый баланс: ";
	std::cin >> NewBalance;
	Change(&account,NewBalance);
	std::cout << "Ваш счёт: " << account.name << " " << account.account_number << " " << account.balance << std::endl;
	return 0;
}