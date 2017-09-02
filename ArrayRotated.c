struct Results solution(int A[], int N, int K) 
{
	Results result;
	int i;
	int *temp;
	temp = (int *)malloc(N * sizeof(int));
	memcpy(temp, A, N * sizeof(int));
	for (i = 0; i < N; i++)
	{
		temp[(i + K) % N] = A[i];
	}
	result.A = temp;
	result.N = N;
	return result;
}
