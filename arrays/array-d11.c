#include <stdio.h>
int main()
{

    int arr1[10], arr2[10], no = 0;
    char dir;
    char right = 'r';
    char left = 'l';
    printf("enter 10 value or array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("how many no you want to shift right or left");
    scanf("%d", &no);
    printf("give me from where to shift for right=r or left=l");
    scanf(" %c", &dir);
    
 

            if (dir == 'l')
            {
                for (int i = 0; i < 10; i++)
                {
                    if(i<no){ 
                    arr2[i] = 0;
                }
            else{
                arr2[i]=arr1[i-no];
            }
            }
            }
            else if (dir == 'r')
            {
                for (int i = 0; i < 10; i++)
                {
if(i>9-no){
arr2[i]=0;
}
else{
    arr2[i]=arr1[i+no];
}
                    
                }
            }
        

        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", arr2[i]);
        }
        return 0;
    }
