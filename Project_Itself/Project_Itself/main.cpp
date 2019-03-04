#include <iostream>
#include <string>
#include <fstream>
#include "ReadFile.h"
#include "Calculated_point.h"
using namespace std;

int main() {
<<<<<<< HEAD
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count_country = 0;
	vector<string> arr = ReadFile("eurovision.csv", count_country);
	vector<string> *array = new vector<string>[count_country];
	array = SplitComplite(arr, count_country);
=======
	int count_country;
	string *arr = ReadFile("eurovision.csv",count_country);
	string asd = Calculated_point(arr,count_country);

>>>>>>> parent of 3e801bb... Add function for parce
	system("pause");
	return 0;
}