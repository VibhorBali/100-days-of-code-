#include <stdio.h>

int main()
{
int a[2][2];
int i, j;
int sum = 0;

printf("enter all the elements: \n");

for(i = 0; i< 5; i++)
{
    for (j=0; j<2; j++)
    {
        scanf("%d, &a[i][j]");
    }

}
for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

return 0;
}


