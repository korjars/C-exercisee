#include<stdio.h>
#include<math.h>

void InsertSort(int A[])
{
    //printf("%d\n",sizeof(A));
    for (int i = 0; i < 10; i++)
    {   
        int temp = A[i];
        for (int j = i-1; j >= 0; j--)
        {
            if (temp <A[j])
            {
                A[j+1] = A[j];
            }
            else
            {
                A[j+1] = temp;
                break;
            }
        }
    }
}

int main()
{
    int A[10] = {1,5,4,3,2,7,6,9,8,666};
    printf("%d\n",sizeof(A));
    InsertSort(A);
    for (int i = 0; i < sizeof(A)/sizeof(int); i++)
    {
        printf("%d < ",A[i]);
    }
    
}