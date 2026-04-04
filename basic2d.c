#include<stdio.h>
int main(){
    // 1 2
    // 3 4
    int r;
    printf("enter number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no column:");
    scanf("%d",&c);
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter elemnt for arr%d%d\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    // int arr[2][2] = {{1,2},{3,4}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    
    return 0;
}