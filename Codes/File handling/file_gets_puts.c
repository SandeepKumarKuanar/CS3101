#include<stdio.h>
#include<string.h>


void main()
{
    FILE *fptr;
    char c, name[3][50] = {"Durga", "Durgatinashini maa", "Mahishashurmardini"}, buff[100];
    int i;

    /*fptr = fopen("Data2.txt", "w");

    for(i = 0; i < 3 ; i++)
    {
        fputs(name[i], fptr);
        fputs("\n", fptr);
    }    

    fclose(fptr);*/

    fptr = fopen("Data2.txt", "r");

    

    while (fgets(buff, 100, fptr) != NULL)
    {
        printf("*%s", buff);
       
    }
    
	fclose(fptr);


}
