#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define LENGTH 7

int main(int argc, char** argv)
{
    //Variables
    int index = 0, i = 0, correct = 1,tmp = 0;
    char buffer[LENGTH] = {'\0','\0','\0','\0','\0','\0','\0'};
    char secret[] = {71,87,67,32,105,115,32,103,114,101,97,116,0};
    char password[20] = {'T','a','i','w','a','n','\0'};
    char key;
    //Read guess
    while (1)
    {
        correct = 1,index = 0, i = 0;
        //Read user input until a return (char code 10)
        while ( tmp = getc(stdin))
        {
             key = (char) tmp;
             if (10 == key)
             {
                 break;
             } else if (8 == key) {
                 index--;
                 printf(" ");
                 continue;
             } else if (tmp == EOF) {
                 return 1;
             }
             buffer[index] = key;
             index++;
        }
        //Check password, character by character. Avoid strcmp, as it is untrusted?
        if (isatty(fileno(stdin))) {
            printf("Checking ");
        }
        for (i = 0; i < LENGTH-1; i++)
        {
            //If human input, compare slowly to avoid cheating?
            if (isatty(fileno(stdin))) {
                printf(".");
                fflush(stdout);
                sleep(1);
            }
            //If character is wrong, break
            if (buffer[i] != password[i])
            {
                correct = 0;
                break;
            }
        }
        //If correct, print secret and end
        if (correct) {
            printf("\rThe secret is: %s\n",secret);
            return 0;
        }
        //Warn user it is wrong
        fprintf(stderr,"\r%s is the wrong key.\n",buffer);
    }
}
