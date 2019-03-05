#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <regex>
#include "ReadFile.h"
#include "FooSplit.h"
#include "SplitComplite.h"
#include "Calculated_point.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count_country = 0;
	vector<string> arr = readfile("eurovision1.csv", count_country);
	vector<string> *arra = new vector<string>[count_country];
	arra = SplitComplite(arr, count_country);
	Calculated_point(arra, count_country);
	system("pause");
	return 0;
}