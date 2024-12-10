#include <stdio.h>  

int do_dai_chuoi(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void dao_nguoc_chuoi(char str[]) {
    int length = do_dai_chuoi(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char input[100]; 
	    printf("Nhap vao mot chuoi bat ky: ");
	    fgets(input, 100, stdin);

   
    int length = do_dai_chuoi(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0'; 
    }

    printf("Chuoi ban dau: \"%s\"\n", input);

    dao_nguoc_chuoi(input);

    printf("Chuoi dao nguoc: \"%s\"\n", input);

    return 0; 
}

