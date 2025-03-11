//matrix multiplication

#include <stdio.h>

void main()
{
    int r,c,R,C,d=0;
    
    printf("enter the number of rows in first matrix: ");
    scanf("%d",&r);
    printf("enter the number of columns in first matrix: ");
    scanf("%d",&c);
    printf("enter the number of rows in second matrix: ");
    scanf("%d",&R);
    printf("enter the number of columns in secomd matrix: ");
    scanf("%d",&C);

    int a[r][c],b[R][C],m[r][C];

    if(c==R)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("enter the value of a%d%d: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
            
        }

        printf("\n");
        printf("\n");

        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                printf("enter the value of b%d%d: ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
            
        }

        printf("\n");
        printf("\n");

        printf("the multiplication of a and b matrix");
        printf("\n");

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < C; j++)
            {   d=0;
                for (int k = 0; k < c; k++)
                {
                    d+=a[i][k]*b[k][j];
                }

                m[i][j]=d;

                printf("%d",m[i][j]);
                
            }
            printf("\n");
            
        }
        
        
    }
    else
    {
        printf("the multiplication is not possible");
    }
}
