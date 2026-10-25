#include <stdio.h>
int miniQuick(int a[], int l, int pivot,int r);
void DutchFlag(int a[], int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    DutchFlag(a,n);
    return 0;
}
int miniQuick(int a[], int l, int pivot,int r){
   while (l<=r){
   while (a[l]<=pivot){
    l++;
   }
   while (a[r]>pivot){
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
return r;
}
void DutchFlag(int a[], int n){
 int right = miniQuick(a,0,1,n-1);
 miniQuick(a,0,0,right);
 for (int i=0;i<n;i++){
    printf("%d ",a[i]);
 }
}