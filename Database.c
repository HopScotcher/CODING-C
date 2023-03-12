#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int createFile(FILE *file);
char *readFile(FILE *file);
int appendToFile(FILE *file);
int deleteFile(FILE *file);

int main()
{
   FILE *file;
   int option;

   printf("what would you like to do?\n 1: create a new file\n 2: read an existing file\n 3: Append text to a file \n4: Delete a file\n");
   scanf("%d", &option);

   switch (option)
   {
   case 1:
      createFile(file);
      break;

   case 2:
      char *fileReturned = readFile(file);
      printf("%s", fileReturned);
      free(fileReturned);
      break;

   case 3:
      appendToFile(file);
      break;
   case 4:
      int result = deleteFile(file);

      result == 0 ? printf("File deleted successfully.\n") : printf("Error deleting file.\n");
      break;

   default:
      printf("Please enter a valid option");
      break;
   }
   return 0;
}

/* a program that creates a text file */
int createFile(FILE *file)
{
   char fileName[100];
   char string[100]; // stores user input before saving into the text file

   printf("Create the name of your file:\n");
   scanf("%s", &fileName);

   printf("%s", fileName);
   // fflush(stdin); //  clears input stream after reading from it, before the next "fgets" call.

   /*
   ///////   advancing the code to append .txt automatically//////

    int newLineIndex; //for formatting the name of the newly created file
    char format[50] = ".txt";
    newLineIndex = strcspn(fileName, "\n"); //finds the index of the first occurrence of \n
    fileName[newLineIndex] = '\0'; // replaces \n with the null xter \0
    strcat(fileName,format);
    */

   file = fopen(fileName, "w"); // puts the file into write mode

   printf("Enter a string of text to write to the file:\n");
   fflush(stdin);
   fgets(string, 100, stdin);

   fprintf(file, "%s", string); // Write string to file
   return 0;
}

/*this function reads the file*/

//////////////////do some error handling for this function////////////////////
char *readFile(FILE *file)
{

   char fileToRead[100];
   char *fileToReturn = (char *)malloc(20 * sizeof(char));

   printf("enter name of file to read\n");
   scanf("%s", &fileToRead); // using fgets twice in the same codeblock causes bugs that I dont understand
   // fgets(fileToRead, 100, stdin);

   file = fopen(fileToRead, "r");

   while (fgets(fileToRead, 100, file) != NULL)
   {
      //   printf("%s", fileToRead);
   }

   strcpy(fileToReturn, fileToRead);
   fclose(file);

   return fileToReturn;
}

int appendToFile(FILE *file)
{
   char fileToAppend[50];
   char strToAppend[100];

   printf("enter the name of file to append to:\n");
   // fgets(fileToAppend, 50, file);
   scanf("%s", &fileToAppend);

   file = fopen(fileToAppend, "a");

   if (file != NULL)
   {
      printf("enter text to append:");
      fflush(stdin);
      fgets(strToAppend, 50, stdin);

      fprintf(file, "%s\n", strToAppend);
   }
   else if (file == NULL)
   {
      printf("Append failed!");
   }

   return 0;
}

int deleteFile(FILE *file)
{
   char fileToDelete[50];
   int choice;
   char substring[] = ".c";

   printf("enter the name of the file to delete\n");
   scanf("%s", &fileToDelete);

   printf("%s", fileToDelete);
   // file = fopen(fileToDelete, "r");

   int checkExist = strstr(fileToDelete, substring);

   if (checkExist != NULL)
   {
      printf("are you sure you want to delete the C file?\n");
      scanf("%d", &choice);

      if (choice == 1)
      {
         printf("file deleted successfully");
         remove(fileToDelete);
      }
      else if (choice == 2)
      {
         printf("file deletion terminated");
      }
      else
      {
         printf("please enter a valid option");
      }
   }

   int result = remove(fileToDelete);

   if (result == 0)
   {
      // printf("File %s deleted successfully.\n", fileToDelete);
      return 0;
   }
   else
   {
      // printf("Error deleting file %s\n", fileToDelete);
      return 1;
   }
}
