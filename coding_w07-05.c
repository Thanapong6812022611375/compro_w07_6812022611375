#include <stdio.h>

int main(void) {
    int age, vip;
    double amount, discount = 0.0;

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip);
    printf("Enter purchase amount: ");
    scanf("%lf", &amount);

    // ตรวจสอบเงื่อนไขส่วนลด
    if ((age > 60) || (vip >= 3)) {
        discount = 0.20;
    } else if ((age >= 30 && age <= 40) && (amount >= 2000)) {
        discount = 0.15;
    } else if ((age >= 18 && age <= 25) && (amount >= 1000)) {
        discount = 0.10;
    } else if ((vip == 5) && (amount >= 50000)) {
        discount = 0.25;
    }

    // แสดงผลลัพธ์
    printf("\n-- Customer Info --\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);

    if (discount > 0.0) {
        printf("Discount received: %.0f%%\n", discount * 100);
        printf("Final price: %.2f THB\n", amount * (1 - discount));
    } else {
        printf("No discount applied\n");
        printf("Final price: %.2f THB\n", amount);
    }

    printf("Thank you for shopping with us!\n");
    return 0;
}
