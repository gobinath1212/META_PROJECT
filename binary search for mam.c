# include <stdio.h>
int main(){
int found=0;int n;
int arr[n];
int t,m;
int l=0,r=n-1;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the element:");
scanf("%d",&arr[n]);
printf("enter the target element:");
scanf("%d",&t);
while(l<=r){
    m= l+r-l/2;
    if("t==arr[m]"){
        found++;
        break;
    }
    if(t>arr[m]){
        l=m+1;
    }
    if("t<arr[m]"){
        r=m-1;
    }}
    if(found!=0){
    printf("yours target element is:%d found index:%d ",arr[m],m);
    }


return 0;
}
