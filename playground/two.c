#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Bubble_sort(int A[], int n)
{

    int flag, temp;

    for(int i=0; i<n-1; i++)
    {

        flag = 0;
        for(int j=0; j<n-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
            if (flag == 0)
            {
                break;
            }
        }
    }

}
int main()
{
    int B[5] = {4, 5, 6, 7, 8};

    Bubble_sort(B,5);

    for(int i=0; i<5; i++){
        printf("%d ",B[i]);
    }
    return 0;
}
