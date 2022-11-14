#include<stdio.h>
#include<stdlib.h>
int main ()
{
char infile[200],outfile[200],temp ;
char outchar;
FILE *file1, *file2 ;
printf("\nEnter the file name:");
scanf("%s", outfile);

printf ("\nEnter the decrypted name:");
scanf("%s", infile);

file1=fopen(outfile,"w");
if (file1==NULL){
    printf("\nFile does not exist");
    exit(0);
}
else
{
file2=fopen(infile,"r");
temp=fgetc(file1);
while(temp!=EOF){
    outchar=(int)temp;
    outchar=outchar+16 ;
    fprintf(file2,"%c",ascii);
    temp=fgetc(file1);

}
fclose(file2);
}
fclose(file1);
printf("\n File is decrypted %s",infile);
return 0;

}