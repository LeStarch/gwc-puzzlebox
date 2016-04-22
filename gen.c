#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * Helps with the recursive printing
 * char* alphabet - alphabet to iterate through
 * int iteration - what character of the guess are you on
 * int maximum - how many characters in guess
 * char* guess - prefilled with zeros
 */
void helper(char* alphabet,int iteration,int maximum,char* guess)
{
    int i = 0;
    for (i = 0; i < strlen(alphabet); i++)
    {
        guess[iteration] = alphabet[i];
        if (iteration == maximum-1)
        {
            fprintf(stdout,"%s\n",guess);
            continue;
        }
        helper(alphabet,iteration+1,maximum,guess);
    }
}
/**
 * Main program
 * int argc - number of commmand line arguments
 * char** argv - pointers to arguments
 */
int main(int argc, char** argv)
{
    int min,max,i;
    char* alphabet;
    char* guess;
    //Error on wrong number of arguments
    if (argc != 4)
    {
        fprintf(stderr,"Usage:\n\t%s <min length> <max length> <character set>\n",argv[0]);
        exit(-1);
    }
    //Get length bounds
    min = atoi(argv[1]);
    max = atoi(argv[2]);
    if (min < 1 || max < 1)
    {
        fprintf(stderr,"Min and max lengths (%d,%d) must be natural numbers.\n",min,max);
        exit(-1);
    }
    else if (min > max)
    {
        fprintf(stderr,"Min, %d, is not less than max, %d.\n",min,max);
        exit(-1);

    }
    //Grab alphabet and allocate space for guess
    alphabet = argv[3];
    if ((guess = malloc(sizeof(char)*(max+1))) == NULL)
    {
        fprintf(stderr,"Failed to allocate %lu bytes of memory. Please retry.\n",(sizeof(char)*(max+1)));
        exit(-1);
    }
    memset(guess,0,(max+1)*sizeof(char));
    //Between min and max, recurse printing options
    for (i = min; i <= max; i++)
    {
        helper(alphabet,0,i,guess);
    }
} 
