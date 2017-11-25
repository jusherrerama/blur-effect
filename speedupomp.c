#include <stdlib.h>
#include <stdio.h>

int main ( int argc, char **argv )
{
 	FILE *fp,*pf;

 	int valor;
  float secuencial,paralelo,aux;


  const char *result[21];
  const char *speed[21];
  result[0] = "romp/1080k3.txt";
  result[1] = "romp/1080k5.txt";
  result[2] = "romp/1080k7.txt";
  result[3] = "romp/1080k9.txt";
  result[4] = "romp/1080k11.txt";
  result[5] = "romp/1080k13.txt";
  result[6] = "romp/1080k15.txt";
  result[7] = "romp/720k3.txt";
  result[8] = "romp/720k5.txt";
  result[9] = "romp/720k7.txt";
  result[10] = "romp/720k9.txt";
  result[11] = "romp/720k11.txt";
  result[12] = "romp/720k13.txt";
  result[13] = "romp/720k15.txt";
  result[14] = "romp/4kk3.txt";
  result[15] = "romp/4kk5.txt";
  result[16] = "romp/4kk7.txt";
  result[17] = "romp/4kk9.txt";
  result[18] = "romp/4kk11.txt";
  result[19] = "romp/4kk13.txt";
  result[20] = "romp/4kk15.txt";

  speed[0] = "romp/speedup1080k3.txt";
  speed[1] = "romp/speedup1080k5.txt";
  speed[2] = "romp/speedup1080k7.txt";
  speed[3] = "romp/speedup1080k9.txt";
  speed[4] = "romp/speedup1080k11.txt";
  speed[5] = "romp/speedup1080k13.txt";
  speed[6] = "romp/speedup1080k15.txt";
  speed[7] = "romp/speedup720k3.txt";
  speed[8] = "romp/speedup720k5.txt";
  speed[9] = "romp/speedup720k7.txt";
  speed[10] = "romp/speedup720k9.txt";
  speed[11] = "romp/speedup720k11.txt";
  speed[12] = "romp/speedup720k13.txt";
  speed[13] = "romp/speedup720k15.txt";
  speed[14] = "romp/speedup4kk3.txt";
  speed[15] = "romp/speedup4kk5.txt";
  speed[16] = "romp/speedup4kk7.txt";
  speed[17] = "romp/speedup4kk9.txt";
  speed[18] = "romp/speedup4kk11.txt";
  speed[19] = "romp/speedup4kk13.txt";
  speed[20] = "romp/speedup4kk15.txt";
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
