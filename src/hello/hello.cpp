#include <stdio.h>

int main() {
    // V� d 1: Con tr? co b?n
    int a = 10;
    int *ptr;       // Khai b�o con tro
    ptr = &a;       // G�n d?a ch? c?a 'a' cho con tr? 'ptr'

    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", &a);
    printf("Gia tri con tro ptr tro toi: %d\n", *ptr);

    // Thay doii gi� tri cua 'a' th�ng qua con tro
    *ptr = 20;
    printf("Gia tri moi cua a sau khi thay doi qua con tro: %d\n", a);

    // Vi du 2: Con tro v� mang
    int arr[] = {1, 2, 3, 4, 5};
    int *pArr = arr;  // Con tr? tr? d?n m?ng (ph?n t? d?u ti�n)

    printf("\nDuyet mang bang con tro:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu %d: %d\n", i, *(pArr + i));  // Truy c?p t?ng ph?n t? qua con tr?
    }

    return 0;
}

