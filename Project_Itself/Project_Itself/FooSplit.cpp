#include <string>
#include <iostream>
#include <regex>
#include <vector>
#include "FooSplit.h"
using namespace std;

vector<string> complite(vector<string> words, string sad) {
	vector<string> arr;
	arr.push_back(sad);
	for (int i = 0; i < words.size(); i++) {
		arr.push_back(words[i]);
	}
	return arr;
}


vector<string> split(string row) {
	if (row[0] == '"') {
		string sad;
		int j = 1;
		while (row[j] != '"') {
			sad += row[j];
			j++;
		}
		regex regex(R"([,]+)");
		sregex_token_iterator it{ (row.begin() + (3+sad.length())), row.end(), regex, -1 };
		vector<string> words{ it, {} };
		words = complite(words, sad);
		return words;
	}
	regex regex(R"([,]+)");
	sregex_token_iterator it{ row.begin(), row.end(), regex, -1 };
	vector<string> words{ it, {} };
	return words;
}