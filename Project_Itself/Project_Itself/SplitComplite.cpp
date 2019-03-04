#include <iostream>
#include <string>
#include "SplitComplite.h"
#include <vector>
#include "FooSplit.h"
using namespace std;

vector<string> *SplitComplite(vector<string> arr, int count_country) {
	string s;
	vector<string> *array = new vector<string>[count_country];
	for (int i = 0; i < count_country; i++) {
		s = arr[i];
		array[i] = split(s);
	}
	string sad="sad";
	return array;
}