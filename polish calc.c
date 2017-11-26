#include <stdio.h>
#include <stdlib.h>
int i=0;
float array[100];
void push(float a) //puts number into stack
{
    array[i]=a;
    i++;
}
float pop() //extracts number from stack
{
    float c=array[--i];
    array[i]='\0';
    return c;

}
int main()
{
    float a,pop2,pop1;
    int k=1,drob=0;
    char simvol;
    while ((a = getchar()) != '\n') //entering number
        {
         if (a=='-')
            k=-1;
         if (a>= '0' && a <= '9' )
         {
            pop2=k*(a-'0');
            push(pop2); //puts number into stack
            k=1;
            if (drob==1)
            {
            pop1=pop()/10;
            pop2=pop();
            if (pop2<0)
                pop2=pop1-pop2;

            else
                pop2=pop2+pop1;
            drob=0;
            push(pop2);
            }
         }
         if (a==','||a=='.')
            drob=1;
         if (a==' ')
         {
            pop1=pop();
            pop2=pop()*10;
            if (pop2<0)
                pop2=pop2-pop1;
            else
                pop2=pop2+pop1;
            push(pop2);
         }
         if ((a=='+'||a=='-'||a=='*'||a=='/')&& count>=2)
            {
                simvol=a;
                switch(simvol)
                    {
                        case '+': pop2=pop();
                               // printf("\n%f\n",pop2);
                                  push(pop()+pop2);
                                  break;
                        case '-': pop2=pop();
                                  push(pop()-pop2);
                                  break;
                        case '*': pop2=pop();
                                  push(pop()*pop2);
                                  break;
                        case '/': pop2=pop();
                                  if (pop2!=0.0)
                                  push(pop() / pop2);
                                  else printf("na nol' delit' nel'zya");
                                  break;
                    }

            }
        }
    printf("%.2f",pop());//shows last number
    return 0;

}
