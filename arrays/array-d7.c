#include<stdio.h>
int main(){
    int arr1[4][4],arr2[4][4];
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&arr1[i][j]);
    }
}

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        arr2[i][j]=arr1[j][i];
        // arr3[i][j]=arr1[i][j]*arr2[i][j]+arr2[i][j]*arr1[i][j];
    
}}
printf("arr1 is");
for(int i=0;i<4;i++){
    printf("\n");
    for(int j=0;j<4;j++){
        printf("%d\t",arr1[i][j]);
    }
}
printf("\narr2 is");

for(int i=0;i<4;i++){
    printf("\n");
    for(int j=0;j<4;j++){
        printf("%d\t",arr2[i][j]);
    }
}

    return 0;
}