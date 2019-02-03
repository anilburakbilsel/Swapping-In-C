/*
 * This is a C program that swaps two numbers.
 * Given two integers, the following program will swap
 * the values of the variables without using pointers,
 * or a third variable.
 * Basically this is going to be achieved by bitwise operators. 
 */

#include <stdio.h>
#include <string.h>
 
// Function Prototype 
int swap(int*, int*);
 
int main(){
    int num1, num2;
    // enter 2 numbers to be swapped 
    printf("Enter two whole numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("The numbers before swapping:\n");
    printf("num1 is %d\n", num1); 
    printf("num2 is %d\n", num2);

    // call by reference to the swap function
    swap(&num1, &num2);
    printf("The numbers after swapping:\n");
    printf("swapped num1 is %d\n", num1); 
    printf("swappe num2 is %d\n", num2);
    return 0;
}
 
// method that swaps two numbers using bitwise operators 
int swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    return 0;
}