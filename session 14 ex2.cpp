#include<stdio.h>
   int main(){
   	char word[]="Hello Teacher";
   	int length=sizeof(word)/sizeof(char);
   	   word[length-1]='\0';
   	   
   	    for(int i=0;i<length;i++){
   	       printf("Phan tu o vi thu %d la : %c\n",i+1,word[i]);
		}
}
