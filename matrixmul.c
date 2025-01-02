#include<stdio.h>
#include<conio.h>
#define MAX 5
int main()
{
    int m1[MAX][MAX],m2[MAX][MAX],p[MAX][MAX];
    int i,j,c1,c2,r1,r2,k;
    
    printf("Enter Order of first Matrix :");
    scanf("%d%d",&r1,&c1);
    printf("Enter Order of second Matrix :");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Invalid Matrix");
    }
    else
    {
        printf("Enter Element of first %d*%d Matrix \n",r1,c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }

        printf("Enter Elements of Second %d*%d Matrix \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                p[i][j]=0;
                for(k=0;k<c2;k++)
                {
                    p[i][j]+=m1[i][k]*m2[k][j];
                }
            }
            
        }

        printf("The First Matrix is : ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d",m1[i][j]);
            }
            printf("\n");
        }

        printf("The Second Matrix is : ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d",m2[i][j]);
            }
            printf("\n");
        }

        printf("***** The Result ******");
        printf("The Product of Given Matrix is : \n");
         for (i = 0; i < r1; i++)
          {
         for (j = 0; j < c2; j++)
         {
            printf("%d ", p[i][j]);
        }
        printf("\n");
          }
        
    }
    return 0;
}