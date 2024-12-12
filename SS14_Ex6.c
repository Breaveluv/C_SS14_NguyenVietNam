#include <stdio.h>
#include<string.h>
int main() {
    char a[]="Nguyen Viet Nam";
    int length=strlen(a);
    int count=0;
    for(int i=0;i<length;i++){
      
            count++;
        }

    printf("có %d kí t?",count);
    return 0;
}
