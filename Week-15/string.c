#include <stdio.h>
#include <string.h>

int main()
{
char pesan[] = "Good to see you,";
char txt[] = "We are the so-called \"Hebat\" from the \'PCR\'-Indonesia.";
char firstName[] = "John";
char lastName[]="Ettah";
char str1[50]="Hello";
char str2[50]=" Sister....";

// printf("%s %s!", pesan, firstName);
strcat(str1, str2);
printf("\nstrcat1:%s\n", str1);
printf("isi str2(sebelum): %s\n", str2);
strcpy(str2, str1);
printf("isi str2(setelah): %s\n", str2);
// menggabungkan karakter
strcat(str1, str2);
printf("\nstrcat2:%s\n", str1);
//strlen untuk menghitung banyak karakter
printf("pesan: %s\n",pesan);
printf("\npesen berisi %d karakter\n", strlen(pesan));
printf("%d\n", sizeof(firstName));
printf("%d\n", strlen(firstName));
printf("\n%s", txt);

return 0;
}
