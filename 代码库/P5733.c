#include <stdio.h>  
#include <ctype.h>  
#include <string.h>  
  
int main() {  
    char str[101];
    printf("请输入一个长度不超过100的字符串（不包含空格）: ");  
    fgets(str, sizeof(str), stdin);
  
    str[strcspn(str, "\n")] = 0;  
  
    for (int i = 0; str[i] != '\0'; i++) {  
        str[i] = toupper(str[i]);  
    }  

    printf("转换后的字符串: %s\n", str);  
  
    return 0;  
}
