#include <stdio.h>

int main() {
    int num;
    int result;
    char op;
    int exit = 1;

    while(exit == 1) {
        printf("Calculator : ");
        scanf("%d", &result);
        
        while(1) {
            int c = getchar();

            if(c == '\n') {
                break;
            }

            op = c;

            scanf("%d", &num);

            if (op == '+'){
                result += num;
            } 
            else if (op == '-') {
                result -= num;
            }
             
            else if (op == '*') {
                result *= num;
            } 
            else if (op == '/') {
                result /= num;
            } 
            else if (op == '%') {
                result %= num;
            }

        }
    
        printf("\n");
        printf("result = %d\n", result);

        printf("Exit 0, don't Exit 1 :");
            scanf("%d", &exit);

        if(exit == 0) {
            break;
        } else {
            exit = 1;
        }
    }

}