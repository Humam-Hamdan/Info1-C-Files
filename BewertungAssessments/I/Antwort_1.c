/************************************************/
/* Assessment I (08.11.2024)                    */
/* auto-generated .c file from text box input   */
/*                                              */
/* Humam Hamdan, 2427300                        */
/************************************************/

#include <stdio.h>

// Berechnung der Fakultät n! = 1 · 2 · … · (n − 1) · n . einer einzugebenden Zahl n
int main(void)
{
    // benötigte Variablen intinilalisieren
    int n, i, fakultaet;

    // Zahl n, die mit der Funktion n! brechnet werden eingeben und lesen
    printf("n eingeben: ");
    scanf("%d", &n);

    // Varable intinilalisieren
    fakultaet = 1;

    // Für Fakiltät rechnen wir bis Null, also n-- mit var= var mal i.
    for (i = n; i > 0 ; i = i - 1)
        {fakultaet = fakultaet * i;}

    // Ausgabe
    printf("%d! = %d\n", n, fakultaet);
}
