/*11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”*/
#include<stdio.h>
int main()
{      int HH,MM;
    printf("input the formet-\"HH:MM\"");
    scanf("%d:%d",&HH,&MM);
printf("\"%d hour and %d minute\"",HH,MM);
    return 0;
}