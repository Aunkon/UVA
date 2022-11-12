/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char name[n][100];
    char song[16][9] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &name[i]);
    }
    int i = 0, j = 0;
    if (n < 16)
    {
        for (i = 0; i < 16; i++)
        {
            printf("%s: %s\n", name[j++], song[i]);
            if (j == n)
                j = 0;
        }
    }
    else
    {
        for (i = 0; i <n; i++)
        {
            printf("%s: %s\n", name[i], song[j++]);
            if (j == 16)
                j = 0;
        }
        i=0;
        for (j; j < 16; j++)
        {
            printf("%s: %s\n", name[i++], song[j]);
            if (i == n)
                i = 0;
        }        
    }
    return 0;
}