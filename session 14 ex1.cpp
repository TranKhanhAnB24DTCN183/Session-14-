#include<stdio.h>
 int main(){
 	char word[50];
 	 printf("Nhap vao mot chuoi ki tu :");
 	 fgets(word,50,stdin);
    int length=sizeof(word)/sizeof(char);
 	   if(word[length-1]=='\n'){
 	   	 word[length-1]='\0';
 	   	 length--;
		}
	 fputs(word,stdout);
 }
