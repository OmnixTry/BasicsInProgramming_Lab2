#include <iostream>
#include <string>
#include <vector>
#include "Calculated_point.h"
using namespace std;

vector<int> sort(vector<int> ve) {
	for (size_t i = 0; i < ve.size(); i++)
	{
		for (size_t j = 0; j < ve.size(); j++)
		{
			if (ve[j] > ve[i]) {
				int temp = ve[j];
				ve[j] = ve[i];
				ve[i] = temp;
			}
		}
	}
	
	return ve;
}


vector<string> *search(vector<string> *arr, int max, int i, vector<int> &ball, int count_country) {
	for (size_t j = 0; j < arr[i].size(); j++) {
		if (stoi(arr[j][i]) == max) {
			string s = to_string(ball.back());
			arr[j][i] = s;
			ball.pop_back();
			return arr;
		}
	}
}

void CreateBall(vector<int> &ball,int count_country) {
	for (int i = 0; i < count_country-10;i++) {
		ball.push_back(0);
	}
	ball.push_back(1);
	ball.push_back(2);
	ball.push_back(3);
	ball.push_back(4);
	ball.push_back(5);
	ball.push_back(6);
	ball.push_back(7);
	ball.push_back(8);
	ball.push_back(10);
	ball.push_back(12);
}

vector<string> *Calculated_point(vector<string> *arr, int count_country) {
	cout << "Calculated_point" << endl;
	vector<int> point;
	int max;
	vector<int> ball;
	CreateBall(ball, count_country);
	for (size_t i = 1; i < arr[i].size(); i++) {
		for (int j = 0; j < count_country; j++) {
			point.push_back(stoi(arr[j][i]));
		}
		point = sort(point);
		while (point.size() >1 ) {
			max = point.back();
			point.pop_back();
			arr = search(arr, max, i, ball, count_country);
		}
		CreateBall(ball, count_country);
	}
	
	return arr;
}