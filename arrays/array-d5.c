#include<stdio.h>
int main(){
    int arr1[2][2],arr2[2][2],arr3[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr1[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr2[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
printf("arr1 is");
for(int i=0;i<2;i++){
    printf("\n");
    for(int j=0;j<2;j++){
        printf("%d\t",arr1[i][j]);
    }
}
printf("\narr2 is");
for(int i=0;i<2;i++){
    printf("\n");
    for(int j=0;j<2;j++){
        printf("%d\t",arr2[i][j]);
    }
}
printf("\nsum of two arr is");
for(int i=0;i<2;i++){
    printf("\n");
    for(int j=0;j<2;j++){
        printf("%d\t",arr3[i][j]);
    }
}

    return 0;
}