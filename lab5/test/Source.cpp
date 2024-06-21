#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int size = 5;

    // Выделение памяти для массива из 5 целых чисел
    ptr = (int*)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Ошибка выделения памяти\n");
        exit(1); // Выход из программы с ошибкой
    }

    // Использование выделенной памяти
    for (int i = 0; i < size; i++) {
        ptr[i] = i + 1; // Заполнение массива значениями от 1 до 5
    }

    // Вывод значений массива
    printf("Значения массива:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Освобождение выделенной памяти
    free(ptr);

    return 0;
}
