#include <stdio.h>
int main() {
    //Your Code goes here!
    int x;
    scanf("%d",&x);
    if (x %2==0 && x >0){
        printf("postive even");
    }
    else if (x>0 && x%3==0){
        printf("postive odd");
   }
else {
    printf ("negative");
}
    return 0;
}