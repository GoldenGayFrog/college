#include <time.h>
#define UPAH 45000

main (){
    char pw, nama[20];
    int tahun, jamKerja;

    printf("Masukkan Password\n");
    pw=getch();

    if (pw == 'x') {
        printf("Masukkan"
               "\n- Nama"
               "\n- Tahun Lahir"
               "\n- Jam kerja\n"
               "\nDengan format [NAMA] *enter* [TAHUN] *enter* [JAM]\n"
               );

        scanf("%s", &nama);
        scanf("%d", &tahun);
        scanf("%d", &jamKerja);

        printf("Data Karyawan\n"
               "Nama: %s\n"
               "Usia: %d\n"
               "Gaji: %d\n"
               ,nama, 2024 - tahun, jamKerja * UPAH);
    } else {printf("Password Salah");}
}
