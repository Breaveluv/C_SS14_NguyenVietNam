#include<stdio.h>
#include<string.h>
 	int main(){
	 
 		 char arr[100];
 		 printf("Nhap chuoi bat ki :  ");
 		 fgets(arr,100,stdin);
 		 printf("Chuoi cua ban la : %s  co do dai la %d\n ", arr,strlen(arr));
 		return 0;
 	}
