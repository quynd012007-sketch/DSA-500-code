#include <stdio.h>
void sortMax3(int a[],int l);
void rearrangeArray(int a[], int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    rearrangeArray(a,n);
    return 0;
}
void sortMax3(int a[],int l){
  int max=a[l],k=l;
  for (int i=l;i<l+3;i++){
    if (a[i]>max){
        max=a[i];
        k=i;
    }
  }
  if (k!=l+1){
    int i=a[l+1];
    a[l+1]=a[k];
    a[k]=i;
  }
}
void rearrangeArray(int a[], int n){
    for (int l=0;l+2<n;l+=2){
      sortMax3(a,l);
    }
    for (int i=0;i<n;i++) printf("%d ",a[i]);
}