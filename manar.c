#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma pack(1)

struct student{
        char name[100];
        int ID ;
        int day , month ,year;
        int score;
        int num ;

    };
void insert_in_the_beginning(struct student s,int m,struct student*a){
    int pos=1;
    for (int i=m+1; i>=pos; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=s;
    m++;
     printf("\n\nresultant array of structure\n");
    for (int i=1; i<=m; i++)
    {
        printf("student num[%d]\n" ,a[i].num);
        printf("name: ");
        puts(a[i].name);
        printf("student id= %d\n",a[i].ID);
        printf("student score= %d\n",a[i].score);
        printf( "student birthday=%d/%d/%d\n",a[i].day,a[i].month,a[i].year);
        putchar('\n');
    }
}
void insert_in_the_middle(struct student s,int m,struct student*a,int r){
    for(int i=m+1;i>=r;i--)
        {
            a[i]=a[i-1];
        }
        a[r]=s;
        m++;
        printf("\n\nresultant array of structure\n");
    for (int i=1; i<=m; i++)
    {
        printf("student num[%d]\n" ,a[i].num);
        printf("name: ");
        puts(a[i].name);
        printf("student id= %d\n",a[i].ID);
        printf("student score= %d\n",a[i].score);
        printf( "student birthday=%d/%d/%d\n",a[i].day,a[i].month,a[i].year);
        putchar('\n');
    }
}
void insert_at_the_end(struct student s,int m,struct student*a){
    int pos=m+1;
    for (int i=m; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=s;
    m++;
    printf("\n\nresultant array of structure\n");
    for (int i=1; i<=m; i++)
    {
        printf("student num[%d]\n" ,a[i].num);
        printf("name: ");
        puts(a[i].name);
        printf("student id= %d\n",a[i].ID);
        printf("student score= %d\n",a[i].score);
        printf( "student birthday=%d/%d/%d\n",a[i].day,a[i].month,a[i].year);
        putchar('\n');
    }
}
int main()
{
    int n,m,o ; int i,pos;
    struct student k;
    struct student*astudent;
    printf("Enter number of students\n");
    scanf("%d", &n);
    astudent=(struct student*)malloc(n*sizeof(astudent));
    printf("Welcome in this program \n");
    printf("Please Enter the informations of the students\n");
    for (int i=1; i<=n; i++)
    { astudent[i].num =i;
     printf("student num[%d]\n" ,astudent[i].num);

        printf( "Enter Name: \n");
        fflush(stdin);
        scanf(" %[^\n]s " , astudent[i].name);

        printf("Enter ID:\n");
        scanf("%d", &astudent[i].ID);

         printf("Birth date\n");
         printf("Enter day:\n"); scanf("%d" ,&astudent[i].day);
         printf("Enter month:\n"); scanf("%d" ,&astudent[i].month);
         printf("Enter year:\n"); scanf("%d" ,&astudent[i].year);
         printf("Birth date:%d/%d/%d\n" ,astudent[i].day,astudent[i].month,astudent[i].year);

         printf("Enter score:\n");
        scanf("%d",&astudent[i].score);
    }
    printf("checking the information of students\n");
    label1:
    printf("Enter the number of student that you want to check it \n");
    scanf("%d",&i); printf("i=%d\n",i);
    printf("name: ");
    puts(astudent[i].name);
    printf("student id= %d\n",astudent[i].ID);
    printf("student score= %d\n",astudent[i].score);
    printf( "student birthday=%d/%d/%d\n",astudent[i].day,astudent[i].month,astudent[i].year);
    printf(" if you want to insert new student press 0 or if you want to display another student press 1 \n" );
    int h ; scanf("%d", &h);
    if(h == 1)  goto label1;

    //insert

    else if( h==0) {
    time_t begin = time(NULL);

    //printf( "if you want to insert new student press 0\n");
    //scanf("%d",&m);
    //if (m==0)
    //{
        printf("Please Enter the informations of the student\n");
        k.num =pos;
        printf("student num[%d]\n" ,k.num);
        printf( "Enter Name: \n");
         fflush(stdin);
        scanf(" %[^\n]s " , k.name);
        printf("Enter ID:\n");
        scanf("%d", &k.ID);
         printf("Birth date\n");
         printf("Enter day:\n"); scanf("%d" ,&k.day);
         printf("Enter month:\n"); scanf("%d" ,&k.month);
         printf("Enter year:\n"); scanf("%d" ,&k.year);
         printf("Birth date:%d/%d/%d \n" ,k.day,k.month,k.year);

         printf("Enter score:\n");
        scanf("%d",&k.score);
        printf( "press 1 to insert in the beginning or press 2 to insert in the middle or press 3 to insert at the end\n");
    scanf("%d",&o);
    if(o==1)
        insert_in_the_beginning(k,n,astudent);
    else if(o==2)
    {printf( "enter where you want to insert\n");
    scanf("%d",&pos);
    insert_in_the_middle(k,n,astudent,pos);}
    else if(o==3)
    insert_at_the_end(k,n,astudent);
    //}

    time_t end = time(NULL);

    // calculate elapsed time by finding difference (end - begin)
    printf("The elapsed time to insert a new student is %d seconds\n", (end - begin));

    }
    // calculate the size of structure
   int size = sizeof(k);   printf("nSize of Structure : %d bytes\n", size);

    return 0;
}
