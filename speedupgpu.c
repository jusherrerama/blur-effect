
#include <stdlib.h>
#include <stdio.h>

int main ( int argc, char **argv )
{
 	FILE *fp,*pf;

 	int valor;
  float secuencial,paralelo,aux;


  const char *result[21];
  const char *speed[21];
  result[0] = "rgpu/1080k3.txt";
  result[1] = "rgpu/1080k5.txt";
  result[2] = "rgpu/1080k7.txt";
  result[3] = "rgpu/1080k9.txt";
  result[4] = "rgpu/1080k11.txt";
  result[5] = "rgpu/1080k13.txt";
  result[6] = "rgpu/1080k15.txt";
  result[7] = "rgpu/720k3.txt";
  result[8] = "rgpu/720k5.txt";
  result[9] = "rgpu/720k7.txt";
  result[10] = "rgpu/720k9.txt";
  result[11] = "rgpu/720k11.txt";
  result[12] = "rgpu/720k13.txt";
  result[13] = "rgpu/720k15.txt";
  result[14] = "rgpu/4kk3.txt";
  result[15] = "rgpu/4kk5.txt";
  result[16] = "rgpu/4kk7.txt";
  result[17] = "rgpu/4kk9.txt";
  result[18] = "rgpu/4kk11.txt";
  result[19] = "rgpu/4kk13.txt";
  result[20] = "rgpu/4kk15.txt";

  speed[0] = "rgpu/speedup1080k3.txt";
  speed[1] = "rgpu/speedup1080k5.txt";
  speed[2] = "rgpu/speedup1080k7.txt";
  speed[3] = "rgpu/speedup1080k9.txt";
  speed[4] = "rgpu/speedup1080k11.txt";
  speed[5] = "rgpu/speedup1080k13.txt";
  speed[6] = "rgpu/speedup1080k15.txt";
  speed[7] = "rgpu/speedup720k3.txt";
  speed[8] = "rgpu/speedup720k5.txt";
  speed[9] = "rgpu/speedup720k7.txt";
  speed[10] = "rgpu/speedup720k9.txt";
  speed[11] = "rgpu/speedup720k11.txt";
  speed[12] = "rgpu/speedup720k13.txt";
  speed[13] = "rgpu/speedup720k15.txt";
  speed[14] = "rgpu/speedup4kk3.txt";
  speed[15] = "rgpu/speedup4kk5.txt";
  speed[16] = "rgpu/speedup4kk7.txt";
  speed[17] = "rgpu/speedup4kk9.txt";
  speed[18] = "rgpu/speedup4kk11.txt";
  speed[19] = "rgpu/speedup4kk13.txt";
  speed[20] = "rgpu/speedup4kk15.txt";
	int y,x;
  for( y=0;y<21;y+=1){
    fp = fopen ( result[y], "r" );
    pf = fopen( speed[y], "a");
    if (pf == NULL){
          printf("El fichero no se puede abrir");
          exit(1);
      }
    fscanf (fp, "%d", &valor);
    fscanf (fp, "%f", &secuencial);
    fprintf(pf,"   %i    1  \n",valor);

    for( x=2;x<33;x+=1){
      fscanf (fp, "%d", &valor);
      fscanf (fp, "%f", &paralelo);
      aux = (secuencial/paralelo);
      printf("   %i    %f   \n",valor,aux );
      fprintf(pf,"   %i    %f   \n",valor,aux);
      }
    fclose(pf);
   	fclose ( fp );
  }

 	return 0;
}
