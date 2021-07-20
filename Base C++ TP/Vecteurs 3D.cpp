#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<vector<int>> V(
		{
			{17,2,4,7} , {1,9} , {5,4,7} , {18,98,100} , {179}
		}
	);
	
	start:
	for (auto row : V)
	{
		for (auto cell : row)
		{
			cout << cell << " | ";
		}
		cout << endl;
	}
	cout << "---------------------" << endl;
	for (size_t i(0); i<V.size(); i++)
	{
		cout << "Row " << i << " (" << V[i].size() <<" items) : ";
		for (size_t j(0); j<V[i].size(); j++)
		{
			cout << V[i][j] << " | ";
		}
		cout << endl;
	}
	
	system("pause>null"); 
	system("cls"); goto start;
}
