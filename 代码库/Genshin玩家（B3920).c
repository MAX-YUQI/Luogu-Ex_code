//#include <stdio.h>  
//#include <string.h>  
//  
//int main() {  
//    char s[1024]; // 假设输入的字符串不会超过1023个字符（为了保留一个位置给字符串结束符'\0'）  
//    int ans = 0;  
//  
//    // 使用fgets代替getline，因为C语言标准库中没有getline函数  
//    if (fgets(s, sizeof(s), stdin) != NULL) {  
//        // 去除字符串末尾可能存在的换行符  
//        s[strcspn(s, "\n")] = 0;  
//  
//        for (int i = 0; i < strlen(s); i++) {  
//            if (strncmp(&s[i], "Genshin", 7) == 0) {  
//                for (int j = i; j < strlen(s); j++) {  
//                    if (strncmp(&s[j], "player", 6) == 0) {  
//                        ans++;  
//                        break; // 找到"player"后跳出内层循环，因为不需要继续查找  
//                    }  
//                }  
//            }  
//        }  
//    }  
//  
//    printf("%d\n", ans);  
//    return 0;  
//}


#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string  s;
    int ans=0;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        if (s.substr(i,7)=="Genshin") {
            for (int j=i;j<s.length();j++){
                if(s.substr(j,6)=="player") {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
