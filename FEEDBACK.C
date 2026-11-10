#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("Feedback,txt","w");
if(fp==NULL)
{
printf("File opening ending\n");
return 0;
}
fprintf(fp,"Feedback about the C program\n");
fprintf(fp,"C is very important language\n");
fprintf(fp," it is very basic language\n");
fprintf(fp," it is easy to understand\n");
fprintf(fp," it is very useful to improve our technical and non technical skills\n");
fprintf(fp,"it is use to improve our problem solving skills\n");
fclose(fp);
fp=fopen("Feedback.txt","a");
if(fp==NULL)
{
printf("File opening ending\n");
return 0;
}
fprintf(fp,"Feedback about the c sir");
fprintf(fp,"Our c programming sir explains every concept clearly and makes learning easy to understand\n");
fprintf(fp,"He encourages us to practise programs and improve our logical thinking\n");
fprintf(fp," His teaching helps beginners understand programming step by step\n");
fprintf(fp,"He is very supportive and motivates us to learn more\n");
fprintf(fp,"He is very friendly to communicate");
fclose(fp);
fp=fopen("Feedback.txt","r");
if(fp==NULL)
{
printf("File opening ending\n");
return 0;
}
while((ch=fgetc(fp))!=EOF);
{
printf("%c",ch);
}
fclose(fp);
return 0;
}