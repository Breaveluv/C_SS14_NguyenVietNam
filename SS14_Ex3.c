#include <stdio.h>
#include <string.h>
int main() {
    char name[]="Vu Hoai Nam";
    long long length= strlen(name);
    for(int i=0;i<length/2;i++){
        int temp = name[i];
        name[i]=name[length-1-i];
        name[length-i-1]=temp;
    }
    printf("%s\n",name);
    return 0;
}
