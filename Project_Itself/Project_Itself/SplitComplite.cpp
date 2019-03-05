#include <iostream>
#include <string>
#include <vector>
#include "FooSplit.h"
#include "SplitComplite.h"
using namespace std;

vector<string> *SplitComplite(vector<string> arr, int count_country) {
	string s;
	vector<string> *array = new vector<string>[count_country];
	for (int i = 0; i < count_country; i++) {
		s = arr[i];
		array[i] = split(s);
	}
	return array;
}