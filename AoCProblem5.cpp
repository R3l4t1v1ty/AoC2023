#include "AoC2023.h"
#include "AoCProblem5.h"

void AoCProblem5::solve()
{
	ifstream text(this->fPath);
	string line;
	vector<string> mat;
	while (getline(text, line))
		mat.push_back(line);

	for (int i = 0; i < mat.size(); i++)
	{
		int j = 0;
		while (j < mat[i].size())
		{
			while (j < mat[i].size() && !isdigit(mat[i][j]))
				j++;
			if (j == mat[i].size())
				break;
			int num = 0;
			int k = j;
			while (j < mat[i].size() && isdigit(mat[i][j]))
			{
				num = 10 * num + mat[i][j] - '0';
				j++;
			}
			bool b = false;
			if (k > 0 && (mat[i][k - 1] != '.' && !isdigit(mat[i][k - 1])))
				b = true;
			if (j < mat[i].size() && (mat[i][j] != '.' && !isdigit(mat[i][j])))
				b = true;
			if (i > 0)
			{
				for (int t = k;t<j;t++)
					if (mat[i - 1][t] != '.' && !isdigit(mat[i - 1][t]))
					{
						b = true;
						break;
					}
				if (k > 0 && (mat[i - 1][k - 1] != '.' && !isdigit(mat[i - 1][k - 1])))
					b = true;
				if (j < mat[i].size() && (mat[i - 1][j] != '.' && !isdigit(mat[i - 1][j])))
					b = true;

			}
			if (i + 1 < mat.size())
			{
				for (int t = k; t < j; t++)
					if (mat[i + 1][t] != '.' && !isdigit(mat[i + 1][t]))
					{
						b = true;
						break;
					}
				if (k > 0 && (mat[i + 1][k - 1] != '.' && !isdigit(mat[i + 1][k - 1])))
					b = true;
				if (j < mat[i].size() && (mat[i + 1][j] != '.' && !isdigit(mat[i + 1][j])))
					b = true;
			}
			if (b)
				this->solution += num;
		}
	}

	text.close();
}

void AoCProblem5::print()
{
	cout << this->solution << "\n";
}
