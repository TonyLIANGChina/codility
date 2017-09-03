
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    	int i;
	int P;
	int diff;
	int result;
	int sum2 = 0;
	int sum = 0;

	for (i = 0; i < N; i++)
	{
		sum += A[i];
	}
	result = abs(sum - A[0] - A[0]);
	
	for (P = 1; P < N; P++)
	{
		sum2 += A[P-1];
		diff = abs(sum - sum2 - sum2);
		if (diff < result)
		{
			result = diff;
		}
	}
	return result;
}
