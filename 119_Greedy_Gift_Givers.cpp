/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/
// #include <iostream>
// using namespace std;
#include <stdio.h>
int strlen(char a[])
{
    int count;
    for (count = 0; count < a[count]; count++)
        ;
    return count;
}

bool strcmp(char a[], char b[])
{
    if (strlen(a) != strlen(b))
        return 0;

    int count = strlen(a);
    for (int i = 0; i < count; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, c = 0;
    while (scanf("%d\n", &n) != EOF)
    {
        char names[n][13];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &names[i]);
        }
        int worths[n] = {0}, spends[n] = {0}, spend, toGift;
        char name[13];
        for (int i = 0; i < n; i++)
        {
            scanf("%s %d %d", &name, &spend, &toGift);
            int index;
            if (toGift == 0)
            {
                spend = 0;
            }
            else
            {
                spend -= spend % toGift;
            }
            for (int j = 0; j < n; j++)
            {
                if (strcmp(name, names[j]))
                {
                    index = j;
                    break;
                }
            }
            spends[index] += spend;
            int gift = 0;
            if (spend != 0 && toGift != 0)
                gift = spend / toGift;
            for (int j = 0; j < toGift; j++)
            {
                scanf("%s", &name);
                for (int k = 0; k < n; k++)
                {
                    if (strcmp(name, names[k]))
                    {
                        worths[k] += gift;
                        break;
                    }
                }
            }
        }
        if (c > 0)
            printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%s %d\n", names[i], worths[i] - spends[i]);
        }
        c++;
    }
    return 0;
}