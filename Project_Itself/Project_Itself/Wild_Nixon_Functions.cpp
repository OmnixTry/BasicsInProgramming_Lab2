#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Wild_Nixon_Functions.h"
using namespace std;

vector<string> *summing_up(vector<string> *points, int count_country) {
	int sum = 0;
	for (int i = 0; i < count_country; i++) {
		for (int j = 1; j < points[i].size(); j++) {
			sum += stoi(points[i][j]);
		}
		points[i][1] = to_string(sum);
		sum = 0;
		while (points[i].size() != 2) {
			points[i].pop_back();
		}
	}
	return points;
}

void winners(vector<string> *arr, int count_country) {
	int index = 0;
	int backup;
	ofstream results("results.csv", ios::trunc);
	for (int i = 0; i < count_country; i++) {
		for (int j = i; j < count_country; j++) {
			if (stoi(arr[i][1]) < stoi(arr[j][1])) {
				vector<string> temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		results << i + 1 << "," << arr[i][0] << "," << arr[i][1] << "\n";
	}
	results.close();
}

void contest_results(vector<string> *arr,int count_country) {
	arr = summing_up(arr, count_country);
	winners(arr, count_country);
}