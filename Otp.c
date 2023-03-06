#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand(time(0));
  FILE *fp;
  int otp=((rand()%(9999-1000+1))+1);
  int user_input=0;

    fp=fopen("otp.txt","w");
      fprintf(fp,"%d",otp);
    fclose(fp);
          printf("Enter the otp\n");
            scanf("%d",&user_input);

if(user_input==otp)
{
    printf("Login successful");
}
else
    printf("Invalid otp");

    return 0;

}

  