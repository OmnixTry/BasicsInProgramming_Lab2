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