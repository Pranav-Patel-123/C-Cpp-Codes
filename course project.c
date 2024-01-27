#include<stdio.h>
void search_reminder(int date1);
void write_in_file(int date, char reminder_w[300]);
void main()
{
    char date[15];
    printf("enter date(dd mm yyyy) = ");
    scanf("%s",date);
    search_reminder(date);
}
void search_reminder(int date1)
{
    /*
        this function will tell us whether their is any reminder for a particular date and then print it
        input: date in format dd mm yyyy
        output: reminders of inputed date if any
    */
    struct all_reminders
    {
        // this struct contains the information about the entries stored in the file
        int date2[15];// date in the form ( dd mm yyyy )
        char reminder[300];
    };
    struct all_reminders r;
//the below process is done to search the date from the file
    int flag=0;
    FILE *rf;
    rf=fopen("reminders.txt","rb");
    if(rf==NULL)
    {
        printf("File cannot open");
    }
    while(fread((&r), sizeof(r),1,rf)>0 && flag==0)
    {
        if(r.date2==date1)
        {
            flag=1;
            printf("%s",r.reminder);
        }
    }
    if(flag==0)
    {
        printf("No reminder found ");
    }
fclose(rf);
}
void write_in_file(int date, char reminder_w[300])
{
    /*
        this function will write a reminder in the file named reminders.txt
        input: date and reminder
        output: date and reminder written on the file
    */
   struct data
   {
        char date3[15];
        char reminder[300];
   };
   struct data d;
   FILE *rf;
   char d=='y';
   rf=fopen("reminders.txt","ab");
   if (rf==NULL)
   {
        printf("Cannot Open");
   }
   while (ch=='y')
   {
        printf("enter date: ");
        fflush(stdin);
        gets(d.date3);
        printf("enter reminder: ");
        fflush(stdin);
        gets(d.reminder);
        fwrite(&d.date3,sizeof(date3),1,rf);
        printf("do you want to insert another reminder ( y or n )\n");
        ch=getche();
   }
   fclose(rf);
}