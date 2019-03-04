#include <iostream>
#include <string>
#include <fstream>
#include "structure.h"
#include "Wild_Nixon_Functions.h"
using namespace std;

void summing_up(winners &countries) {
	ifstream eurovision("eurovision.csv");
	string buff;
	int number;
	eurovision >> buff;
	number = stoi(buff);
	countries.results = new int[number];
	countries.names = new string[number];

}