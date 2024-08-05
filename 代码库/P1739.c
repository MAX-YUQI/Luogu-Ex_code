//#include<stdio.h>
//#include<stdbool.h>
//#include<string.h>
//
//bool leftparen(char c){
//	return c =='(';
//}
//
//bool matchingpair(char left, char right){
//	return (left == '(' && right == ')');
//}
//
//bool check(const char *str){
//	int top = -1;
//	char stack[200];
//	
//	for(int i=0;str[i] != '@';i++){
//		if(leftparen(str[i])){
//			stack[++top] = str[i];
//		}
//		else if(top >= 0 && matchingpair(stack[top],str[i])){
//			top--;
//		}
//		else{
//			return false;
//		}
//	}
//	
//	return top == -1;
//	
//}
//int main()
//{
//	char str[256];
//	
//	fgets(str,sizeof(str),stdin);
//	
//	str[strcspn(str,"\n")] = 0;
//	
//	if(check(str)){
//		printf("YES");
//	}
//	else{
//		printf("NO");
//	}
//	
//	return 0;
//}



#include <stdio.h>
#include <string.h>

#define MAX_LEN 255

int main() {
    char expr[MAX_LEN];
    int stack[MAX_LEN], top = -1;

    scanf("%s", expr);
    int len = strlen(expr);

    for (int i = 0; i < len; i++) {
        if (expr[i] == '(') {
            stack[++top] = '(';
        } else if (expr[i] == ')') {
            if (top == -1) {
                printf("NO\n");
                return 0;
            }
            top--;
        }
    }

    if (top == -1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
