#include <stdio.h>
void moveAllzero (int a[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    moveAllzero(a,n);
    return 0;
}
void moveAllzero (int a[],int n){
    int l=0,r=n-1;
    while (l<=r){
   while (a[l] !=0){
    l++;
   }
   while (a[r]==0){
    r--;
   }
   if (l<r){
    int k=a[l];
    a[l]=a[r];
    a[r]=k;
    l++;
    r--;
   }
}
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
