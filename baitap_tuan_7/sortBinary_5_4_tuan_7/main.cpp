#include <stdio.h>
int miniQuick(int a[], int l, int pivot,int r);
void sortBinary(int a[], int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sortBinary(a,n);
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
void sortBinary(int a[], int n){
    miniQuick(a, 0, 0, n-1);
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}