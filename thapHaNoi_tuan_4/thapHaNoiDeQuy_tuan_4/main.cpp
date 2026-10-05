#include <stdio.h>
#include <math.h>
void thapHaNoi(int n,char A,char B,char C);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",(int)pow(2,n)-1);
    thapHaNoi(n,'A','B','C');
    return 0;
}
void thapHaNoi(int n,char A,char B,char C){
    if (n==1) printf("%c ->%c\n", A, B);
    else{
        thapHaNoi(n-1, A, C, B);
        printf("%c ->%c\n", A, B);
        thapHaNoi(n-1, C, B, A);
    }
}