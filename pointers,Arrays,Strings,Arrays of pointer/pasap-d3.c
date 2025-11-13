#include <stdio.h>
int main()
{
    int arr[3][3], arr1[9], larger, smaller;
    int k = 0, countl = 0, counts = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &arr[i][j]);
            arr1[k] = arr[i][j];
            k++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            if (arr1[i] >= arr1[j])
            {
                countl++;
            }
        }
        if (countl == 9)
        {
            printf("larger is %d", arr1[i]);
        }
        countl = 0;
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            if (arr1[i] <= arr1[j])
            {
                counts++;
            }
        }
        if (counts == 9)
        {
            printf("smaller is %d", arr1[i]);
        }
        counts = 0;
    }

    return 0;
}