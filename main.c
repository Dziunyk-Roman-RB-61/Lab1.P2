//------ Підключення необхідних бібліотек-----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//------ Головна функція програми--------------

int main()

 {

// ------ Оголошення змінних ------------------

    unsigned int variant;
    unsigned int N;
    double X1, X2, delta;

// ------ Введення номера варіанту ------------

    printf("Enter variant (1 or 2): ");
    scanf("%u", &variant);

// ------ Перевірка правильності номера варіанту--------------

    while (variant != 1 && variant != 2)
    {
        printf("Variant not valid. Enter variant (1 or 2): ");
        scanf("%u", &variant);
    }

// ------ Введення початкових даних ----------------------------

    if (variant == 1)
    {
        printf("Enter X1: ");
        scanf("%lf", &X1);

        printf("Enter X2: ");
        scanf("%lf", &X2);

        printf("Enter N: ");
        scanf("%u", &N);

// ------ Розрахунок кроку зміни аргументу ---------------------

        delta = (X2 - X1) / (N - 1);
    }
    else
    {
        printf("Enter X1: ");
        scanf("%lf", &X1);

        printf("Enter X2: ");
        scanf("%lf", &X2);

        printf("Enter delta: ");
        scanf("%lf", &delta);

// ------ Розрахунок кількості точок ---------------------------

        N = (unsigned int)((X2 - X1) / delta) + 1;
    }

// ------ Виведення введених початкових даних -------------------

    printf("\nInitial data:\n");
    printf("Variant = %u\n", variant);
    printf("X1 = %.2lf\n", X1);
    printf("X2 = %.2lf\n", X2);
    printf("delta = %.2lf\n", delta);
    printf("N = %u\n", N);

    printf("\nProgram finished\n");

// ------ Виведення заголовка таблиці ---------------------------

    printf("\n");
    printf("+-------+--------------+----------------------+\n");
    printf("|   N    |      X       |         f(X)         |\n");
    printf("+-------+--------------+----------------------+\n");

// ------ Побудова таблиці значень функції ----------------------

   for (n = 0; n < N; n++)
    {
        // ------ Розрахунок значення аргументу ------------------

        x = X1 + n * delta;

        // ------ Розрахунок значення функції -------------------

        y = x * x * x / 30.0 - 4.0 * x * x + 50.0;

        // ------ Виведення рядка таблиці -----------------------
        printf("| %5u | %12.4lf | %20.4lf |\n", n + 1, x, y);
    }

// ------ Виведення нижньої межі таблиці ------------------------

    printf("+-------+--------------+----------------------+\n");

    printf("\nProgram finished\n");

    return 0;
}
