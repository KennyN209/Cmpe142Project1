#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //output data from a program by directly using a system call



//GLOBAL VARIABLES
int BufferSize = 256; //2 to the 8th power?
int batch = 0; //to check if input is a batch file or not
char *path;
char Error[126] = "Something has gone wrong\n"; //C string array for error message array size of 126
int ProcessEmpty=0;
int modify = 0;
char mutli[256][256];
int mult = 0;







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

int CheckSpace(char *space)
{
    int issue=0; 
    for(int i = 0; i< strlen(space); i++)
    {
       if(isspace(space[i] == 0)
          {
              issue = 1;
              break;
          }
    }
          return issue;
}
          
int Process(char *argc1[])
{
    int a = fork();
    if(a < 0)
    {
        ErrorScreen();
        exit(1);   
    }
   else if((a==0) && (ProcessEmpty!=1))
       {
           if(modify == 0)
           {
               path = strdup("/usr/bin/")
               path = strcat(process, argc1[0]);
               if(access(path,X_OK)!=0 && modify==0)
                   {
                       write(STDERR_FILENO, Error, strlen(Error));
                       exit(0);
                   }
           }
       }
    else if(modify == 1 && mult == 0)
    {
        path = strcat(path, argc1[0]);
        if(access(path,X_OK)!=0
           {
               write(STDERR_FILENO, Error, strlen(Error));
               exit(0);
           }
    } 
           else
           {
               for(int i = 0; i < mult; i++)
               {
                  str(multi[i], arcg[0];
                      if(access(multi[i], X_OK)==0)
                         {
                             strcpy(path,multi[i]);
                             break;
                         }
               }
           }
                      if(execv(path, arcg1)==-1
                         {
                             ErrorScreen();
                             exit(0);
                         }
              }
                         else
                         {
                             int status = 0;
                         }
                         return a;
                         
 
   }
    
              
        
        
         
