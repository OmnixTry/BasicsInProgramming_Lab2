#include <iostream>
#include <string>
#include <fstream>
#include "stdlib.h"
#include "ReadFile.h"
#include <vector>
using namespace std;

vector<string> ReadFile(string path, int &count_country) {
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
		count_country = atoi(ch);
		cout << "Count_country= " << count_country << endl;
		vector<string> arr;
		while (!fin.eof()) {
			getline(fin, str);
			arr[i] = str;
			i++;
		}
		return arr;
	}
}
