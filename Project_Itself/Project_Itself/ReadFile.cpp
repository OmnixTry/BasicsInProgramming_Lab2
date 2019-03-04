#include <iostream>
#include <string>
#include <fstream>
#include "stdlib.h"
#include "ReadFile.h"
using namespace std;

string *ReadFile(string path, int &count_country) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Помилка відкриття файлу!" << endl;
		exit(1);
	}
	else {
		cout << "Файл відкритий!" << endl;
		char ch[50];
		string str;
		int i = 0;

		fin.getline(ch, 50);
		int count_country = atoi(ch);
		string *arr = new string[count_country];
		while (!fin.eof()) {
			getline(fin, str);
			arr[i] = str;
			i++;
		}
		for (i = 0; i < count_country; i++) {
			cout << arr[i] << endl;
		}
		return arr;
	}
}
