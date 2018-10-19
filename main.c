/*This program was created for the purpose of asking the user to enter a string so that it can detect and count the most
 * repeated character.
 *
 * Author: Angel Daniel Olvera Perales
 * Date: October 18
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>
#include <string.h>

int main() {
//Variables are declared
    char string[100000];
    char result;
    int i;
    int length;
    int max=-1;
    int frequency[100000] = {0};
//The user is asked to enter a string.
    printf("Enter a string: \n");
    gets(string);
//The loop will be responsible for checking every character in the string and it will add every repeated character
//until it finishes checking.
    length= strlen(string);
    for(i=0;i<length; i++)
    {
        frequency[string[i]]++;
    }
    for(i=0;i<length;i++)
    {
        if(max<frequency[string[i]])
        {
            max=frequency[string[i]];
            result=string[i];
        }
    }
//The most repeated character that the loop got will be printed.
    printf("\nThe most repeated character is %c", result);
    return 0;
}