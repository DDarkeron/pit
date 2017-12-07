#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>



int main(){

srand((unsigned) time (NULL) );

int m,n,i=0,j,min=101,nn,mm,bif,baf,bef,i2,k2,k;

/*
m=(3+rand()%7);
n=(4+rand()%6);*/
m=3;
n=4;
int a[m][n];
int d[n][100];
int f[100][100];
char b[1000];
i=0;

printf("random matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=-100+rand()%200;
             printf("%d\t",a[i][j]);



        }
        printf("\n");
    }

printf("______________________________________\n");

baf=n/2;
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
            printf("string of min element=%d\ncolumn of min element=%d\nmin element=%d\n",mm,nn,min);
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
        printf("\n");
    }

   for(i=0; i<1000; i++){
            scanf("%c", &b[i]);

        if (isdigit(b[i])){
                d[i2][k2] = b[i] - '0';
        }
            else
            switch(b[i]){
                case ' ':
                    k2++;
                    break;
                case ',':
                    i2++;
                    k2 = 0;
                    break;
                case '.':
                    i = 1001;
                    break;
                default:
                    break;
        }
    }
    printf("\n\n");

    for (i = 0; i<i2+1; i++){
        printf("\n");
        for(k = 0; k<k2+1; k++){
            printf("%d ",d[i][k]);
        }
     }
         if(n-1==i2+1){      /* Cycle for add matrix */
        for(i = 0; i < m-1; i++){
            for(j = 0; j < k2+1; j++){
                f[i][j] = 0;
                for(k = 0; k < n-1; k++){
                    f[i][j] += a[i][k] * d[k][j];
                }
            }
        }

        printf("\nMatrix 5:\n");

        for (i = 0; i<m-1; i++){
            printf("\n");
                for(k = 0; k<k2+1; k++){
                    printf("%d ", f[i][k]);
                }
        }
    }
    else
        printf("\n\nError, impossible to add these matrix\n");


    return 0;}
