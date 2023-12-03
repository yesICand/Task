#include <stdio.h>

int main() {
    char opr1, opr2;
    float angka1, angka2, angka3, hasil;

    printf("Masukkan Perhitungan: ");
    scanf("%f %c %f %c %f", &angka1, &opr1, &angka2, &opr2, &angka3);

    switch (opr1) {
        case '*':
            hasil = angka1 * angka2 / angka3;
            (angka2 * angka3);
            ((opr2 == '+') ? angka2 + angka3 : angka2 - angka3);
            break;
        case '/':
            hasil = (angka2 != 0) ? angka1 / angka2 * angka3:
            (angka2 / angka3);
            ((opr2 == '+') ? angka2 + angka3 : angka2 - angka3);
            (printf("Bilangan tidak bisa dibagi 0"), 0);
            break;
        case '+':
            hasil = angka1 + ((opr2 == '*') ? angka2 * angka3 : (opr2 == '/') ? angka2 / angka3 : (opr2 == '+') ? angka2 + angka3 : angka2 - angka3);
            break;
        case '-':
            hasil = angka1 - ((opr2 == '*') ? angka2 * angka3 : (opr2 == '/') ? angka2 / angka3 : (opr2 == '+') ? angka2 + angka3 : angka2 - angka3);
            break;
        default:
            printf("Operator tidak valid.\n");
            return 1;
    }

    printf("Result %.3f %c %.3f %c %.3f = %.3f\n", angka1, opr1, angka2, opr2, angka3, hasil);
    return 0;
}
