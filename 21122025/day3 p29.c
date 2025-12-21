#include <stdio.h>
int main() {
    //Your Code goes here!
    int x;
    scanf("%d",&x);
    if (x%4==0 && !(x%8==0))
    printf("yes");
    else {
        printf ("no");
    }
    return 0;
}