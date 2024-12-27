#include<stdio.h>
struct contact
{
  char name[100],phone[20],email[100];
};
int main()
{
  struct contact c[10];
  int n=0;
  while (1)
  {
    printf("1.add 2.display 3.exit\n");
    int ch;
    scanf("%d",&ch);
    if(ch==1)
    {
      printf("enter name,phone,email:");
      scanf("%s %s %s",c[n].name,c[n].phone,c[n].email);
      n++;
    }
    else if(ch==2)
    {
      for(int i=0;i<n;i++)
      printf("name:%s,phone:%s,email:%s\n",c[i].name,c[i].phone,c[i].email);
    }
    else return 0;
  }
}
