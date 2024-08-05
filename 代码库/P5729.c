#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    int w, x, h, q;  
    scanf("%d %d %d", &w, &x, &h);
    int ***cube = (int***)malloc(w * sizeof(int**));
      
    for (int i = 0; i < w; i++) {  
        cube[i] = (int**)malloc(x * sizeof(int*));  
        for (int j = 0; j < x; j++) {  
            cube[i][j] = (int*)calloc(h, sizeof(int));
            for (int k = 0; k < h; k++) {  
                cube[i][j][k] = 1;
            }  
        }  
    }  
      
    scanf("%d", &q);
    while (q--) {  
        int x1, y1, z1, x2, y2, z2;  
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
          
        for (int i = x1 - 1; i < x2; i++) {
            for (int j = y1 - 1; j < y2; j++) {  
                for (int k = z1 - 1; k < z2; k++) {  
                    cube[i][j][k] = 0;
                }  
            }  
        }  
    }  
       
    int remaining = 0;  
    for (int i = 0; i < w; i++) {  
        for (int j = 0; j < x; j++) {  
            for (int k = 0; k < h; k++) {  
                if (cube[i][j][k] == 1) {  
                    remaining++;
                }  
            }  
        }  
    }  
      
    printf("%d\n", remaining);
      
    for (int i = 0; i < w; i++) {  
        for (int j = 0; j < x; j++) {  
            free(cube[i][j]);  
        }  
        free(cube[i]);  
    }  
    free(cube);  
      
    return 0;  
}
