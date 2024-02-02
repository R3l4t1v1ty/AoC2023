#include "AoC2023.h"
#include "AoCProblem4.h"

void AoCProblem4::solve()
{

	ifstream text(this->fPath);

	string line;

	this->solution = 0;


	while (getline(text, line))
	{
		int i = 0;
		while (line[i] != ':')
			i++;
		i++;
		int maxg = 0, maxb = 0, maxr = 0;
		while (i < line.size())
		{
			while (i < line.size() && !isdigit(line[i]))
				i++;
			if (i == line.size())
				break;
			int res = 0;
			while (isdigit(line[i]))
			{
				res = 10 * res + line[i] - '0';
				i++;
			}
			i++;
			if (line[i] == 'g')
			{
				maxg = (maxg < res) ? res : maxg;
			}
			else if (line[i] == 'r')
			{
				maxr = (maxr < res) ? res : maxr;
			}
			else if (line[i] == 'b')
			{
				maxb = (maxb < res) ? res : maxb;
			}
		}
		this->solution += maxb * maxr * maxg;
	}
	text.close();
}

void AoCProblem4::print()
{
	cout << this->solution << "\n";
}
