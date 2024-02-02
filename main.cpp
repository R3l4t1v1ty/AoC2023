#include "AoC2023.h"
#define N 6


int main(char*argc, char*argv[])
{
	AdventOfCode2023 AoC(N);
	AoC.getProblem(N)->solve();
	AoC.getProblem(N)->print();
	return 0;
}