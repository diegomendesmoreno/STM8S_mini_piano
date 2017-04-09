/* Projeto         : STM8S_mini_piano
 * Mano dos código : Diego
 * MCU             : STM8S105C6
 * Compilador      : STTools Cosmic
 * Data            : 31/10/2015
 * Descrição       : Uma oitava de um piano feito com PWM.
 */

/* Includes */
#include "stm8s.h"
#include "typedef_gpio.h"
#include "notas.h"

/* Defines de usuário */


/* Declaração de Subrotinas */
static void GPIO_Config(void);
static void TIM1_Config_PWM(void);

/* Variáveis globais */
uint16_t prescaler = 15;
uint16_t period = 999;


main()
{
  /* Configuração de Clock      *
   * Prescaler = 1              *
   * Clock = 16MHz              */
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  
  /* Inicializações */
  GPIO_Config();
  TIM1_Config_PWM();
  
  //Permitir interrupções
  enableInterrupts();
  
  notas_PWM();
  
  while(1)
  {
    //C
    if(C == 0)
    {
      prescaler = valores_pwm[0][0];
      period    = valores_pwm[1][0];
      TIM1_Config_PWM();
      while(!C)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //Csus
    else if(Csus == 0)
    {
      prescaler = valores_pwm[0][1];
      period 	= valores_pwm[1][1];
      TIM1_Config_PWM();
      while(!Csus)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //D
    else if(D == 0)
    {
      prescaler = valores_pwm[0][2];
      period 	= valores_pwm[1][2];
      TIM1_Config_PWM();
      while(!D)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //Dsus
    else if(Dsus == 0)
    {
      prescaler = valores_pwm[0][3];
      period 	= valores_pwm[1][3];
      TIM1_Config_PWM();
      while(!Dsus)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //E
    else if(E == 0)
    {
      prescaler = valores_pwm[0][4];
      period 	= valores_pwm[1][4];
      TIM1_Config_PWM();
      while(!E)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //F
    else if(F == 0)
    {
      prescaler = valores_pwm[0][5];
      period 	= valores_pwm[1][5];
      TIM1_Config_PWM();
      while(!F)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //Fsus
    else if(Fsus == 0)
    {
      prescaler = valores_pwm[0][6];
      period 	= valores_pwm[1][6];
      TIM1_Config_PWM();
      while(!Fsus)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //G
    else if(G == 0)
    {
      prescaler = valores_pwm[0][7];
      period 	= valores_pwm[1][7];
      TIM1_Config_PWM();
      while(!G)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //Gsus
    else if(Gsus == 0)
    {
      prescaler = valores_pwm[0][8];
      period 	= valores_pwm[1][8];
      TIM1_Config_PWM();
      while(!Gsus)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //A
    else if(A == 0)
    {
      prescaler = valores_pwm[0][9];
      period 	= valores_pwm[1][9];
      TIM1_Config_PWM();
      while(!A)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //Asus
    else if(Asus == 0)
    {
      prescaler = valores_pwm[0][10];
      period 	= valores_pwm[1][10];
      TIM1_Config_PWM();
      while(!Asus)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
    //B
    else if(B == 0)
    {
      prescaler = valores_pwm[0][11];
      period 	= valores_pwm[1][11];
      TIM1_Config_PWM();
      while(!B)
      {
        TIM1_CtrlPWMOutputs(ENABLE);
      }
      TIM1_CtrlPWMOutputs(DISABLE);
    }
  }
}

/* Subrotina : GPIO_Config
 * Descrição : 
 */
static void GPIO_Config(void)
{
  //Outros
  GPIO_Init(LED_conf, GPIO_MODE_OUT_PP_HIGH_SLOW);      //LED
  GPIO_Init(TIM1_CH2_conf, GPIO_MODE_OUT_PP_LOW_FAST);  //TIM1_CH2
  //Teclado
  GPIO_Init(C_conf, GPIO_MODE_IN_PU_NO_IT);	//C
  GPIO_Init(Csus_conf, GPIO_MODE_IN_PU_NO_IT);	//C#
  GPIO_Init(D_conf, GPIO_MODE_IN_PU_NO_IT);	//D
  GPIO_Init(Dsus_conf, GPIO_MODE_IN_PU_NO_IT);	//D#
  GPIO_Init(E_conf, GPIO_MODE_IN_PU_NO_IT);	//E
  GPIO_Init(F_conf, GPIO_MODE_IN_PU_NO_IT);	//F
  GPIO_Init(Fsus_conf, GPIO_MODE_IN_PU_NO_IT);	//F#
  GPIO_Init(G_conf, GPIO_MODE_IN_PU_NO_IT);	//G
  GPIO_Init(Gsus_conf, GPIO_MODE_IN_PU_NO_IT);	//G#
  GPIO_Init(A_conf, GPIO_MODE_IN_PU_NO_IT);	//A
  GPIO_Init(Asus_conf, GPIO_MODE_IN_PU_NO_IT);	//A#
  GPIO_Init(B_conf, GPIO_MODE_IN_PU_NO_IT);	//B
}

/* Subrotina : TIM1_Config_PWM
 * Descrição : 
 */
static void TIM1_Config_PWM(void)
{
  //Inicialização do TIM1
  TIM1_TimeBaseInit(prescaler, TIM1_COUNTERMODE_UP, period, 0);
  
  //Config do PWM1 - Duty Cycle = 50%
  TIM1_OC2Init(TIM1_OCMODE_PWM1, TIM1_OUTPUTSTATE_ENABLE, TIM1_OUTPUTNSTATE_DISABLE, ((period+1)/2), TIM1_OCPOLARITY_HIGH, TIM1_OCNPOLARITY_LOW, TIM1_OCIDLESTATE_RESET, TIM1_OCNIDLESTATE_RESET);
  TIM1_OC2PreloadConfig(ENABLE);
  
  //Preload o Registrador Auto reload
  TIM1_ARRPreloadConfig(ENABLE);
  
  //Ativa o periférico TIM1
  TIM1_Cmd(ENABLE);
  
  //Ativa as saídas do TIM1
  TIM1_CtrlPWMOutputs(DISABLE);
}