#include <stdio.h>
#include <string.h>
struct library
{
    int bookid;
    char title[50];
    float price;

} b[];
int length=0;
int main()
{
swithcase();
}

int swithcase(){
    int choice=0;
        printf("\n-------------- please chose the option --------------\n");
        printf("1.insert \n");
        printf("2.print \n");
        printf("3.search \n");
        printf("4.delete \n");
        printf("5.update \n");
        printf("6.exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();swithcase();
            case 2: print(); swithcase();
            case 3: search(); swithcase();
            case 4: deletebook(); swithcase();
            case 5: update(); swithcase();
            case 6: break;
            default:
            printf("please select correct value \n");
            swithcase();
        }

}

int insert()
{
    int n;
 printf("\n enter the number of books to be inserted");
 scanf("%d",&n);

 for(int i=0;i<n;i++)
 {
     printf("enter book %d details \n",i+1);
     scanf("%d %s %f",&b[i].bookid,b[i].title,&b[i].price);
     length++;
 }
}
int search()
{
    int bid;
    printf("enter the book id to search u wanted");
    scanf("%d",&bid);

    for(int i=0;i<length;i++)
{
    if(b[i].bookid==bid)
    {
        printf("\n the book %d is found",bid);
        return bid;
    }
}
printf("\n book %d is not found",bid);
}
int update()
{
    int uid;
  printf("\n enter the book id u want to update \n");
  scanf("%d",&uid);
  for(int i=0;i<length;i++)
  {
      if(b[i].bookid==uid)
      {
          printf("book details are book id %d,book title %s,book price %f \n",b[i].bookid,b[i].title,b[i].price);
          printf("please enter new values book id, title, price\n");
          char title[50];
          scanf("%d %s %f",&b[i].bookid,&title,&b[i].price);
          strcpy(b[i].title,title);
          printf("New book details are book id %d,book title %s,book price %f \n",b[i].bookid,b[i].title,b[i].price);
return uid;
      }
  }
  printf("Book with id %d not found",uid);
}
int print(){

  for(int i=0;i<length;i++)
  {
            printf("book details are ");
          printf("book id %d,book title %s,book price %f \n",b[i].bookid,b[i].title,b[i].price);
  }
}
int deletebook(){
        int deleteid;
  printf("\n enter the book id u want to delete \n");
  scanf("%d",&deleteid);
  for(int i=0;i<length;i++)
  {
      if(b[i].bookid==deleteid)
      {
          for(int j=i;j<length; j++){

          b[i]=b[i+1];
          }
          length--;
          printf("Book with id %d is successfully deleted", deleteid);
          return deleteid;
      }
  }
   printf("Book with id %d not found", deleteid);
}
