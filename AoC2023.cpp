#include "AoC2023.h"
#include "AoCProblem1.h"
#include "AoCProblem2.h"
#include "AoCProblem3.h"
#include "AoCProblem4.h"
#include "AoCProblem5.h"
#include "AoCProblem6.h"

AdventOfCode2023::AdventOfCode2023(int n)
{
	for (int i = 1; i <= n; i++)
	{
		this->problems.push_back(AoCFactory().makeProblem(i));
	}
}

AdventOfCode2023::~AdventOfCode2023()
{
	for (int i = 0; i < this->problems.size(); i++)
	{
		delete this->problems[i];
	}
}

AoCProblem* AdventOfCode2023::getProblem(int k)
{
	if (k <= this->problems.size())
	{
		return this->problems[k - 1];
	}
	throw "Index out of range!";
}

AoCProblem* AoCFactory::makeProblem(int n)
{
	switch (n)
	{
		case 1:
			return new AoCProblem1();
		case 2:
			return new AoCProblem2();
		case 3:
			return new AoCProblem3();
		case 4:
			return new AoCProblem4();
		case 5:
			return new AoCProblem5();
		case 6:
			return new AoCProblem6();
	}
}

