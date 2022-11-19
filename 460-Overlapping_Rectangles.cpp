/*#####       Md. Walid Bin khalid Aunkon           #####*/
/*#####       Sr. Software Engineer (Unity)         #####*/
/*#####       Email:  waunkon@gmail.com             #####*/
/*#####       Mobile No:  +88-01916-492926          #####*/
#include <stdio.h>
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int xl1, yl1, xr1, yr1, xl2, yl2, xr2, yr2;
        scanf("%d %d %d %d", &xl1, &yl1, &xr1, &yr1);
        scanf("%d %d %d %d", &xl2, &yl2, &xr2, &yr2);
        xl1 = xl1 > xl2 ? xl1 : xl2;
        yl1 = yl1 > yl2 ? yl1 : yl2;
        xr1 = xr1 < xr2 ? xr1 : xr2;
        yr1 = yr1 < yr2 ? yr1 : yr2;
        if(xl1 >= xr1 || yl1 >= yr1)
            printf("No Overlap\n");
        else
            printf("%d %d %d %d\n", xl1, yl1, xr1, yr1);
        if(t) printf("\n");
    }

    return 0;
}