#include <stdio.h>

// 1~10±îÁö °ªÀ» º¸°í Â¦¼ö¸é Â¦¼ö Ãâ·Â È¦¼ö¸é È¦¼ö Ãâ·Â
int main(void) {
    for (int i=1; i<=10; i++) {
        // if(0) ¡æ fales
        // if(1) ¡æ true
        if(i % 2) {  // Â¦¼öÆÇº°
            printf("È¦¼ö\n");
        } else {
            printf("Â¦¼ö\n");
        }
    }
    
}