#include "Menager.h"
#include "myUtility.h"
using namespace std;

void loadVending(vector<pair<double, int>>& data)
{
	vector<double> nominals = { 200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01 };
	int i = 0;
	while (i<14)
	{
		char answ;
		cout << "Czy jest " << nominals[i] << "  [t,n]: ";
		cin >> answ;
		if (answ != 't')
		{
			i++;
			continue;
		}
		int number;
		cout<< "Ile monet/banknotow: ";
		cin >> number;
		data.push_back(make_pair(nominals[i],number));
		i++;
	}
	system("cls");
}