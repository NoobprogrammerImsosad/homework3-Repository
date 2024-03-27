#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [TaeYoungKim] [2021041005] -----]\n");
int list[5];//Declaring int array named list
int *plist[5] = {NULL,};//Assigning Null to array of pointer named plist
plist[0] = (int *)malloc(sizeof(int));//Dynamic allocation to plist[0]
list[0] = 1;//Assigning 1 to list[0]
list[1] = 100;//Assigning 100 to list[1]
*plist[0] = 200;//Assigning 200 to heap memory allocated through dynamic allocation
printf("list[0] = %d\n", list[0]);//Printing list[0] #1
printf("&list[0] = %p\n", &list[0]);//Printing address of list[0]
printf("list = %p\n", list);//Printing address of list as same as &list[0]
printf("&list = %p\n", &list);//Printing address of list as same as &list[0]
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]);//Printing value of list[1] #100
printf("&list[1] = %p\n", &list[1]);//Printing address of list[1]
printf("*(list+1) = %d\n", *(list + 1));//List is the array of int so list+1 means &list[0]+sizeof(int) as same as &list[1]. Then *(list + 1)==*(&list[1]).
printf("list+1 = %p\n", list+1);//List is the array of int so list+1 means &list[0]+sizeof(int) as same as &list[1]. 
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]);//Printing value of heap memory allocated through dynamic allocation which is pointed by plist[0]
printf("&plist[0] = %p\n", &plist[0]);//Printing address of plist[0] as same as plist. That is not address of heap memory allocated through dynamic allocation.
printf("&plist = %p\n", &plist);//Printing address of plist[0] as same as plist. &plist is same as plist
printf("plist = %p\n", plist);//Printing address of plist[0] as same as plist.
printf("plist[0] = %p\n", plist[0]);//Printing address of heap memory allocated through dynamic allocation which is pointed by value of plist[0]
printf("plist[1] = %p\n", plist[1]);//Plist has been assigned all NULL except plist[0].
printf("plist[2] = %p\n", plist[2]);//Plist has been assigned all NULL except plist[0].
printf("plist[3] = %p\n", plist[3]);//Plist has been assigned all NULL except plist[0].
printf("plist[4] = %p\n", plist[4]);//Plist has been assigned all NULL except plist[0].
free(plist[0]);//Performing free for dynamic allocation of plist[0]
}