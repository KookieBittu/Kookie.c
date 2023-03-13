#include<stdio.h>
int main()
{
int c1,c2,c3,c4,c5;
int ch=0;
printf("\n");
printf("..................Welcome to Quiz Mania..................\n");
printf("\n");
printf("\n");
printf("Q1.Who is the prime minister of India ?\n");
printf("1.Jawahar lal Nehru\n");
printf("2.Pranab Mukherjee\n");
printf("3.Narendra Modi\n");
printf("4.Harshvardhan Shukla\n");
scanf("%d",&c1);
if(c1==3)
{
printf("Correct Answer\n");
ch++;
}
else
{
printf("Wrong Answer\n");
}
printf("\n");
printf("\n");
printf("Q2.Who is the president of India ?\n");
printf("1.Jawahar lal Nehru\n");
printf("2.Pranab Mukherjee\n");
printf("3.Narendra Modi\n");
printf("4.Droupadi Murmu\n");
scanf("%d",&c2);
if(c2==4)
{
printf("Correct Answer\n");
ch++;
}
else
{
printf("Wrong Answer\n");
}
printf("\n");
printf("\n");
printf("Q3.What is the national anthem of India ?\n");
printf("1.Vande Matram\n");
printf("2.Jana Gana Mana \n");
printf("3.Mera Bharat Mahan\n");
printf("4.Teri Mitti\n");
scanf("%d",&c3);
if(c3==2)
{
printf("Correct Answer\n");
ch++;
}
else
{
printf("Wrong Answer\n");
}
printf("\n");
printf("\n");
printf("Q4.What is the natinal animal of India ?\n");
printf("1.Elephant\n");
printf("2.Lion\n");
printf("3.Tiger\n");
printf("4.Giraffe\n");
scanf("%d",&c4);
if(c4==3)
{
printf("Correct Answer\n");
ch++;
}
else
{
printf("Wrong Answer\n");
}
printf("\n");
printf("\n");
printf("Q5.What is the national sport of India ?\n");
printf("1.Hockey\n");
printf("2.Cricket\n");
printf("3.Football\n");
printf("4.Kabaddi\n");
scanf("%d",&c5);
if(c5==1)
{
printf("Correct Answer\n");
ch++;
}
else
{
printf("Wrong Answer\n");
}
printf("\n");
printf("\n");
printf("Your Final score is:\n");
if(ch==5)
{
printf("%d/5\n",ch);
printf("Outstanding\n");
}
if(ch==4)
{
printf("%d/5\n",ch);
printf("Excellent\n");
}
if(ch==3)
{
printf("%d/5\n",ch);
printf("Good\n");
}
if(ch==2||ch==1)
{
printf("%d/5\n",ch);
printf("Work Hard\n");
}
printf("..................THANK YOU FOR YOUR PARTICIPATION...................\n");
}