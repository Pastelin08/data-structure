#include<stdio.h>
int number, result, i;

int factorial(int num){
    int total = 1;
    for(i=1; i <= num; i++)
        total *= i;
    return(total);
}

int main(){
    printf("Por favor dame un numero:");
    scanf("%d",&number);
    result = factorial(number);
    printf("El resultado iterativo es (O(n)) is: %d \n",result);
}
