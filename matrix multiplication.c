#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>



int main(){

srand((unsigned) time (NULL) );

int m,n,i=0,j,min=101,nn,mm,bif,baf,bef;


m=(3+rand()%7);
n=(4+rand()%6);
int a[m][n];
char b[1000];
i=0;

printf("random matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=-100+rand()%200;
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
    int l=1;
   fgets(b,1000,stdin);
   for(i=0; i<1000;i++){

if(b[i]==' '){i++;}
if(b[i]==','){l++;i=0;}
if(b[i]=='.'){break;}
    }
if(n!=l)
    printf("\nWrong matrix\n");
else
{
    int g[n][nn];
    l=nn=0;
        for (i=0;i<1000;i++) /*types second new matrix*/
        {
            if (b[i]==',')
            {
                l*=j;
                g[n++][nn]=l;
                nn=0;
                printf("%d",l);
                printf("\n");
                j=0;
                l=0;
            }
            if (b[i]=='.')
            {
                l*=j;
                g[n][nn]=l;
                printf("%d",l);
                break;
            }
            if (b[i]=='-')
                j=-1;
            if (b[i]>='0'&&b[i]<='9')
            {
                l=10*l+(b[i]-'0');
                if (j!=-1)
                    j=1;
            }

            if (b[i]==' ')
            {
                l*=j;
                g[n][nn++]=l;
                printf("%d",l);
                printf("\t");
                j=0;
                l=0;
            }

        }
        printf("\n_________________________________\n");
        for (i=0;i<m-1;i++) /*multiply matrixs*/
        {
            for (l=0;l<=nn;l++)
            {
                int end=0;
                for (j=0;j<=n;j++)
                {
                    end+=a[i][j]*g[j][l];
                }
                printf("%d\t",end);
            }
            printf("\n");
        }
    }








    return 0;}
