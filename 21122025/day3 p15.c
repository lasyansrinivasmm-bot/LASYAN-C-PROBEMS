#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;

    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
        }      
        else if(marks>=75){
            printf("B");
        }
            else if(marks>=50){
                printf("C");
            }
            else {
                printf("fail");
            }
            
    
    
    return 0;
}