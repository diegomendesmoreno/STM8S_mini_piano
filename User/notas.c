/* Projeto   : mini_piano
 * Arquivo   : notas.c
 * Descrição :
 */

/* Includes */
#include "notas.h"

/* Variáveis globais */
uint16_t valores_pwm[2][12];

/* Subrotina : notas_PWM
 * Descrição : 
 */
void notas_PWM(void)
{
  //C
  valores_pwm[0][0] = 15;
  valores_pwm[1][0] = 3816;
  //Csus
  valores_pwm[0][1] = 15;
  valores_pwm[1][1] = 3609;
  //D
  valores_pwm[0][2] = 15;
  valores_pwm[1][2] = 3400;
  //Dsus
  valores_pwm[0][3] = 15;
  valores_pwm[1][3] = 3214;
  //E
  valores_pwm[0][4] = 15;
  valores_pwm[1][4] = 3029;
  //F
  valores_pwm[0][5] = 15;
  valores_pwm[1][5] = 2864;
  //Fsus
  valores_pwm[0][6] = 15;
  valores_pwm[1][6] = 2702;
  //G
  valores_pwm[0][7] = 15;
  valores_pwm[1][7] = 2550;
  //Gsus
  valores_pwm[0][8] = 15;
  valores_pwm[1][8] = 2409;
  //A
  valores_pwm[0][9] = 15;
  valores_pwm[1][9] = 2272;
  //Asus
  valores_pwm[0][10] = 15;
  valores_pwm[1][10] = 2145;
  //B
  valores_pwm[0][11] = 15;
  valores_pwm[1][11] = 2023;
}