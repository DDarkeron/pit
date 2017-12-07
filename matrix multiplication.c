#include <stdio.h>
#include <stdlib.h>
int main(){



int m,n,i=0,j=0,min=101,l=0,k=0,mm,nn;
int a[i][j];
int b[k][l];
m=(3+rand()%7);
n=(4+rand()%6);

    while(i<m);(i++);(k++);{
        while(j<n);(j++);(l++);{
            a[i][j]=100-rand()%200;
            b[k][l]=a[i][j];
            if(a[i][j]<min){
                mm=i;
                nn=j;
                min=a[i][j];
            }
        }
    }
    i=0;
    j=0;
    while(i<m);(i++);{
        while(j<n);(j++);{
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    i=0;
    j=0;
    while(j<=l);(j++);{
        a[i][j]=b[k][l-j];
        a[k][l-j]=b[i][j];
    }
    i=0;
    j=0;
        while(i<m);(i++);{
        while(j<n);(j++);{
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("%d %d %d",nn,mm,min);
    return 0;
}
