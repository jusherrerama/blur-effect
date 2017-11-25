#include <stdlib.h>
#include <stdio.h>

int main ( int argc, char **argv )
{
 	FILE *fp,*pf;

 	int valor;
  float secuencial,paralelo,aux;


  const char *result[21];
  const char *speed[21];
  result[0] = "results/1080k3.txt";
  result[1] = "results/1080k5.txt";
  result[2] = "results/1080k7.txt";
  result[3] = "results/1080k9.txt";
  result[4] = "results/1080k11.txt";
  result[5] = "results/1080k13.txt";
  result[6] = "results/1080k15.txt";
  result[7] = "results/720k3.txt";
  result[8] = "results/720k5.txt";
  result[9] = "results/720k7.txt";
  result[10] = "results/720k9.txt";
  result[11] = "results/720k11.txt";
  result[12] = "results/720k13.txt";
  result[13] = "results/720k15.txt";
  result[14] = "results/4kk3.txt";
  result[15] = "results/4kk5.txt";
  result[16] = "results/4kk7.txt";
  result[17] = "results/4kk9.txt";
  result[18] = "results/4kk11.txt";
  result[19] = "results/4kk13.txt";
  result[20] = "results/4kk15.txt";

  speed[0] = "results/speedup1080k3.txt";
  speed[1] = "results/speedup1080k5.txt";
  speed[2] = "results/speedup1080k7.txt";
  speed[3] = "results/speedup1080k9.txt";
  speed[4] = "results/speedup1080k11.txt";
  speed[5] = "results/speedup1080k13.txt";
  speed[6] = "results/speedup1080k15.txt";
  speed[7] = "results/speedup720k3.txt";
  speed[8] = "results/speedup720k5.txt";
  speed[9] = "results/speedup720k7.txt";
  speed[10] = "results/speedup720k9.txt";
  speed[11] = "results/speedup720k11.txt";
  speed[12] = "results/speedup720k13.txt";
  speed[13] = "results/speedup720k15.txt";
  speed[14] = "results/speedup4kk3.txt";
  speed[15] = "results/speedup4kk5.txt";
  speed[16] = "results/speedup4kk7.txt";
  speed[17] = "results/speedup4kk9.txt";
  speed[18] = "results/speedup4kk11.txt";
  speed[19] = "results/speedup4kk13.txt";
  speed[20] = "results/speedup4kk15.txt";
	int y , x;
  for( y=0;y<21;y+=1){
    fp = fopen ( result[y], "r" );
    pf = fopen( speed[y], "a");
    if (pf == NULL){
          printf("El fichero no se puede abrir");
          exit(1);
      }
    fscanf (fp, "%d", &valor);
    fscanf (fp, "%f", &secuencial);
    fprintf(pf,"   %i    1   \n",valor);

    for( x=2;x<17;x+=1){
      fscanf (fp, "%d", &valor);
      fscanf (fp, "%f", &paralelo);
      aux = (secuencial/paralelo);
      printf("   %i    %f   \n",x,aux );
      fprintf(pf,"   %i    %f   \n",x,aux);
      }
    fclose(pf);
   	fclose ( fp );
  }

 	return 0;
}
