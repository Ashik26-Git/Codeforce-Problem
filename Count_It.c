#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int capital= 0,small = 0,space = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            capital++;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            small++;
        }
        else if (str[i] == ' ') {
            space++;
        }
    }

        printf("Capital - %d\nSmall - %d\nSpaces - %d",capital,small,space);


    return 0;
}
