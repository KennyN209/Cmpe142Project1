#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//GLOBAL VARIABLES
int BufferSize = 256; //2 to the 8th power?
int batch = 0; //to check if input is a batch file or not
char *path;
int main(int argc, char* argv[])
{
FILE *file = NULL; //create a point of FILE type that is NULLED
path = (char*) malloc(BufferSize); //Creating dynamic memory with cap of 256
char buffer[BufferSize] ; //creating char variable of size 256

if (argc == 1)
    {
    file = stdin;
    PromptPrintScreen();
    }
    else if(argc == 2)
    {
        char *twofile = strdup(argv[1]);
        file = fopen(twofile, "hi");
        if (file == NULL)
        {
            ErrorScreen();
        }
        batch = 1;

    }
    else
    {
        ErrorScreen();
    }
}