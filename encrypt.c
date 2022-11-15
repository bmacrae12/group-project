#include<stdio.h>
#include<stdlib.h>
int main ()
{
char infile[200],outfile[200],temp ;
char outchar;
FILE *file1, *file2 ;
printf("\nEnter the file name:");
scanf("%s", infile);

printf("\nEnter the encrypted file:");
scanf("%s", outfile);


file1=fopen(infile,"r");
if (file1==NULL){
    printf("\nFile does not exist");
    exit(0);
}
else
{
file2=fopen(outfile,"w");
temp=fgetc(file1);
while(temp!=EOF){
    outchar=(int)temp;
    if (outchar<32)
    {
    outchar=(outchar-32+144);
    }
    else
    {
        outchar=(outchar-16);
    }
    fprintf(file2,"%0.2x",outchar);
    temp=fgetc(file1);

}
fclose(file2);
}
fclose(file1);
printf("\n File is encrypted %s",outfile);
return 0;

}

