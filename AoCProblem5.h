#pragma once
#include "AoC2023.h"

#define PATH5 "input 3.txt"

class AoCProblem5 : public AoCProblem
{
	int solution;
	vector<int> arr;
	const string fPath;

public:
	AoCProblem5() : AoCProblem(5), solution(0), fPath(PATH5) {};
	void solve();
	void print();
};
