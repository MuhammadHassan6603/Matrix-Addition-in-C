#include <stdio.h>
int i,j;
void matrixadd(int a[2][2],int b[2][2],int Res[2][2])
{
	for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            Res[i][j]=a[i][j]+b[i][j];
        }
    }
}
void main()
{
	int A[2][2]={{2,2},{2,2}};
    int B[2][2]={{3,3},{3,3}};
    int Res[2][2];
    matrixadd(A,B,Res);
    printf("Sum of Matrix is : \n");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%i\t",Res[i][j]);
		}
		printf("\n");
	}
    
}
