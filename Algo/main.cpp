#include "myUtility.h"
#include "Menager.h"
using namespace std;

int main()
{
	// Nonima³y
	vector<int> N = { 200,100,50,20,10,5,2,1 };
	vector<int> result;
	int i = 0, kwota = 148;
	int howManyTimes;
	while (kwota > 0)
	{
		if (kwota >= N[i])
		{
			howManyTimes = kwota / N[i];
			for(int j=0; j<howManyTimes;j++) result.ADD(N[i]);
			kwota -= (N[i] * howManyTimes);
		}
		i++;
	}
	getchar(); getchar();
	return 0;
}