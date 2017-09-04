#include "malloc.h"
#include "string.h"
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *bitmap;
    int i;
    int sum=0;
    int result=0;
    bitmap = (int*)malloc(N*sizeof(int));
    memset(bitmap,0,N*sizeof(int));
    
    
    for(i=0;i<N;i++)
    {
        if(A[i]>N)
        {
            result = 0;
            break;
        }
        if(bitmap[A[i]-1]==0)
        {
            bitmap[A[i]-1] = 1;
            sum+=1;
        }
        else
        {
            result = 0;
            break;
        }
        
    }
    if(sum==N)
    {
        result = 1;
    }
    return result;
}
