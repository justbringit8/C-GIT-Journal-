#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

void delete();
void removeAll(char * str, const char * toRemove);

int main()
{
    FILE *fp;
    typedef struct{
                                int no;
                                char name[20];
                                float price;
                                }Asset;

    Asset a;
    int choice;
    int choice1;

    fp = fopen("inv.txt","w");
        if(fp==NULL)
        {
            printf("File does not exist\n");
            return;
        }
    do
        {
            printf("\n Enter the Asset Number: ");
            scanf("%d",&a.no);
            fprintf(fp, "Asset No = %d\n",a.no);
            printf("\n Enter the Asset Name: ");
            scanf("%s",&a.name);
            fprintf(fp, "Asset Name = %s\n",a.name);
            printf("\n Enter the Asset Price: ");
            scanf(" %f",&a.price);
            fprintf(fp, "Asset Price = %.2f\n",a.price);
            printf("\n Do you want to add another record yes=1 no=0: ");
            scanf("%d",&choice);
        }while(choice);
        printf("\n Thank you! ");
        fclose(fp);
        printf("\n Do you want remove any information from the file yes=1 no=0: ");
        scanf("%d",&choice1);
        if(choice1){
                delete();
        }
        return 0;
}

  void  delete(){

    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
		printf("\n\n Delete a specific asset from a file :\n");
		printf("-----------------------------------------\n");
		printf(" Input the file name to be opened : ");
		scanf("%s",fname);
        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                return 0;
        }
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file
        rename(temp, fname); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen(fname,"r");
            ch=fgetc(fptr1);
          printf(" Now the content of the file %s is : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
        fclose(fptr1);
/*------- End of reading ---------------*/
        return 0;
  }
