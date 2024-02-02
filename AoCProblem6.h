#pragma once
#include "AoC2023.h"

#define PATH6 "input 3.txt"

class AoCProblem6 : public AoCProblem
{
	int solution;
	vector<int> arr;
	const string fPath;
	vector<int> findAdjNums(const vector<string>& mat,int x, int y);
public:
	AoCProblem6() : AoCProblem(6), solution(0), fPath(PATH6) {};
	void solve();
	void print();
};