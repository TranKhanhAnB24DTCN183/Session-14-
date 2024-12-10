#include <stdio.h>

int main() {
    char str[50];       
    int count = 0;
    
	printf("Nhap vao mot chuoi ki tu :");
	fgets(str,50,stdin);
     
    for (int i = 0; str[i] != '\0'; i++) { 
		count+=1; 
    }
    printf("So ki tu trong chuoi la: %d\n", count-1);
    
    return 0;
}
