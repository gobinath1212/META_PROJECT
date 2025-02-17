#include <stdio.h>
int main(){
int key,mid,low,high;
int n,i;int arr[n];
printf("enter the num of elements:");
scanf("%d",&n);
printf("enter the element:");
for(i=0;i<=n;i++){
    scanf("%d",&arr[i]);}

    printf("enter value to find:");
    scanf("%d",&key);
    low=0;
    high=n-1;

while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]<key){
        low+1;}
    else if(arr[mid]==key){
            printf("%d found at location %d.n",key,mid+1);
            break;
}
else{
    high=mid-1;
}
}


if(low>high){
    printf("not found!%d present the in list n",key);
}
return 0;
}
