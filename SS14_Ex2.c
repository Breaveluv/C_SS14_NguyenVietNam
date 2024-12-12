#include <stdio.h>
#include <string.h>
int main() {
    char arr[]="Chelsea top 2 EPL ";
    int length = strlen(arr);
    for(int i=0;i<length;i++){
        printf("%c ",arr[i]);
    }
    return 0;
}
