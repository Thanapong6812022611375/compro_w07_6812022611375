#include <stdio.h>

int main(void) {
    int level;

    printf("Enter membership level (1-4): ");
    if (scanf("%d", &level) != 1) {                 // กันกรอกไม่ใช่ตัวเลข
        printf("Invalid membership level\n");
        return 0;
    }

    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: All privileges + VIP events\n");
            break;
        default:
            // ครอบคลุมทุกค่าที่ไม่ใช่ 1..4
            printf("Invalid membership level\n");
            break;
    }

    return 0;
}

/*โครงสร้าง if–else if มีความยืดหยุ่น ใช้ได้ทั้งการตรวจค่าเท่ากันและช่วงของค่า เหมาะเมื่อเงื่อนไขซับซ้อนหรือไม่ใช่ค่าคงที่
 ส่วน switch–case เหมาะกับการเลือกจากค่าคงที่จำนวนน้อย อ่านง่าย ชัดเจน และดูแลรักษาสะดวก แต่ใช้กับช่วงค่าไม่ได้ 
 สำหรับโจทย์นี้ที่มีระดับสมาชิก 1–4 แบบค่าคงที่ การใช้ switch–case จึงเหมาะสมกว่า แต่ if–else if ก็ยังใช้ได้เช่นกัน ขึ้นกับรูปแบบที่ผู้เขียนต้องการ.*/

 /*ถ้าโจทย์เป็น ค่าแน่นอนจำกัด (เช่น เลือกเมนู 1–4) → ใช้ switch–case ดีกว่า เพราะอ่านง่ายและ maintain ง่าย*/