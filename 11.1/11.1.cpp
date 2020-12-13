
#include <iostream>
using namespace std;
int main()
{
	
	int n, i, imax, imin;
	double* a, max, min;
	FILE* f{};
	

	fread(&n, sizeof(int), 1, f);
	cout << "n = " << n << endl;

	a = new double[n];
	
	fread(a, sizeof(double), n, f);

	for (imax = imin = 0, max = min = a[0], i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	}

delete[]a;
return 0;
}