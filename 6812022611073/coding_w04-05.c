#include <stdio.h>

void countCall() {
    static int counter = 0; 
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}


#include <stdio.h>

void countCall() {
    int counter = 0; 
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

// ตัวแปร static จะถูกเก็บค่าไว้ข้ามครั้งการเรียก
// Non-static: ตัวแปรถูกรีเซ็ตทุกครั้งที่เรียกฟังก์ชัน
//จากการทดลอง เห็นได้ชัดว่า static ช่วยให้ฟังก์ชันมี “หน่วยความจำ” ของตัวเอง