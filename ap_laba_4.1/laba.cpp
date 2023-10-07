#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, i;
	int N = 22;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	S = 0;
	i = k;
	while (i <= 22)
	{
		S += (sqrt(i * i + N * N)) / i;
		i++;
	}
	cout << S << endl;

	S = 0;
	i = k;
	do {
		S += (sqrt(i * i + N * N)) / i;
		i++;
	} while (i <= 22);
	cout << S << endl;

	S = 0;
	for (i = k; i <= 22; i++)
	{
		S += (sqrt(i * i + N * N)) / i;
	}
	cout << S << endl;

	S = 0;
	for (i = 22; i >= k; i--)
	{
		S += (sqrt(i * i + N * N)) / i;
	}
	cout << S << endl;
	return 0;
}