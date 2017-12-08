#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>



int main(){

srand((unsigned) time (NULL) );

int m,n,i=0,j,min=101,nn,mm,bif,baf,bef;

/*
m=(3+rand()%7);
n=(4+rand()%6);*/
m=3;
n=4;
int a[m][n];
/*char b[1000];*/
i=0;

printf("random matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=-10+rand()%20;
             printf("%d\t",a[i][j]);



        }
        printf("\n");/*types random matrix*/
    }

printf("______________________________________\n");

baf=n/2;/*reverses  and replaces strings*/
bef=m-1;
i=0;
    for(j=0;j<baf;j++){
        bif=a[i][j];
        a[i][j]=a[i][n-j-1];
        a[i][n-j-1]=bif;
    }

    for(j=0;j<baf;j++){
        bif=a[bef][j];
        a[bef][j]=a[bef][n-j-1];
        a[bef][n-j-1]=bif;
    }
    i=0;

    for(j=0;j<n;j++){
    bif=a[i][j];
    a[i][j]=a[bef][j];
    a[bef][j]=bif;
}
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
                if(a[i][j]<min){
                mm=i;
                nn=j;
                min=a[i][j];
            }nn++;
            mm++;
            printf("string of min element=%d\ncolumn of min element=%d\nmin element=%d\n",mm,nn,min);/*types minimal string, column and minimal element*/
nn--;
mm--;
    for (i=mm;i<(m-1);i++)
        for (j=0;j<n;j++)
            a[i][j]=a[i+1][j];
    for (i=0;i<(m-1);i++)
        for (j=nn;j<n-1;j++)
            a[i][j]=a[i][j+1];


        printf("_____________________________________\n");
        for(i=0;i<m-1;i++){
        for(j=0;j<n-1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");/*types new matrix without min column and string*/
    }
    //int l=0;
    //int p=0;
    int l;
    printf("Enter number of columns");
    scanf("%d", &l);
    int g[n-1][l];

    for(i = 0; i < n - 1; i ++)
        for(j = 0; j < l; j ++)
        {
            g[i][j] = 0;
        }
    printf("new array's size = [%d][%d]\n", n - 1, l);
    for(i = 0; i < n - 1; i ++)
    {
        for(j = 0; j < l; j ++)
        {
            printf(">>");
            scanf("%d", &g[i][j]);
        }
        printf("\n");
    }
   /*for(i=0; i<1000;i++){

    if(b[i]==' '){i++; continue;}
    if(b[i]==','){l++;p=0; continue;}
    if(b[i]=='.'){break;}
    g[l][p] = b[i];
    printf("%d\n", b[i]);
    p++;

   }*/
    int k;
    int sum = 0;
        printf("\n_________________________________\n");
        for (i=0;i < m-1;i++) /*multiply matrixs*/
        {
            for (j=0;j < l;j++)
            {
                for (k=0;k < n - 1;k++)
                {
                    sum+=a[i][k]*g[k][j];
                }
                printf("%d\t",sum);
                sum = 0;
            }
            printf("\n");
        }

    return 0;
}

