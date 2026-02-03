#include <stdio.h>

int main() {
    int num;
    int result;
    char op;

    printf("Calculator : ");
    scanf("%d", &result);

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
    }

    printf("\n");
    printf("result = %d", result);
}

//asdkjslkhdgjhals