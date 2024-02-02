#pragma once
#include "AoC2023.h"

#define PATH1 "input 1.txt"

class AoCProblem1 : public AoCProblem
{
	int solution;
	const string fPath;

public:
	AoCProblem1() : AoCProblem(1), solution(0), fPath(PATH1) {};
	void solve();
	void print();
};