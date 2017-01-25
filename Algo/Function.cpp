#include "Menager.h"
#include "myUtility.h"
using namespace std;

void loadVending(vector<pair<double, int>>& data)
{
	vector<double> nominals = { 200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01 };
	int i = 0, howManyNominals;
	while (i<14)
	{
		cout << "Ilosc " << nominals[i] << ": ";
		cin >> howManyNominals;
		data.push_back(make_pair(nominals[i],howManyNominals));
		i++;
	}
	system("cls");
}