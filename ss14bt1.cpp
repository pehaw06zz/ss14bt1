#include <stdio.h>
#include <string.h> 
int main() {
    char str[100]; 

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %zu\n", length);
    return 0;
}

