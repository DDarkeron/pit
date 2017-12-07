#include <stdio.h>
#include <stdlib.h>
int main(){



int m,n,i=0,j=0,min=101,l=0,k=0,mm,nn;
int a[i][j];
int b[i][j];
m=(3+rand()%7);
n=(4+rand()%6);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=100-rand()%200;
            b[i][j]=a[i][j];
            if(a[i][j]<min){
                mm=i;
                nn=j;
                min=a[i][j];
            }
        }
    }
    i=0;
    j=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    i=0;
    j=0;
    for(j=j;j<=l;j++){
        a[i][j]=b[k][l-j];
        a[k][l-j]=b[i][j];
    }
    i=0;
    j=0;
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("%d %d %d",nn,mm,min);



    return 0;
}
