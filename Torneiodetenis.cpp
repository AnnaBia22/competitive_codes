//Torneio de Tênis - OBI 2021
#include <iostream>

using namespace std;

int main()
{
    char j1, j2, j3, j4 ,j5 ,j6;
    scanf ("%c %c %c %c %c %c", &j1, &j2, &j3, &j4, &j5, &j6);
    int i;
    i=0;
    if (j1=='V') {
        i++;
    }
     if (j2=='V') {
        i++;
    }
     if (j3=='V') {
        i++;
    }
     if (j4=='V') {
        i++;
    }
     if (j5=='V') {
        i++;
    }
     if (j6=='V') {
        i++;
    }
     if (i==5 || i==6) {
         printf ("1");
     }
     if (i==4 || i==3) {
         printf ("2");
     }
     if (i==2 || i==1) {
         printf ("3");
     }
     if (i==0) {
         printf ("-1");
     }
    return 0;
}
