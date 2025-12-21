#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    scanf("%d",&marks);
    if(marks>=35 && marks<=100 ){
        printf("pass");
    }
    else if (marks>=30){
        printf("grace pass");
    }
    else {
        printf("fail");
    }
    return 0;
}