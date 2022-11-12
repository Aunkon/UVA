/*#####       Md. Walid Bin khalid Aunkon                  #####*/
/*#####       Daffodil International University            #####*/
/*#####       ID:     121-15-1669                          #####*/
/*#####       Email:  mdwalidbinkhalidaunkon@gmail.com     #####*/
/*#####       Mobile No:  +88-01916-492926                 #####*/

#include <stdio.h>
const int maxRange = 501;
int GCDArray[maxRange][maxRange];
int Primes[maxRange];

int MemSet()
{

	for (int i = 0; i < maxRange; i++)
	{
		Primes[i] = i;
		for (int j = 0; j < maxRange; j++)
		{
			GCDArray[i][j] = 0;
		}
	}
	return 0;
}

int PrimeSet()
{
	MemSet();
	for (int i = 2; i < maxRange; i++)
	{
		if (Primes[i] == i)
			for (int j = i * 2; j < maxRange; j += i)
			{
				Primes[j] = 0;
			}
	}
	return 0;
}

int GCD(int k, int l)
{
	if (Primes[k] == k && Primes[l] == l)
		return GCDArray[k][l] = 1;
	if (GCDArray[k][l] != 0)
		return GCDArray[k][l];
	int gcd = 1;
	for (int i = 1; i <= k && i <= l; i++)
	{
		if (k % i == 0 && l % i == 0)
			gcd = gcd < i ? i : gcd;
	}
	GCDArray[k][l] = gcd;
	return GCDArray[k][l];
}

int main()
{
	PrimeSet();
	int n;
	while (scanf("%d", &n) && n != 0)
	{
		int g = 0;
		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				g += GCD(i, j);
			}
		}
		printf("%d\n", g);
	}
	return 0;
}