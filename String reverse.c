#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void str_rev(char *str){
    printf("the string is %s \n", str);
    int k = strlen(str);
    int i;
    char temp;
    
    for(i=0; i<(k/2); i++){
        temp = str[i];
        str[i] = str[k-1-i];
        str[k-1-i]= temp;
    }
    printf("Reversed string is %s\n", str);
    
    
}

int main() {
    printf("Hello world\n");
    
    char str[] =  "Olenka";
    str_rev(str);
    return 0;
}
