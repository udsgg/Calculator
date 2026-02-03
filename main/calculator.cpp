#include <stdio.h>

int main() {
    double result, num;
    char op;

    printf("Enter calculation (e.g. 121+232-5): ");

    //รับเลขตัวแรกและกรองตัวเลข
    if (scanf("%lf", &result) != 1) {
        printf("Error: Please start with a number.\n");
        return 1;
    }

    //วนลูปรับเครื่องหมายและตัวเลข
    while (1) { 
        scanf("%c", &op); // รับตัวอักษร 1 ตัว (เครื่องหมาย)
        if (op == '\n') { // ถ้ากด Enter ให้จบการทำงาน
            break; 
        }
        scanf("%lf", &num); // รับตัวเลขตัวถัดไป
        switch (op) {   // คำนวณสะสมค่าไปเรื่อยๆ ตามเครื่องหมายที่รับมา
            case '+': 
                result += num; 
                break;
            case '-': 
                result -= num; 
                break;
            case '*': 
                result *= num; 
                break;
            case '/': 
                if (num == 0) {
                    printf("\nError: Divide by Zero\n");
                    return 1;
                }
                result /= num; 
                break;
            case '%':
                 if ((int)num == 0) {
                    printf("\nError: Divide by Zero\n");
                    return 1;
                }
                result = (int)result % (int)num;
                break;
            default:
                printf("\nError: Unknown operator '%c'\n", op);  // กรองเครื่องหมายแปลกๆ
        }
    }

    printf("Result = %.2f\n", result);

    return 0;
}