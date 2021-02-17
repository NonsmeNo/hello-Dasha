#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char str[80];
	char poisk[30];
	char change[30];
	char* pstr;
	char* mas = new char[80];
	cout << "введи строку: ";
	cin.getline(str, 80);
	cout << "Введи слово которое надо найти: ";
	cin.getline(poisk, 30);
	cout << "Введи слово, на которое надо заменить строку: ";
	cin.getline(change, 30);

	pstr = strstr(str, poisk);

	string newStr = str;
	int a = newStr.find(pstr);
	int len;
	len = strlen(poisk);
	newStr.replace(a, len, change);

	delete[]mas;
	cout << newStr << endl;
	return 0;
}