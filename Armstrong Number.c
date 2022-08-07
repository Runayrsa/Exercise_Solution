#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int is_armstrong_number(int candidate);
int kill(int num, int e); //for exponentiation
int array_lenght (int num); 

int main()
{
    int a;
    printf("Insert a number: \n");
    scanf("%d", &a);
  int b = is_armstrong_number(a); 
  if (b == 1){
      printf("%d is an Armstrong Number", a);
  } else {
      printf("%d is not an Armstrong Number", a); 
  }
    return 0;
}

int is_armstrong_number(int candidate){
    int flag = 0;  //0 false, 1 true
    char string[MAX];
    sprintf(string, "%d", candidate);
    int result = 0, i, lenght;
    lenght = array_lenght(candidate);
    for (i = 0; i < lenght; i++){
        int temp = string[i] - '0';
        result = result + power(temp, lenght);
    }
    if (result == candidate){
        flag = 1;
    }
    return flag;
}
int power (int numb, int e){ // or use math library 
    int result = 1, i;
    for (i = 1; i <= e; i++){
        result = result * numb;
    }
    return result;
}

int array_lenght (int num) {
    int count = 0; 
    while (num != 0){
        num = num/10;
       count ++; 
    }
    return count; 
}

