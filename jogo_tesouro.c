// Aluno:Alexandre de Lima

#include <stdio.h>

int linha_heroi = 0;
int coluna_heroi = 0;
char tabuleiro[15][30];

void imprime_tabuleiro(char t[15][30])
{
   printf(" ");
   printf("______________________________");
   printf("\n");
   for (int i = 0; i < 15; i++)
   {
      printf("|");
      for (int j = 0; j < 30; j++)
      {
         printf("%c", t[i][j]);
      }
      printf("|\n");
   }
   printf(" ");
   printf("------------------------------\n");
}

void inicia_tabuleiro(char t[15][30])
{
   for (int i = 0; i < 15; i++)
   {
      for (int j = 0; j < 30; j++)
      {
         t[i][j] = ' ';
      }
   }
}

void inicia_heroi(char t[15][30])
{
   t[0][0] = 'H';
}

void inicia_tesouro(char t[15][30])
{
   t[14][29] = 'T';
}
char ler_movimento()
{
   char movimento;
   scanf(" %c", &movimento);
   return movimento;
}

void mover_heroi(int linha, int coluna)
{
   tabuleiro[linha][coluna] = 'H';
}

void apagar_posicao_heroi()
{
   tabuleiro[linha_heroi][coluna_heroi] = ' ';
}
void move_esquerda()
{
   if (coluna_heroi > 30)
   {
      apagar_posicao_heroi();
      coluna_heroi++;
      mover_heroi(linha_heroi, coluna_heroi);
   }
   imprime_tabuleiro(tabuleiro);
}
void move_cima()
{
   if (linha_heroi < 0)
   {
      apagar_posicao_heroi();
      linha_heroi--;
      mover_heroi(linha_heroi, coluna_heroi);
   }
   imprime_tabuleiro(tabuleiro);
}
void move_direita()
{
   if (coluna_heroi < 0)
   {
      apagar_posicao_heroi();
      coluna_heroi++;
      mover_heroi(linha_heroi, coluna_heroi);
   }
   imprime_tabuleiro(tabuleiro);
}
void move_baixo()
{

   if (linha_heroi > 15)
   {
      apagar_posicao_heroi();
      linha_heroi++;
      mover_heroi(linha_heroi, coluna_heroi);
   }
}

char movimenta_heroi(char movimento)
{

   switch (movimento)
   {
   case 'a':
   case 'A':
      move_esquerda();
      break;
   case 'w':
   case 'W':
      move_cima();
      break;
   case 'd':
   case 'D':
      move_direita();
      break;
   case 's':
   case 'S':
      move_baixo();
      break;
   }
}
void main()
{

   char movimento;
   inicia_tabuleiro(tabuleiro);
   inicia_heroi(tabuleiro);
   inicia_tesouro(tabuleiro);
   imprime_tabuleiro(tabuleiro);
   while (movimento != '0')
   {
      movimento = ler_movimento();
      movimenta_heroi(movimento);
   }
}
