#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count=0;
float stek[100];
void push(float a) /*puts nuber into stack*/
{
    stek[count]=a;
    count++;
}
float pop() /*delete number int stack*/
{
    float c=stek[--count];
    stek[count]='\0';
    return c;

}
int main(int argc,char* argv[])
{
    float pop2;
    int i,drob=0;
    printf("polish entry \nmultiplication sing = '*'\n");
    if (argc<=1)
        printf("u haven't entered anything or entered invalid type of integer");
    else
    {
         for (i=0;i<argc;i++)
            if (strcmp(argv[i], "+")==0) /*sum*/
            {
                pop2=pop();
                push(pop()+pop2);
            }
            else
                if (strcmp(argv[i], "-")==0) /*difference*/
                {
                    pop2=pop();
                    push(pop()-pop2);
                }
                else
                    if (strcmp(argv[i],"'*'")==0) /*multiplication*/
                    {
                        pop2=pop();
                        push(pop()*pop2);
                    }
                    else
                        if (strcmp(argv[i], "/")==0) /*division*/
                        {
                            pop2=pop();
                            if (pop2!=0.0)
                                push(pop() / pop2);
                            else
                            drob=-1;
                        }
                        else
                            push(atof(argv[i])); /*number*/
    if (count==0)
        printf("u haven't entered anything or entered invalid type of integer");
    else
        if (drob==-1)
         printf("u can not divide it by zero");
        else
            printf("%.2f",pop());/*types number*/
    }
    return 0;

}
