#include <stdio.h>
#include <time.h>

int main()
{
  time_t t = time(NULL);
  struct tm dataHora = *localtime(&t);
  printf("Agora: %02d/%02d/%d  %02d:%02d:%02d\n", dataHora.tm_mday, dataHora.tm_mon + 1, dataHora.tm_year + 1900, dataHora.tm_hour, dataHora.tm_min, dataHora.tm_sec);
  
  return 1;
}