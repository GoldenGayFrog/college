#include <stdio.h>

int main(void)
{
  /* Array is just a variable that are contiguous in memory
   * And it is introduced in c99. It is called VLA or Variable Length Array */
  char nama_panggilan[20], kampus[3], nama_software[10];
  int umur, jumlah_mahasiswa;

  printf("Masukkan nama panggilan: \n");
  /* gets(nama_panggilan);
   * This function is deprecated in C99 because the major flaw that is has.
   * The best way to use it is using another function called fgets
   * Check The manpages for more clearer explanation */
  fgets(nama_panggilan, sizeof(nama_panggilan), stdin);

  printf("Masukkan umur: \n");
  /* scanf is also a bad way to get an input. Read the manpages for more
   * clearer explanation.
   * Why scanf is bad? It is because the scanf doesn't check the limit
   * of the input. And because of that, User input can make the program
   * crash or does something bad. */
  scanf("%d",&umur);

  printf("Masukkan nama kampus: \n");
  fgets(kampus, sizeof(kampus), stdin);

  printf("Belajar menggunakan software apa? \n");
  fgets(nama_software, sizeof(nama_software), stdin);

  printf("berapa jumlah mahasiswa dikelas kamu? \n");
  scanf("%d", &jumlah_mahasiswa);

  printf("---------------------------\n \
          Hai! aku %s, ini kodeku. Umurku %d, softwarenya %s, \
          jumlah teman kelasku %d, kuliah di %s", \
          nama_panggilan, umur, nama_software, jumlah_mahasiswa, kampus);
}
