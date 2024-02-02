#include "AoC2023.h"
#include "AoCProblem3.h"

void AoCProblem3::solve()
{
	int red = 12, green = 13, blue = 14;

	ifstream text(this->fPath);

	string line;

	this->solution = 0;
	int counter = 0;
	while (getline(text, line))
	{
		counter++;
		int i = 0;
		while (line[i] != ':')
			i++;
		i++;
		bool fl = false;
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
			
			if ((line[i] == 'g' && res > green) || (line[i] == 'r' && res > red) || (line[i] == 'b' && res > blue))
			{
				fl = true;
				break;
			}
			i++;

		}
		if (fl)
			continue;
		this->arr.push_back(counter);
		this->solution += counter;
	}
	text.close();
}

void AoCProblem3::print()
{
	cout << this->solution << "\n";
}
