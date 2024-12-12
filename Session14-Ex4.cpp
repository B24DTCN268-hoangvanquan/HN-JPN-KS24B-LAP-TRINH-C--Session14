#include <stdio.h>

int main() {
    char c ; 
    char str[] = "Xin Chao!";
    int count = 0;
    printf("Nhap vào mot ky tu : ");
    scanf("%c", &c);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan \n", c, count, str);
    return 0;
}

