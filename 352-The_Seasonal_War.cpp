/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/
#include <stdio.h>
int n;
char Process[26][26] = {0}, image[26][26];

int Memset()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Process[i][j] = 0;
        }
    }
    return 0;
}

int DetectEagle(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n)
        return 0;
    if (Process[x][y] != 0 || image[x][y] == '0')
        return 0;
    Process[x][y] = 1;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            DetectEagle(x + i, y + j);
        }
    }
    return 0;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &image[i]);
        }
        Memset();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (image[i][j] == '1' && Process[i][j] == 0)
                {
                    DetectEagle(i, j);
                    count++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", ++t, count);
    }
    return 0;
}