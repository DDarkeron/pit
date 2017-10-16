#include <stdio.h>
#include <stdlib.h>
int i=1;
float argv[100];
void push(char a){
if(i>99)
    prov();
 else
 {
     argv[i]=a;
     i++;
 }

//return a;
}
void pop(char a){

}
void prov(){
 if (i==0)
        printf("\nstek is empty");
    else
        if (i>0&&i<99)
            printf("\nstek  is no empty");
        else
            printf("\nstek is full");
}

int main(int argc, char *argv[i]){
    if(argc==1)
    printf("Enter number\n");
    else
        Print("%c", argv[i]);



    return 0;
}
