#include <iostream>
#include <string>
#include <fstream>
#include "ReadFile.h"
#include "SplitComplite.h"
#include <vector>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count_country = 0;
	vector<string> arr = ReadFile("eurovision.csv", count_country);
	vector<string> *array = new vector<string>[count_country];
	array = SplitComplite(arr, count_country);
	system("pause");
	return 0;
}