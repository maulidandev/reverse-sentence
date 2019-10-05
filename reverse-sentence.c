/**
 * Author : Maulidan Nashuha
 * Date : 5 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>

int getCountString(char*);

int main(int argc, char const *argv[])
{
    char string[300];

    printf("Masukkan Sebuah Kalimat : ");
    scanf(" %[^\n]", string);

    int countString = getCountString(string);

    for (int i = countString; i >0 ; i--)
        printf("%c", string[i-1]);

    printf("\n\n");

    return 0;
}

int getCountString(char* string){
    int countString = 0;

    for (countString = 0; *string != '\0'; countString++, string++);
    
    return countString;
}