#include<stdio.h>
#include<string.h>
int main() {
    char a[]="nam.bule12@gmail.com";
    int length=strlen(a);
    int count=0;
    int number= 0;   
    int spc;
    for(int i=0;i<length;i++){
        if (isalpha(a[i])){
	           	count++;
        }else if  (isdigit(a[i])){
	           	number++;
    }else{
    spc++;
    }
    }
    printf("co %d ki tu chu cai",count);
    printf("co %d ki tu so ",number);
    printf("co %d ki tu dac biet ",spc); 
	return 0;
}
