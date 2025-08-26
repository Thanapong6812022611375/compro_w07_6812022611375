#include <stdio.h>

int main(void) {
    int level;
    printf("Enter level (1-4): ");
    if (scanf("%d", &level) != 1) {        // กันอินพุตไม่ใช่ตัวเลข
        printf("Invalid input\n");
        return 0;
    }

    if (level <= 0) {                       // ต่ำกว่าหรือเท่ากับ 0
        printf("The level below 1 is not allowed\n");
        return 0;
    }
    if (level > 4) {                        // มากกว่า 4
        printf("The level above 4 is not allowed\n");
        return 0;
    }

    // ช่วงถูกต้อง 1..4
    switch (level) {
        case 1: printf("Beginner\n"); 
        break;
        case 2: printf("Intermediate\n"); 
        break;
        case 3: printf("Advanced\n"); 
        break;
        case 4: printf("Expert\n"); 
        break;
        default: printf("Invalid level\n");
    }
    return 0;
}
