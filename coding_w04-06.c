#include <stdio.h>


const int GLOBAL_RATE = 10;

void calculate() {
   
    const int LOCAL_BONUS = 50;


    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);

    return 0;
}
    //GLOBAL_RATE	คือ ประกาศนอกฟังก์ชัน ใช้ได้ทุกที่ในโปรแกรม
    //LOCAL_BONUS	คือ ประกาศในฟังก์ชัน calculate() ใช้ได้แค่ในฟังก์ชันนี้เท่านั้น
    //Error! เพราะ const คือค่าคงที่ เปลี่ยนค่าไม่ได้
    //LOCAL_BONUS	คือ ประกาศในฟังก์ชัน calculate() ใช้ได้แค่ในฟังก์ชันนี้เท่านั้น
    //ถ้าประกาศนอกฟังก์ชัน → ทุกฟังก์ชันเรียกใช้ได้ (global const)
    //ถ้าประกาศในฟังก์ชัน → ใช้ได้แค่ในฟังก์ชันนั้น (local const)