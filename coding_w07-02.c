#include <stdio.h>

int main(void) {
    int x, y;

    // รับค่า x และ y
    printf("ป้อนค่า x และ y คั่นด้วยช่องว่าง: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("อินพุตไม่ถูกต้อง\n");
        return 0;
    }

    // เปรียบเทียบค่า
    if (x == y) {
        printf("x เท่ากับ y\n");
    } else if (x > y) {
        printf("x มากกว่า y\n");
    } else {
        printf("x น้อยกว่า y\n");
    }

    return 0;
}