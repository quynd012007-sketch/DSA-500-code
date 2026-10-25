#include <stdio.h>
void findDuplicateElement(int a[], int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    findDuplicateElement(a,n);
    return 0;
}
void findDuplicateElement(int a[], int n){
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (a[i]==a[j]){
                printf("Duplicate element is: %d\n",a[i]);
            }
        }
    }
}