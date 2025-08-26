#include <stdio.h>

int main(void) {
    double score, bonus = 0.0, final;   // ประกาศตัวแปร: score = คะแนนสอบ, bonus = คะแนนพิเศษ, final = คะแนนรวม

    // ขอให้ผู้ใช้ป้อนคะแนนสอบ midterm
    printf("Enter midterm score: ");
    if (scanf("%lf", &score) != 1) {   // ตรวจสอบว่าผู้ใช้กรอกเป็นตัวเลขหรือไม่
        printf("Invalid input\n");     // ถ้าไม่ใช่ตัวเลข แสดงข้อความผิดพลาด
        printf("End of evaluation\n"); 
        return 0;                      
    }

    // ตรวจสอบว่าคะแนนมากกว่าหรือเท่ากับ 50 หรือไม่
    if (score >= 50.0) {
        bonus = 0.05 * score;          // ถ้าใช่ -> เพิ่ม 5% ของคะแนนนั้น
    } else {
        bonus = 0.0;                   // นอกนั้น -> ไม่ได้เพิ่ม
    }

    // คำนวณคะแนนรวมหลังบวกโบนัส
    final = score + bonus;

    // แสดงผลลัพธ์
    printf("Final score = %.2f\n", final);  // ผลคะแนนรวม 2 ตำแหน่งทศนิยม
    printf("End of evaluation\n");          // พิมพ์ปิดท้าย
    return 0;                              
}
