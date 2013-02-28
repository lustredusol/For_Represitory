#include <stdio.h>
#include <time.h>
#include <iostream>

int main()
{
	int A[100];
	srand(time(NULL));
	for (int i = 1; i<100; ++i)
	{
		A[i] = rand()%100;
		if (A[i]<10)
		{
			printf (" ");
		}
		printf (" %d,", A[i]);
		if ((i)%9==0)
		{
			printf ("\n");
		}
	}
	for (int j = 1; j<100; ++j)
	{
		int F = 0;
		for (int i = 1; i<(100-j); ++i)
		{
			if (A[i]>A[i+1])
			{
				int a = A[i];
				A[i] = A[i+1];
				A[i+1] = a;
				F = 1;
			}
		}
		if (F==0)
		{
			exit;
		}
	}
	printf ("\n\n");
	for (int i = 1; i<100; ++i)
	{
		if (A[i]<10)
		{
			printf (" ");
		}
		printf (" %d,", A[i]);
		if ((i)%9==0)
		{
			printf ("\n");
		}
	}
	return 0;
}