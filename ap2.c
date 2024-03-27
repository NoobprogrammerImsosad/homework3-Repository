#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [TaeYoungKim] [2021041005] -----]\n");
int list[5];//Declaring array of int named list
int *plist[5];//Declaring array of int pointer named plist
list[0] = 10;//Assigning 10 to list[0]
list[1] = 11;//Assigning 11 to list[1]
plist[0] = (int*)malloc(sizeof(int));//Assigning dynamic allocation of integer type to plist[0]
printf("list[0] \t= %d\n", list[0]);//Printing value of list[0] #10
printf("list \t\t= %p\n", list);//Printing address of list[0] as same as list
printf("&list[0] \t= %p\n", &list[0]);//Printing address of list[0] as same as list
printf("list + 0 \t= %p\n", list+0);//Printing address of list[0] as same as list+0
printf("list + 1 \t= %p\n", list+1);//Printing address of list[1] as same as list+1
printf("list + 2 \t= %p\n", list+2);//Printing address of list[2] as same as list+2
printf("list + 3 \t= %p\n", list+3);//Printing address of list[3] as same as list+3
printf("list + 4 \t= %p\n", list+4);//Printing address of list[4] as same as list+4
printf("&list[4] \t= %p\n", &list[4]);//Printing address of list[4] as same as list+4
free(plist[0]);//Performing free for dynamic allocation of plist[0]
}