#include<stdio.h>
#include<math.h>

int main()
{
    float money;
    scanf("%f", &money);

    int convert = round(money * 100);

    int notesArray1[] = {10000, 5000, 2000, 1000, 500, 200, 100};
    float notesArray2[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00};

    int coinsArray1[] = {100, 50, 25, 10, 5, 1 };
    float coinsArray2[] = { 1, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    int i;
    for(i = 0; i < 6; i++)
    {
        printf("%d nota(s) de R$ %.2f\n", convert / notesArray1[i], notesArray2[i]);
        convert = convert % notesArray1[i];
    }

    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", convert / coinsArray1[i], coinsArray2[i]);
        convert %= coinsArray1[i];
    }
    return 0;
}
