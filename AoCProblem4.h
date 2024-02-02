#pragma once
#include "AoC2023.h"

#define PATH4 "input 2.txt"

class AoCProblem4 : public AoCProblem
{
	int solution;
	vector<int> arr;
	const string fPath;

public:
	AoCProblem4() : AoCProblem(4), solution(0), fPath(PATH4) {};
	void solve();
	void print();
};
