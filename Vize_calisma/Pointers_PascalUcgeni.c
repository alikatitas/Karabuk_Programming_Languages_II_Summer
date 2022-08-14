#include <stdio.h> 

void Pascal(int *sayi){
	int coef = 1, space, i, j;
	for(i=0; i<*sayi; i++)
    {
        for(space=1; space <= *sayi-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            printf("%4d", coef);
        }
        printf("\n");
    }

}

int main(void)
{
int n;
printf("Satir Sayisi Girin : ");
scanf("%d",&n);

Pascal(&n);

return 0;
	
}

