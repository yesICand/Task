#include <stdio.h>

int main(){
    //deklarasi 
    double totalbelanja, disc, totalpembayaran;
    int transaksi;

    //input total belanja
    printf("Masukan Total Belanja:Rp.");
    scanf("%lf",&totalbelanja);

    //input jumlah transaksi
    printf("masukan jumlah transaksi Bulan Ini:");
    scanf("%d",&transaksi);

    //Discount berdasarkan ketentuan 
    if (totalbelanja < 200000)
    {
        disc = 0.0;
    }
    else if (totalbelanja <= 500000)
    {
        disc = 0.1; // 10% = 10/100 = 0,1
    }
    else if (totalbelanja <= 1000000)
    {
        disc = 0.2; //20% = 20/100 = 0,2
    }
    else if (totalbelanja > 1000000)
    {
        disc = 0.3; //30% = 30/100 = 0,3
    }
    
    if (transaksi == 4)
    {
        disc += 0.2; 
    }

    //hasil pembayaran setelah Discount
    totalpembayaran = totalbelanja - (totalbelanja * disc);

    printf("Diskon yang diperoleh: %.f%%\n", disc * 100);
    printf("Harga yang harus dibayar setelah diskon: Rp. %.2f\n", totalpembayaran);

    return 0;
}
