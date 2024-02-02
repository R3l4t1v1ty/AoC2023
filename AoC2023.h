#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "fstream"

using namespace std;

class AoCProblem
{
	int n;
public:
	AoCProblem(int k) : n(k) {};
	virtual void solve() = 0;
	virtual void print() = 0;
};

class AdventOfCode2023
{
	vector<AoCProblem*> problems;

public:
	AdventOfCode2023(int n);
	~AdventOfCode2023();
	AoCProblem* getProblem(int k);
};

class AoCFactory
{
public:
	AoCProblem* makeProblem(int n);
};
