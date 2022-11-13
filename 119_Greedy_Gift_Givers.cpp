/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/
#include<stdio.h>

int strlen(char a[])
{
    int count;
    for ( count = 0; count < a[count]; count++);
    return count;
}

bool strcmp(char a[], char b[])
{
    if(strlen(a)!=strlen(b))
        return 0;

    int count = strlen(a);
    for (int i = 0; i < count; i++)
    {
        if (a[i]!=b[i])
            return 0;        
    }
    return 1;
}

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        char names[n][12];
        for (int i = 0; i < n; i++)
        {
            scanf("%s",&names[i]);
        }
        int worths[n], spends[n];
        char tName[12];
        for (int i = 0; i < n; i++)
        {
            scanf("%s",&tName);
            for (int j = 0; j < n; j++)
            {
                if(strcmp(tName, names[i]))
                    spends[i] = 
            }            
        }        
    }    
    return 0;
}