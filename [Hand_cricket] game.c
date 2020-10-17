#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int p1;//p1 is a global variables to store player point
int p2;//p2 is a global variables to store computer point
int randomnum(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int toss_result(int a)
{
    int b;
    b=randomnum(2);
    if(a==1)
    {
        printf("You choose:Head\n");
        if(b==0){
        printf("computer choose:Tail\n");
        printf("Toss result is: Tails\n");
        printf("computer Wins\n");
            return 0;
            }
        if(b==1){
        printf("computer choose:Tail\n");
        printf("Toss Result is: Heads\n");
        printf("You Wins\n");
            return 1;
            }
    }
    if(a==2)
    {
        printf("You choose:Tails\n");
        if(b==0){
        printf("computer choose:Heads\n");
        printf("Toss Result is: Head\n");
        printf("computer wins\n");
            return 0;
            }
        if(b==1){
        printf("computer choose:Heads\n");
        printf("Toss Result is: Tails\n");
        printf("You wins\n");
            return 1;
            }
    }
}
int match_start(int a,int b)
{
    if((a)==(b))
    {
        return 0;
    }
    if(a==1)
    {
        return 1;
    }
    else if(a==2)
    {
        return 2;
    }
    else if(a==3)
    {
        return 3;
    }
    else if(a==4)
    {
        return 4;
    }
    else if(a==5)
    {
        return 5;
    }
    else if(a==6)
    {
        return 6;
    }
}

int player_1(int s,int p)
{
    int i,c;
    
 printf("\t**Your batting**\n");
 printf("press 1,2,3,4,5,6 for runs\n\n");
    for(i=0;i<s;i++)
    {
     printf("Your runs:");
     scanf("%d",&p);
     if(p>6)
        {
    printf("You select ivalid option!\n");
     break;
        }
        c=randomnum(6)+1;
        printf("computer ball is:%d\n\n",c);
        if(match_start(p,c)==1)
    { p1++; }
   else if(match_start(p,c)==2)
    { p1+=2; }
    else if(match_start(p,c)==3)
    { p1+=3; }
    else if(match_start(p,c)==4)
    { p1+=4;}
    else if(match_start(p,c)==5)
    { p1+=5;}
    else if(match_start(p,c)==6)
    { p1+=6; }
       
        if(match_start(p,c)==0)
        {
            printf("\t**You__Out**\n");
            break;
        }
    }
    printf("\tYour score is %d\n\n",p1);
    return p1;
}
int player_2(int s,int p)
{
    int i,c;
     printf("\t**Your balling**\n");
printf("press 1,2,3,4,5,6 for balls\n\n");
    for(i=0;i<s;i++)
    {
        printf("Your ball:");
        scanf("%d",&p);
        if(p>6)
        {
    printf("You select ivalid option!\n");
    break;
        }
    c=randomnum(6)+1;
    printf("computer run is:%d\n\n",c);
    if(match_start(c,p)==1)
    { p2++; }
    else if(match_start(c,p)==2)
    { p2+=2; }
    else if(match_start(c,p)==3)
    { p2+=3; }
    else if(match_start(c,p)==4)
    { p2+=4;}
    else if(match_start(c,p)==5)
    { p2+=5;}
    else if(match_start(c,p)==6)
    { p2+=6; }
       
    if(match_start(c,p)==0)
      {
       printf("\t**Computer__Out**\n");
       break;
       }
    }
  printf("\n\tcomputer score is %d\n",p2);
  return 0;
}
int main()
 {    int num,a=0,s;
      int playerpoint=0,compoint=0;
      printf("choose\n1:Head\n2:Tail\n" );
      scanf("%d",&num);
      getchar();
if(toss_result(num)==1)
 {
      printf("\nChoose\n1:bat\n2:ball\n");
      scanf("%d",&a);
       
 }
else
 {
  if(randomnum(3)==0)
   {printf("\ncomputer choose to bat\n");
        a=2;
            }
else{ printf("\ncomputer choose to ball\n");      
        a=1;
            }

         }
    printf("Choose no of balls you want to play\n");
    scanf("%d",&s);
    printf("\t**Match_start**\n");
   
    if(a==1)
    {   
        player_1(s,playerpoint);
        player_2(s,compoint);
       
        
    }
    if(a==2)
    {
        player_2(s,compoint);
        player_1(s,playerpoint);
        }
printf("******************************************\n");      
    printf("Result:\ncomputer point :%d\nYour point :%d",p2,p1);  
    
    if(p1<p2)
    {
        printf("\n\t**Computer Win**");
    }
    if(p1>p2)
    {
        printf("\n\t**You Win**");
    }
    else if(p1==p2) {
    printf("\n\tIts draw");
    }
    
  return 0;
}
