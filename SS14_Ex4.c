#include <stdio.h>
#include <string.h>
int main() {
    char a[]="Hallo Halo";
    int length = strlen(a);
    printf("hay nhap ki tu ban muon kiem tra : ");
    char kyTu;
    scanf("%c",&kyTu);
    int count=0;
    for(int i=0;i<length;i++){
        if(a[i]==kyTu){
            count++;
        }
    }if(count==0){
            printf("Khong co ki tu nao trong mang");
        }else{
            
            printf("xu?t hi?n %d l?n",count);
        
    }


    return 0;
}
