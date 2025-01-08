# include <stdio.h>
int main()
{
    int cp;
    printf ("enter coast price :");
    scanf ("%d",&cp);
    int sp;
    printf ("enter selling price :");
    scanf ("%d",&sp);
    if (sp>cp) {
        printf ("profit");
    }
     else {
        printf ("loss");
    }
    if (cp==sp) {
        printf ("no profit , no loss");
    }
     return 0;
}