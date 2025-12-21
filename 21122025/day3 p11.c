#include <stdio.h>
int main() {
//Your Code goes here!
int number;
printf ( "enter your number");
scanf("%d",&number);
if(number >=-9 && number <=9){
printf("single digit number");
}
else {
    printf("not a sinngle digit");
}
    return 0;
}