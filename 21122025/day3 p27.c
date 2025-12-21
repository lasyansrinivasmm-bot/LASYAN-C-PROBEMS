#include <stdio.h>
int main() {
    //Your Code goes here!
    int age,salary;
    scanf("%d %d",&age,&salary);
    if (age>=25 && salary>=30000){
        printf("eligible");
    }
    else {
        printf("not a eligible");
    }
    return 0;
}