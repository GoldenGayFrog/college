#include <stdio.h>

int main(void)
{
  double duidSofia = 250.000, h1, h2, h3, hargatotal, diskon, bayar;

  /*
  sunscreen = 58.000;
  lipbalm = 25.000;
  handcream = 15.000;
  */

  h1 = 58.000 * 2;    // Suncreen
  h2 = 25.000 * 3;    // lipbalm
  h3 = 15.000;        // handcream

  hargatotal = h1 + h2 + h3;
  diskon = hargatotal * 0.15;
  bayar = hargatotal - diskon;

  /* Price Lists */
  fprintf(stdout,"Harga sunscreen :%.3f\n"  \
                 "Harga lipbalm   :%.3f\n"  \
                 "Harga handcream :%.3f\n", \
                 h1, h2, h3);

  /* Discount */
  fprintf(stdout, "Karena diskon harganya jadi..\n"  \
                  "Harga discount  : %.3f\n"         \
                  "Harga total     : %.3f\n"         \
                  "Kembalian       : %.3f\n",        \
                  diskon, bayar, duidSofia - bayar);

  /* Programs exited correctly */
  return 0;
}
