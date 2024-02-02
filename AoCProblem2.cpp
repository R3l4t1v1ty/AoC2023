#include "AoC2023.h"
#include "AoCProblem2.h"

void AoCProblem2::solve()
{
	ifstream text(this->fPath);

	string line;

	this->solution = 0;

	string words[] = { "one","two","three","four","five","six","seven","eight","nine" };
	vector<int> k;
	int ans = -1;
	int i = 0;
	int a = 0, b = 0;
	while (getline(text, line))
	{
		k = vector<int>(9, 0);
		ans = -1;

		for (i = 0; i < line.size(); i++)
		{
			if (isdigit(line[i]))
			{
				break;
			}
			for (int j = 0; j < 9; j++)
			{
				if (words[j][k[j]] == line[i])
				{
					k[j]++;
					if (words[j].size() == k[j])
					{
						ans = j;
						break;
					}
				}
				else
				{
					k[j] = 0;
					if (words[j][k[j]] == line[i])
					{
						k[j] += 1;
					}
				}
			}
			if (ans != -1)
			{
				break;
			}
		}
		
		if (ans == -1)
			a = line[i] - '0';
		else
			a = ans + 1;
		
		k = vector<int>(9, 0);
		ans = -1;

		for (i = line.size() - 1; i >= 0; i--)
		{
			if (isdigit(line[i]))
			{
				break;
			}
			for (int j = 0; j < 9; j++)
			{
				if (words[j][words[j].size()-k[j]-1] == line[i])
				{
					k[j]++;
					if (words[j].size() == k[j])
					{
						ans = j;
						break;
					}
				}
				else
				{
					k[j] = 0;
					if (words[j][words[j].size() - k[j] - 1] == line[i])
					{
						k[j] += 1;
					}
				}
			}
			if (ans != -1)
			{
				break;
			}
		}
		if (ans == -1)
			b = line[i] - '0';
		else
			b = ans + 1;

		this->solution += 10 * a + b;
	}
	text.close();
}

void AoCProblem2::print()
{
	cout << this->solution << "\n";
}
