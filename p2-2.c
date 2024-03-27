#include <stdio.h>
void print_one(int *ptr, int rows);//Declaring function named print_one
int main()//Declaring function named main
{
printf("[----- [TaeYoungKim] [2021041005] -----]\n");
int one[] = {0, 1, 2, 3, 4};//Assigning {0,1,2,3,4} to array of int named one
printf("one = %p\n", one);//Printing address of one[0] as same as one
printf("&one = %p\n", &one);//Printing address of one[0] as same as one
printf("&one[0] = %p\n", &one[0]);//Printing address of one[0] as same as one
printf("\n");
printf("------------------------------------\n");
printf(" print_one(&one[0], 5) \n");
printf("------------------------------------\n");
print_one(&one[0], 5);//Calling Function named print_one with address of one[0] and 5
printf("------------------------------------\n");
printf(" print_one(one, 5) \n");
printf("------------------------------------\n");
print_one(one, 5);//Calling Function named print_one with address of one[0] and 5
return 0;//Main functions return value
}
void print_one(int *ptr, int rows)//Inputing address of one[0] and 5
{/* print out a one-dimensional array using a pointer */
int i;//Declaring variable i
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));//ptr is same as address of one[0] so ptr+i == one+i = &one[i]. Then *(ptr+i)==*(one+i)==*(&one[i])==one[i]
printf("\n");
}