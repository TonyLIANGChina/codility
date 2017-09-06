#include "malloc.h"
#include "string.h"
struct Results solution(int N, int A[], int M) {
 struct Results result;
 int *counters;
	int maxcounter = 0;
	int i, j;
	int flag = 0;
	counters = (int *)malloc(N * sizeof(int));
	memset(counters, 0, N * sizeof(int));

	for (i = 0; i < M; i++)
	{
		if (A[i] < (N + 1))
		{
			
			if (counters[A[i] - 1] < flag)
				counters[A[i] - 1] = flag + 1;
			else
				counters[A[i] - 1]++;

			if (counters[A[i] - 1] > maxcounter)
			{
				maxcounter = counters[A[i] - 1];
			}
		}
		else
		{
			flag = maxcounter;
		}
	}

	for (j = 0; j < N; j++)
	{
		if (counters[j] < flag)
		{
			counters[j] = flag;	
		}

	}

	result.C = counters;
	result.L = N;
	return result;

}
