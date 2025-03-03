#include <stdio.h>
int main()
{
    int n, issymmetric=1; scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            if (arr[i][j]!=arr[j][i])
            {
                issymmetric=0;
                break;
            }
            if (!issymmetric) break;
        }
        
    }    
    if (issymmetric) {
        printf("this matrix is symmetric");
    } else {
        printf("This is matrix is not symmetric");
    }

}