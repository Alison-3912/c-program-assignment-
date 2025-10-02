/*
Name: kaburu Alison bundi
Registration no: CT101/G/26552/25
Description:mobile data bundle purchase
*/
#include <stdio.h>

int main() {
int choice;

// Display menu
printf("Select an Internet Data Bundle:\n");
printf("1 - 100MB @ 50 shs\n");
printf("2 - 500MB @ 200 shs\n");
printf("3 - 1GB   @ 350 shs\n");
printf("4 - 2GB   @ 600 shs\n");

// Ask user for input
printf("Enter your choice (1-4): ");
scanf("%d", &choice);
// Handle choice using switch
switch (choice) {
printf("You selected: 100MB @ 50 shs\n");
break;
case 2:
printf("You selected: 500MB @ 200 shs\n");
break;
case 3:  printf("You selected: 1GB @ 350 shs\n");
break;
case 4:
printf("You selected: 2GB @ 600 shs\n");
default:
printf("Invalid choice\n");
 }

return 0;
}