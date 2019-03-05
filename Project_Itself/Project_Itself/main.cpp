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
#include "Wild_Nixon_Functions.h"
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count_country = 0;
	vector<string> arr = readfile("eurovision.csv", count_country);
	vector<string> *arra = new vector<string>[count_country];
	arra = SplitComplite(arr, count_country);
	arra = Calculated_point(arra, count_country);
	contest_results(arra, count_country);
	system("pause");
	return 0;
}