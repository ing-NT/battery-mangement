
//--------------------------------------------------------------------------*
// 文件名 : PIT.h                                                           *
// 说  明 : (1)该头文件为PIT构件的头文件                                    *
//          (2)在需要用到PIT的地方，直接 Include "PIT.h"                    *
//          (3)为了避免重复包含相同的文件，使用                             *
//             #ifndef...#define...#endinf句法                              *
//--------------------------------------------------------------------------*
 #ifndef PIT_H
 #define PIT_H

 //头文件包含，及宏定义区

    // 头文件包含 
                 //总头文件

    //开放或禁止PIT0溢出中断
    #define EnablePIT(channel)           PITINTE |= (1<<channel)    //开放定时器溢出中断
    #define DisablePIT(channel)          PITINTE &= ~(1<<channel)  //禁止定时器溢出中断


 //构件函数声明区

    //TimerInit:定时器初始化函数--------------------------------------------*
    //功  能:定时器初始化，中断一次时间为1/2秒                              *
    //参  数:channel==0~7, MUXSEL:0-选择微时基0；1-选择微时基1
    // MTLD:填入微定时器加载寄存器的值， LD：填入通道加载寄存器的值         *                                                             *
    //返  回:无                                                             *
    //----------------------------------------------------------------------*
    void PITInit(uint8 channel,uint8 MUXSEL,uint8 MTLD,uint16 LD);
    void init_PIT0(void);
    void init_PIT1(void);
    //----------------------------------------------------------------------*
    //函数名: SecAdd1(计时函数)                                             *
    //功  能: 以秒为最小单位递增时,分,秒缓冲区的值(00:00:00-23:59:59)       *
    //参  数: *p:计数变量的首地址                                           *
    //返  回: 无                                                            *
    //----------------------------------------------------------------------*

#endif