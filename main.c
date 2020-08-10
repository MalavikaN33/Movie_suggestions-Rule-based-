#include<stdio.h>
#include<stdlib.h>

int main()
{
 FILE *Fptr1, *Fptr2;
 char cont[900],lang[10],genr[16];
 int i,n,choice,choicel,choiceg,LC,GC,flag=0;

 printf ("1.View index in language and genre \n2.Enter preferences \n3.Exit\n");
 do
 {
  printf ("Enter your choice:\t");
  scanf("%d",&choice);
  switch (choice)
  {
    case 1: Fptr2=fopen("index.txt","r");
            while(fgets(cont, 22, Fptr2)!=NULL)
                printf("%s",cont);
            printf("\n");
            fclose(Fptr2);
            break;

    case 2: flag = 0;
            printf("Enter index of prefered genre:");
            scanf("%d",&choiceg);
            printf("Enter index of prefered language:");
            scanf("%d",&choicel);
            Fptr1=fopen("data.txt","r");
            for(n = 0; (!feof(Fptr1)); n++)
            {
                            fgets(cont, 900, Fptr1);
            }
            fclose(Fptr1);
            Fptr1=fopen("data.txt","r");
            n = n - 1;

            for(i = 0; i < n; i++)
            {
                fscanf(ptr1, "%s%s", lang,genr);
                fgets(cont, 900, ptr1);
                GC=atoi(genr);
                LC=atoi(lang);
                while(LC != 0)
                {
                  LC = LC % 100;
                  if(LC == choicel)
                  {
                    while(GC != 0)
                    {
                      GC = GC % 100;
                      if(GC == choiceg )
                      {
                        printf("%s",cont);
                        flag = 1;
                      }
                      GC /= 100;
                    }
                  }
                  LC /= 100;
                }
              }
              if(flag == 0)
                printf("\nNo matches.\n");
              break;

   case 3: printf("\nExiting...\n\n");
           exit(0);

   default: printf("\nInvalid choice\n");
  }
} while(choice!=3);
 printf("\n");
 return 0;
}
