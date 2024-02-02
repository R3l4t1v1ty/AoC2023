#include "AoC2023.h"
#include "AoCProblem1.h"

void AoCProblem1::solve()
{
	ifstream text(this->fPath);

	string line;
	
	this->solution = 0;

	while (getline(text, line))
	{
		int i = 0;
		int j = line.size() - 1;
		while (!isdigit(line[i]) && !isdigit(line[j]))
		{
			i++;
			j--;
		}
		while (!isdigit(line[i]))
		{
			i++;
		}
		while (!isdigit(line[j]))
		{
			j--;
		}
		this->solution += (line[i] - '0') * 10 + line[j] - '0';
	}
	text.close();
}
void AoCProblem1::print()
{
	cout << this->solution << "\n";
}
