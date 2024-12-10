#include <stdio.h> 
int main() {
    char word[50]; 
    char character;
    int i;
     printf("Nhap vao mot chuoi ki tu :");
     fgets(word,50,stdin);
	    printf("Nhap mot ky tu bat ky: ");
	    scanf(" %c", &character); 
	    
    int count = 0;
		for (i = 0; word[i] != '\0'; i++) {
			if (word[i] == character) {
		        count++;
		    }
        }
    
    printf("Ky tu %c so lan xuat hien trong chuoi la :%d\n", character, count);
    
    return 0;
}

