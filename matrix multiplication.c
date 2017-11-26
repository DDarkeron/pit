#include <stdio.h>
#include <stdlib.h>
int main(){
    


int m=3+rand()%7,n=4+rand()&6,i=0,j=0;
int a[i][j];
    
    for(i<m:i++){
        for(j<n:j++){
            a[i][j]=100-rand()%200;
            if(a[i][j]<min){
                mm=i;
                nn=j;
                min=a[i][j];
            }
        }
    }
    i=0;
    j=0;
    for(i<m,i++){
        for(j<n,j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
