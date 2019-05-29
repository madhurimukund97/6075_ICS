#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct line{
   char word[10];
   int lineNo;
};
int main()
{
   char ch, data_file[25] = "data.txt", stop_file[25] = "stopwords.txt";
   FILE *fp_data, *fp_stop;

   fp_data = fopen(data_file, "r"); // reading input data
   fp_stop = fopen(stop_file, "r"); // reading stopwords


   if (fp_data == NULL || fp_stop == NULL)
   {
      perror("Error while opening the files.\n");
      exit(EXIT_FAILURE);
   }


   //getting an array of input data words--------------------------------------------------
   char datawords[1000][20];
   int idata = 0;

   // while((fscanf(fp_data, "%s", datawords[idata])) != EOF) {
      // ++idata;
   // }
   //for(int j = 0; j < idata; j++)
     //    printf("%s\n", datawords[j]);
   //--------------------------------------------------------------------


   //getting an array of stopwords suggested--------------------------------------------------
   // char stopwords[1000][20];
   // int istop = 0;

   // while((fscanf(fp_stop, "%s", stopwords[istop])) != EOF) {
   //    ++istop;
   // }
   // for(int j = 0; j < istop; j++)
   //       printf("%s\n", stopwords[j]);
   //--------------------------------------------------------------------



   printf("The contents of %s file are:\n", data_file);
   int i = 0;
   char c[10];
   int lineCount = 1;
   while((ch = fgetc(fp_data)) != EOF) {
        if(ch != ' '){
         c[i] = ch;
         i++;
        }
        if(ch == ' ' || ch == '\n'){
         c[i] = '\0';
         printf("%s %d\n",c, lineCount);
         c[0] = '\0';
         i = 0;

        }
        if(ch == '\n'){
         lineCount++;
        }
   }
   printf("\n");
   fclose(fp_data);
   fclose(fp_stop);
   return 0;
}