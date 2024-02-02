#pragma once
#include "AoC2023.h"

#define PATH3 "input 2.txt"

class AoCProblem3 : public AoCProblem
{
	int solution;
	vector<int> arr;
	const string fPath;

public:
	AoCProblem3() : AoCProblem(3), solution(0), fPath(PATH3) {};
	void solve();
	void print();
};