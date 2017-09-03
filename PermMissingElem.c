int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int missingvalue=0;
    int sum=0;
    for(i=1;i<=N+1;i++)
    {
        missingvalue+=i;
        if(i<N+1)
        {
           sum+=A[i-1]; 
        }   
    }
    missingvalue = missingvalue - sum;
    return missingvalue;
    
}
