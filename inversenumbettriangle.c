#include<stdio.h>
int main(){
int n;
printf("enter a number of rows: ");
scanf("%d",&n);
//for any a pattern printing problem
//in each line what is happening

    for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){//i+j=n+1
    
    printf("%d",j);
    
    }
printf("\n");
}
    return 0;
}