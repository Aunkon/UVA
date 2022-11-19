/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/
#include <stdio.h>
int GCD(int x, int y)
{
    if(y==0)
    return x;
    return GCD(y,x%y);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int step, mod;
    while (scanf("%d %d",&step, &mod)!=EOF)
    {
        printf("%10d%10d    %s\n\n", step, mod, GCD(step, mod)==1?"Good Choice":"Bad Choice");
    }    
    return 0;
}