#include <string>
#include <iostream>
#include <regex>
#include <vector>
#include "FooSplit.h"
using namespace std;

vector<string> split(string row) {
	regex regex(R"([\s,]+)");
	sregex_token_iterator it{ row.begin(), row.end(), regex, -1 };
	vector<string> words{ it, {} };
	return words;
}