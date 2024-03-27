#include <stdio.h>
#define MAX_SIZE 100//Define a constant MAX_SIZE with a value of 100
float sum1(float list[], int);//Declare the function named sum1 which takes a pointer to float and an integer as arguments
float sum2(float *list, int);//Declare the function named sum2 which takes a pointer to float and an integer as arguments
float sum3(int n, float *list);//Declare the function named sum3 which takes an integer and a pointer to float as arguments
float input[MAX_SIZE], answer;//Declare the global array of float sized 100 and global variable named answer 
int i;//Declare the global variable named i
void main(void)
{
printf("[----- [TaeYoungKim] [2021041005] -----]\n");
for(i=0; i < MAX_SIZE; i++)
input[i] = i;//Assigning i to input[i] so result should be like {0,1,2,~98,99}
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);//Printing address of input[0] as same as input
answer = sum1(input, MAX_SIZE);//Calling the sum1 function with the address of input[0] and the constant MAX_SIZE as arguments, and assigning the result to the variable answer.
printf("The sum is: %f\n\n", answer);//Printing answer as same as sigma from 0 to 99 #4950
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);//Printing address of input[0] as same as input.
answer = sum2(input, MAX_SIZE);//Calling the sum2 function with the address of input[0] and the constant MAX_SIZE as arguments, and assigning the result to the variable answer.
printf("The sum is: %f\n\n", answer);//Printing answer as same as sigma from 0 to 99 #4950
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);//Printing address of input[0] as same as input.
answer = sum3(MAX_SIZE, input);//Calling the sum3 function with the constant MAX_SIZE and the address of input[0]
printf("The sum is: %f\n\n", answer);//Printing answer as same as sigma from 0 to 99 #4950
}
float sum1(float list[], int n) {//list is not a name of array. If list is name of array,&list is same as list. list is variable of pointer so list has its own memory area. 
printf("list\t= %p\n", list);//Printing value of list as same as address of input[0]
printf("&list\t= %p\n\n", &list);//Printing address of list that is not same as value of list
int i;//Declaring variable named i
float tempsum = 0;//Assigning 0 to tempsum 
for(i = 0;i < n;i++)// By the call of value, value of n is 100
tempsum += list[i];//Sigma from 0 to 99
return tempsum;//sum1s return value is sigma from 0 to 99 #4950
}
float sum2(float *list, int n) {//Inputing address of input[0] and MAX_SIZE to sum2
printf("list\t= %p\n", list);//Printing value of list as same as address of input[0]
printf("&list\t= %p\n\n", &list);//Printing address of list 
int i;//Declaring variable named i
float tempsum = 0;//Assigning 0 to tempsum
for(i = 0;i < n;i++)
tempsum += *(list +i);//(list+i)==&list[i] so *(list+i)==*(&list[i])==list[i]. Then it's same as sum1
return tempsum;//Same as sum1
}
/* stack variable reuse test */
float sum3(int n, float *list) {//Inputing constant MAX_SIZE and address of input[0] to sum3 
printf("list\t= %p\n", list);//Printing address of input[0] as same as list
printf("&list\t= %p\n\n", &list);//sum3 &n == 0061FF00 , &list == 0061FF04  -- sum2,sum1 &n == 0061FF04  &list == 0061FF00 Reusing the memory area 
int i;//Declaring variable named i
float tempsum = 0;//Assigning 0 to tempsum
for(i = 0;i < n;i++)
tempsum += *(list +i);//Same as sum2
return tempsum;//Same as sum2
}