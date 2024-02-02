#pragma once
#include "AoC2023.h"

#define PATH2 "input 1.txt"

class AoCProblem2 : public AoCProblem
{
	int solution;
	const string fPath;

public:
	AoCProblem2() : AoCProblem(2), solution(0), fPath(PATH2) {};
	void solve();
	void print();
};