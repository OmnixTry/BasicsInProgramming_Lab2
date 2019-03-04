#include <iostream>
#include <string>
#include <fstream>
#include "structure.h"
#include "Wild_Nixon_Functions.h"
using namespace std;

void summing_up(int **points, int *sums, int size) {
	for (int i = 0; i < size; i++)
		sums[i] = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			sums[i] += points[i][j];
}

void winners(int *sums, string *countries, int size) {
	int index = 0;
	int backup;
	ofstream results("results.csv", ios::trunc);
	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j < size; j++) {
			if (sums[index] < sums[j]) index = j;
		}
		
		results << i << " - " << countries[index] << ": " << sums[index] << "\n";
		sums[index] = -1;
		index = 0;
	}
	results.close();
}

void contest_results(int **points, string *countries) {
	ifstream the_file("eurovision.csv");
	string buff;
	getline(the_file, buff);
	int size = stoi(buff);
	int *sums = new int[size];
	summing_up(points, sums, size);
	winners(sums, countries, size);
	the_file.close();
}