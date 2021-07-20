#include<iostream>
#include<vector>
using namespace std;
void show_tab(vector<int> tab);
int main()
{		

	vector<int> V;
	int choice;
	start:
	show_tab(V);
	cout << "\t*-----------*"    << endl
		 << "\t| 1. ADD    |"    << endl
		 << "\t| 2. REMOVE |"    << endl
		 << "\t| 3. EDIT   |"    << endl
		 << "\t| 4. CLEAR  |"    << endl
		 << "\t*-----------*"    << endl;
	cout << "* Enter choice: ";
	cin >> choice;
	switch(choice)
	{
		case 1: // ADD
			cout << "\tEnter items count: ";
			int num, N;
			cin >> N;
			for (int i(0); i<N; i++)
			{
				cout << "\t[" << i <<"] Enter number: ";
				cin >> num;
				V.push_back(num);
			}			
			break;
		case 2: // REMOVE
			if (!V.empty())
			{
				V.pop_back();
			}
			else
			{
				cout << "\tTable is empty!";
				system("pause>null");
			}
			break;
		case 3: // EDIT
			break;
		case 4: // ...
			V.clear();
			break;
		default: cout << "Invalid choice!" << endl;
	}
	//system("pause>null"); 
	system("cls"); goto start;
}
void show_tab(vector<int> tab)
{
	cout << "\t*================*" << endl;
	cout << "\t|     Table      |" << endl;
	cout << "\t*================*" << endl;
	for(size_t i(0); i<tab.size(); i++)
	{
		cout << "\t[" << i << "]\t" << tab[i] << endl;
	}
	cout << "\t==================" << endl;
}
