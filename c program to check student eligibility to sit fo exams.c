/*
Name:Kaburu Alison Bundi
RegNo:CT101/G/26552/25
Date:2/10/2025
Description:exam eligibility 
*/

#include<stdio.h>
int main ()
{
 float attendance;
 float average_marks;

printf("Enter your attendance:");
scanf("%f", &attendance);

printf ("enter your average_marks:");
scanf("%f", &average_marks);
if(attendance>=75 &&average_marks>=40){
printf("you are eligible for exams\n");}
else{
printf("you are not eligible for exam.\n");}
 return 0;
 }
 