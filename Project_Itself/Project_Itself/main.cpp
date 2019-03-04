#include <iostream>
#include <string>
#include <fstream>
#include "ReadFile.h"
#include "Calculated_point.h"
using namespace std;

int main() {
	int count_country;
	string *arr = ReadFile("eurovision.csv",count_country);
	string asd = Calculated_point(arr,count_country);

	system("pause");
	return 0;
}