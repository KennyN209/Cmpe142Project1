#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //output data from a program by directly using a system call



//GLOBAL VARIABLES
int BufferSize = 256; //2 to the 8th power?
int batch = 0; //to check if input is a batch file or not
char *path;
char Error[126] = "Something has gone wrong\n"; //C string array for error message array size of 126






//Main
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


//Functons&Auxillory

void PromptPrintScreen()
{
    write(STDERR_FILENO, "Poop> ", strlen("Poop> ")); //STDERR is file descriptor likely 0 and poop for the buffer
}

void ErrorScreen()
{
    write(STDERR_FILENO, Error, strlen(Error)); //Will write Error message using the length of it as buffer
    exit(1);
}