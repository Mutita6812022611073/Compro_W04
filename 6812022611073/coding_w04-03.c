#include <stdio.h>

int main() {
    char nameInitial = 'M';           // ตัวอักษรแรกของชื่อ
    int age = 22;                     // อายุ
    float weight = 39.2;              // น้ำหนัก
    char gender[] = "woman";         // เพศ

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}
