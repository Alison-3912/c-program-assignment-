
//Name:kaburAlison Bundi 
//Reg no:CT101\G\26552\25
//Description :do while program
#include <stdio.h>
#include <string.h>
int main() {
char password[20];
do {
printf("Enter password: ");
scanf("%s", password);
} while (strcmp(password, "1234") != 0);

printf("Access Granted\n");
return 0;
}