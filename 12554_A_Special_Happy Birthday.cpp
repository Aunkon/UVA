/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char name[n][100];
    char song[16][9] = {"Happy", "birthday", "to", "you","Happy", "birthday", "to", "you","Happy", "birthday", "to", "Rujia","Happy", "birthday", "to", "you"};
    int div = 16 % n;
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&name[i]);
    }    
    return 0;
}