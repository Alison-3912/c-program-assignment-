/*
Name:kaburu-Alison-bundi
Reg-No:26552
Description:program to compute loan eligibility to customers
*/#include<stdio.h>
int main() {
    int age, income;
    printf("enter users age: \n");
    scanf("%d", &age);
    printf("enter users annual income: \n");
    scanf("%d", &income);
    if(age>=21 && income>=21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately,we are unable to offer you a loan at this time.\n");
    }
    return 0;
}