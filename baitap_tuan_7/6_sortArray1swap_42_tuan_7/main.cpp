#include <stdio.h>
void sortArray1swap(int a[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sortArray1swap(a,n);
    return 0;
}
void sortArray1swap(int a[],int n){
    int p=0,q=0,c=0;
for (int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
       if(c>0){
        q=i+1;
       }
       else {p=i;
    c++;}
    }
}
int k=a[p];
a[p]=a[q];
a[q]=k;
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}