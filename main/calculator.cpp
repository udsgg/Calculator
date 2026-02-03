#include <stdio.h>

int main() {
    int num;
    int result;
    char op;
    char exit = 1;

    printf("Calculator : ");
    scanf("%d", &result);

    while(1) {
        while(1) {
            int c = getchar();

            if(c == '\n') {
                break;
            }

            op = c;

            scanf("%d", &num);

            if (op == '+') result += num;
            else if (op == '-') result -= num;
            else if (op == '*') result *= num;
            else if (op == '/') result /= num;
            else if (op == '%') result %= num;

            printf("Exit 0, don't Exit 1 :");
            scanf("%c", &exit);

        }
        
        printf("\n");
        printf("result = %d", result);

        if(exit == 0) {
                break;
            }
    }

    
}