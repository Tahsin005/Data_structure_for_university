#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%[^\n]s", str);

    printf("You have inputted : %s\n", str);
    int x = strlen(str);
    printf("The length of the string is : %d\n", x);

    char s[100];
    strcpy(s,str);
    printf("Coppied string is: %s\n", s);
}
