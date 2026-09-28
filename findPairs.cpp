#include <stdio.h>
void find(int nums[],int n,int target);
int main(){
    int nums[6]={8,7,2,5,3,1};
    int target=10;
    find(nums,6,target);
    return 0;
}
void find(int nums[], int n, int target) {
int i,j,k;
j=0;k=0;
for (i=0; n-j-k!=1; i++){
    if (nums[i] < target/2){
        nums[n-j] = nums[i]; 
        j++;
}
else k++;}
if (k==0) printf("Pair not found");
else if (k==n) printf("Pair not found");
else {
    int c=0;
    for (int i=0; i<=k;i++){
        for (int j=n;j>k;j--){
            if (nums[i]+nums[j]==target){
                if (c>0) printf("or\n");
                printf("Pair found (%d, %d)\n", nums[i], nums[j]);
                c++;
                break;
            }
        
    }
}
}
}