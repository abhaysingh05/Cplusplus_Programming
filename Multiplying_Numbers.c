#include <stdio.h>
#include <string.h>
int main() {
    char num1[201], num2[201];
    scanf("%s%s", num1, num2);
    int n1 = strlen(num1);
    int n2 = strlen(num2);
    int num[401];
    for (int i = 0; i < 401; i++) {
        num[i] = 0;
    }
    int mx = 0;
    int carry = 0;
    for (int i = 0; i < n1; i++) {
        int last1 = num1[n1 - i - 1] - '0';
        for (int j = 0; j < n2; j++) {
            int last2 = num2[n2 - 1 - j] - '0';
            num[i + j] += (last1 * last2);
            mx = i + j;
        }
    }
    char str[mx + 5];
    for (int i = 0; i <= mx; i++) {
        int digit = (num[i] + carry) % 10;
        str[i] = digit + '0';
        carry = (num[i] + carry) / 10;
    }
    int k = 1;
    while (carry) {
        str[mx + k] = (carry % 10) + '0';
        carry /= 10;
        k++;
    }
    str[mx + k] = '\0';
    for (int i = 0; i < strlen(str) / 2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }
    printf("%s", str);
    return 0;
}