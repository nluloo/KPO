#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int size = 5;

    // ��������� ������ ��� ������� �� 5 ����� �����
    ptr = (int*)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("������ ��������� ������\n");
        exit(1); // ����� �� ��������� � �������
    }

    // ������������� ���������� ������
    for (int i = 0; i < size; i++) {
        ptr[i] = i + 1; // ���������� ������� ���������� �� 1 �� 5
    }

    // ����� �������� �������
    printf("�������� �������:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // ������������ ���������� ������
    free(ptr);

    return 0;
}
