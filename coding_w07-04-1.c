#include <stdio.h>

int main(void) {
    int level;

    printf("Enter membership level (1-4): ");
    if (scanf("%d", &level) != 1) {                 // กันกรอกไม่ใช่ตัวเลข
        printf("Invalid membership level\n");
        return 0;
    }

    // ตรวจช่วงก่อน
    if (level < 1 || level > 4) {
        printf("Invalid membership level\n");
    } else if (level == 1) {
        printf("Silver Member: 5%% discount\n");
    } else if (level == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (level == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else { // level == 4
        printf("Diamond Member: All privileges + VIP events\n");
    }

    return 0;
}

/*ถ้าโจทย์เป็น ช่วงค่าหรือเงื่อนไขซับซ้อน → ใช้ if–else if ดีกว่า*/