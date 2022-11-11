/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/

#include <stdio.h>

int abs(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main()
{
    int L;
    while (scanf("%d", &L) && L != 0)
    {
        char S[L];
        scanf("%s", &S);
        int iR = L, iD = L, iZ = L;
        int minDist = L, dist = L;
        for (int i = 0; i < L; i++)
        {
            if (minDist == 0)
                break;
            if(S[i]=='Z')
            {
                minDist = 0;
                break;
            }
            else if(S[i]=='R')
            {
                iR = i;
                if(iD!=-1)
                {
                    dist = abs(iR,iD);
                }
            }
            else if(S[i]=='D')
            {
                iD = i;
                if(iR!=-1)
                {
                    dist = abs(iR,iD);
                }
            }
            else
            {
                continue;
            }
            
            if (minDist > dist)
                minDist = dist;
        }
        printf("%d\n", minDist);
    }
    return 0;
}
