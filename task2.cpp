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
	std::cout << "Введите номер счёта: ";
	Account num;
	std::cin >> num.account_number;
	std::cout << "Введите имя владельца: ";
	Account name;
	std::cin >> name.name;
	std::cout << "Введите баланс: ";
	Account balance;
	std::cin >> balance.balance;
	double NewBalance;
	std::cout << "Введите новый баланс: ";
	std::cin >> NewBalance;
	Change(&balance,NewBalance);
	std::cout << "Ваш счёт: " << name.name << " " << num.account_number << " " << balance.balance << std::endl;
	return 0;
}