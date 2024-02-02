#include "AoCProblem6.h"

vector<int> AoCProblem6::findAdjNums(const vector<string>& mat, int x, int y)
{
	
}

void AoCProblem6::solve()
{
	ifstream text(this->fPath);
	string line;
	vector<string> mat;
	while (getline(text, line))
		mat.push_back(line);
	text.close();

	for (int i = 0; i < mat.size(); i++)
	{
		for (int j = 0; j < mat[i].size(); j++)
		{
			if (mat[i][j] == '*')
			{
				vector<int> nums = this->findAdjNums(mat, i, j);
				if (nums.size() == 2)
					this->solution += nums[0] * nums[1];
			}
		}
	}

}

void AoCProblem6::print()
{
	cout << this->solution << "\n";
}
