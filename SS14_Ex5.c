#include <stdio.h>
#include<string.h>
int main() {
    char a[]="Breave Nam";
    int length=strlen(a);
    int count=1;
    for(int i=0;i<length;i++){
        if(a[i]==' '){
            count++;
        }
    }
    printf("có %d t?",count);
    return 0;
}
