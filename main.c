//------ Підключення необхідних бібліотек-----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//------ Головна функція програми-------------

int main()

 {

//--------- Jголошення змінних, які будуть використовуватися в програмі

    unsigned int variant; // 1 або 2 — допустимі значення змінної

    int N;

    int n;

    double start, delta, x;

//------ ----Виконуємо введення змінної variant
//---------- При введенні недопустимих значень відбувається повторне введення
//---------- Pа допомогою циклу while()

    printf("Enter variant (1 or 2): ");
    scanf("%u", &variant);

    if (variant == 1) {
 //--------- Дія для першого варіанта
        printf("Perform Action for var 1\n");

    }
    else if (variant == 2) {
//---------- Дія для другого варіанта
        printf("Perform Action for var 2\n");
    }
    else {
 //--------- Повідомлення про недопустимий варіант
        printf("Variant not valid\n");
    }

    printf("Program finished\n");

    return 0;
}

