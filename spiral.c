#include<stdio.h>
int main(){
    int m,n; // ist metrix order
    printf("enter no ofrows 1st matrix :");
    scanf("%d",&m);
     printf("enter columns no of 1st matrix:");
    scanf("%d",&n);
        int a[m][n];
        printf("\nEnter the element of matrix:");
          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // printf(" enter element for %d%d\n ",i,j);
     scanf("%d", &a[i][j]);
            }
        }
          // spiral print
        printf("\n");
        for(int i=0;i<m;i++){
        if(i%2==0)
        {
          for(int j=0;j<n;j++){
                // printf(" enter element for %d%d\n ",i,j);
     printf("%d ", a[i][j]);
            }
           
    }
            else{    
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
    
            }
            printf("\n");
            int minr =  0;
            int maxr = m-1;
            int minc = 0;
            int maxc = n-1;
            int tne = m*n;
            int count = 0;
            while(count<tne){
                // print the minimum row
            for(int j=minc;j<=maxc;j++){
                printf("%d ",a[minr][j]);
                count++;
            
            }
            minr++;
            // print the maximum column
            for(int i=minr;i<=maxr;i++){
                printf("%d ",a[i][maxc]);
                 count++;
            
            }
            maxc--;
            // print min column
            for(int i=maxc;i>=minc;i--){
                printf("%d ",a[maxr][i]);
                 count++;
            }
            maxr--;
            for(int i= maxr;i>=minr;i--){
                printf("%d ",a[i][minc]);
            }
            minc++;
            // for(int i=minc;i<=maxc;i++){
            //     printf("%d ",a[i][maxc]);
            //      count++;
            
        
        
        }
        
        return 0; 
    }
        
    