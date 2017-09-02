int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int result = 0;
    for(i=0;i<N;i++)
    {
        result ^= A[i];
    }
    return result;
}
