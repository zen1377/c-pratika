// Самий простий алгоритм стиснення 
// типу 2A3b -> AAbbb

#include <stdio.h>
#include <string.h>

int main() {
    char *compressed = "3D2a15d2f"; // введення користувача
    char discomprassed[1000] = ""; // результат
    int len = strlen(compressed);
    char check[len+1];
    
    int multiplier = 1;
    int k = 0;
    strcpy(check, compressed);
    for (int i = 0; i < len; i++) {
        if (check[i] >= '0' && check[i] <= '9') {
            multiplier = check[i] - '0';
            if (i+1 < len && check[i+1] >= '0' && check[i+1] <= '9') {
            multiplier = multiplier * 10 + (check[i+1] - '0');
            i++; 
        }
        }
        else {
            for (int j = 0; j < multiplier; j++) {
                discomprassed[k] = check[i];
                k++;
            }
        }
    }
    discomprassed[k] = '\0';
    printf("%s\n", discomprassed);
    return 0;

} 