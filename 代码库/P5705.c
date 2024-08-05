#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
// 函数原型声明  
void reverse_string(char *str, int start, int end);  
  
int main() {  
    char num_str[50];  
    char integer_part[50];  
    char decimal_part[50];  
    char reversed_num[50];  
    int decimal_position;  
    int integer_length, decimal_length;  
  
    // 读取输入的浮点数  
    if (scanf("%[^.].%s", integer_part, decimal_part) != 2) {  
        printf("输入的数字不符合要求\n");  
        return 1;  
    }  
  
    // 检查整数部分是否满足条件  
    if (atoi(integer_part) < 100 || atoi(integer_part) >= 1000) {  
        printf("输入的数字不符合要求\n");  
        return 1;  
    }  
  
    // 检查小数部分是否只有一位  
    if (strlen(decimal_part) != 1) {  
        printf("输入的数字不符合要求\n");  
        return 1;  
    }  
  
    // 翻转整数部分和小数部分  
    integer_length = strlen(integer_part);  
    decimal_length = strlen(decimal_part);  
    reverse_string(integer_part, 0, integer_length - 1);  
    reverse_string(decimal_part, 0, decimal_length - 1);  
  
    // 组合结果，注意小数点的位置  
    sprintf(reversed_num, "%s.%s", decimal_part, integer_part);  
  
    // 输出结果  
    printf("%s\n", reversed_num);  
  
    return 0;  
}  
  
// 翻转字符串指定区间内的字符  
void reverse_string(char *str, int start, int end) {  
    char temp;  
    while (start < end) {  
        temp = str[start];  
        str[start] = str[end];  
        str[end] = temp;  
        start++;  
        end--;  
    }  
}
