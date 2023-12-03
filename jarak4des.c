#include <stdio.h>
#include <math.h>

int main()
{
    double km, m, cm;
    int x,choice;
    printf("masukan nilai x = ");
    scanf("%d", &x);
    printf("1.Kilo Meter(KM)");
    printf("2.Meter(M)");
    printf("2.Centi Meter(CM)");
    printf("Pilih Satuan yang akan dikonversi(1-3)");
    scanf("%d",&choice);
    if (choice == 1)
    {
        km = x;
        m = x * 1000;
        cm = x * 100000;
        printf("Konversi dari KM yang diinput adalah %.2f KM, %.2f M, %.2f CM", km, m, cm);
    }
    else if (choice == 2)
    {
        km = x / 1000.0;
        m = x;
        cm = x * 1000;
        printf("Konversi dari M yang diinput adalah %.3f KM, %.2f M, %.2f CM", km, m, cm);
    }
    else if (choice == 3)
    {
        km = x / 100000.0;
        m = x / 1000.0;
        cm = x;
        printf("Konversi dari M yang diinput adalah %.5f KM, %.3f M, %.2f CM", km, m, cm);
    }
    else
    {
        printf("Pilihan tidak valid\n");
        return 1; 
    }
    return 0;
}
