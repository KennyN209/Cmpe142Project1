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
               path = strdup("/bin/")
               path = strcat(path, argc1[0]);
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
                  str(multi[i], argc1[0];
                      if(access(multi[i], X_OK)==0)
                         {
                             strcpy(path,multi[i]);
                             break;
                         }
               }
           }
                      if(execv(path, argc1)==-1
                         {
                             ErrorScreen();
                             exit(0);
                         }
                         else
                         {
                             int status = 0;
                         }
                         return a;
                         
 
   }
                         
                         
  int Process1(char *space)
  {
      int temp = 0;
      int a;
      int i;
      
      if(strstr(space, ">")!=NULL)
         {
             i = 0;
             char* shift[sizeof(char)*256];
             shift[0] = strtok(strdup(space));
             while(shift[i]!=NULL)
             {
                 i++;
                 shift[i] = strtok(NULL);
                 
             }
             if(i==1)
             {
                 write(STDERR_FILENO, Error, strlen(Error));
                 exit(0);
             }
             int z = 0;
             char* argc1[sizeof(space)];
             argc1[0] = strtok(space);
             while(argc1[z]!=NULL)
             {
                 z++;
                 argc1[z] = strtok(NULL);
             }
             if(z>2)
             {
                 write(STDERR_FILENO, Error, strlen(Error));
                 exit(0);
             }
             int b = 0;
             char* size1[sizeof(argc1[1])];
             size1[0] = strtok(argc1[1]);sw
             while(size1[b]!=NULL)
             {
                 b++;
                 size1[b]=strtok(NULL);
             }
             char *switch = strdup(size1[0]);
             stdout_copy = dup(1);
             int away = open(switch,O_WRONLY|O_CREAT|O_TRUNC,0666);
             int err = open(switch,O|WRONLY|O_CREAT|O_TRUNC,0666);
             fflush(stdout);
             dup2(away, STDOUT_FILENO);
             dup2(away,STDERR_FILENO);
             close(away);
             CLOSED = 1;
             if(away == -1 || err == -1 || b > 1 || z > 2)
             {
                 write(STDERR_FILENO, Error, strlen(Error));
                 exit(0);
             }
             argc1[z+1] = NULL;
             size1[b+1] = NULL;
             strcpy(space, argc1[0]);
         }
         
         if(space[0] != '\0' && space[0] != '\n')
         {
             char *ord[sizeof(space)];
             int c = 0;
             ord[0] = strtok(space);
             while(ord[c]!=NULL)
             {
                 c++;
                 ord[c] = strtok(NULL);
             }
             ord[c+1} = NULL;
                 if(strcmp(ord[0])
                    {
                        if(c==2)
                        {
                            if(chdir(odr[1])!=0)
                            {
                                write(STDERR_FILENO, Error, strlen(Error));
                            }
                        }
                        else
                        {
                            write(STDERR_FILENO, Error, strlen(Error));
                        }
                    }
                    else if(strcmp(ord[0], "path") == 0)
                    {
                        modify = 1;
                        if(c == 2)
                        {
                            ProcessEmpty=0;
                            path = strdup(ord[1]);
                            if(path[strlen(path)-1]!='/')
                            {
                                strcat(path, "/");
                            }
                        }
                        else if(c == 1)
                        {
                            ProcessEmpty = 1;
                        }
                        else
                        {
                            ProcessEmpty = 0;
                            for(int a = 1; i<a; a++)
                            {
                                char *tem = strdup(ord[i]);
                                if(tem[strlen(tem)-1]!='/')
                                {
                                    strcat(tem,"/");
                                }
                                strcpy(multi[a-1], tem);
                                mult++;
                            }
                        }
                        else if(strcmp(ord[0], "exit") == 0)
                        {
                            if(c==1)
                            {
                                exit(0);
                            }
                            else
                            {
                                write(STDERR_FILENO, Error, strlen(Error));
                            }
                        }
                        else
                        {
                            if(ProcessEmpty == 1)
                            {
                                write(STDERR_FILENO, Error, strlen(Error));
                            }
                            else
                            {
                                a = newProcess(ord);
                            }
                        }
                    }
                    if(closed == 1)
                    {
                        dup2(stdout_copy, 1);
                        close(stdout_copy);
                    }
                    return a;
                    
 }
             
             
             
              
        
        
         
