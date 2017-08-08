/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main()
{

  char c, vec[200];
  int words = 0, i=0, j;

  while (c != '\n')
  {
    scanf("%c", &c);
    vec[i] = c;
    i++;
  }
  for(j=0;j<=(i-1);j++)
  {
    if ((vec[j] == ',') || (vec[j] == '!') || (vec[j] == '-') ||  (vec[j] == ' ') || (vec[j] == '.') || (vec[j] == '\n'))
    {
      if (j!=0)
      {
        if((vec[j-1] == ',') || (vec[j-1] == '!') || (vec[j-1] == '-') ||  (vec[j-1] == ' ') || (vec[j-1] == '.'))
        {
            j=j;
        }
        else
        {
            words++;
        }
      }
    }
    else if ((vec[j]<='9') && (vec[j]>='0')  && ((vec[j+1]=='.') || (vec[j+1]==',')))
    {
      if ((vec[j+2]=='.') || (vec[j+2]==',') || (vec[j+2]==' ') || (vec[j+2] == '\n'))
      {
          j=j;
      }
      else
      {
        words--;
      }

      }





  }


    printf("%d\n", words);
    return 0;
}
