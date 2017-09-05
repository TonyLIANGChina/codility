#include "string.h"
#include "malloc.h"
int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int *bitmap;
    int result=0;
    int result2=-1;
    bitmap=(int *)malloc(X*sizeof(int));
    memset(bitmap,0,X*sizeof(int));
    for(i=0;i<N;i++)
    {
        if(bitmap[A[i]-1]==0)
        {
            bitmap[A[i]-1]=1;
            result+=bitmap[A[i]-1];
            if(result<X)
            {
                continue;
            }
            else
            {
                result2 = i;
            }
        }
    }
    return result2;
}
