//------ Підключення необхідних бібліотек-----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//------ Головна функція програми-------------

int main()

 {

    // оголошення змінних, які будуть використовуватися в програмі

    unsigned int variant; // 1 або 2 — допустимі значення змінної

    int N;

    int n;

    double start, delta, x;

    // виконуємо введення змінної variant
    // При введенні недопустимих значень відбувається повторне введення
    // за допомогою циклу while()

    printf("Enter variant (1 or 2): ");
    scanf("%u", &variant);

    if (variant == 1) {
        printf("Perform Action for var 1\n");
    }
    else if (variant == 2) {
        printf("Perform Action for var 2\n");
    }
    else {
        printf("Variant not valid\n");
    }

    printf("Program finished\n");

    return 0;
}

