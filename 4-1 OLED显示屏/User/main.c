#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

uint8_t KeyNum;

int main(void)
{
    OLED_Init();
	
	OLED_ShowChar(1, 1, 'A');
	OLED_ShowString(1, 1, "HelloWorld");
	OLED_ShowNum(2, 1, 12345, 5);
	OLED_ShowSignedNum(2, 7, -66, 2); //显示带符号数，符号不算入字长
	OLED_ShowHexNum(3, 1, 0xAA55, 4);
	
//	OLED_Clear(); //清屏
	//若想清楚某位置的字符，可使用OLED_ShowString(x, x, "空格");
       while (1)
     {
	  
     }
}
