// dec to bin.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

void DTB(int a) {
	if (a >= 2) {
		DTB(a / 2);
	}
	cout << a % 2;
	return;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число: ";
	cin >> a;
	cout << "ответ:";
	DTB(a);
	
	return 0;
}
