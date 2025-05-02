/*
 * lcd.h
 *
 *  Created on: Mar 10, 2021
 *      Author: MicroEmbedded
 */
#define lcd_en_Pin GPIO_PIN_1
#define lcd_en_GPIO_Port GPIOH
#define lcd_d0_Pin GPIO_PIN_11
#define lcd_d0_GPIO_Port GPIOE
#define lcd_d1_Pin GPIO_PIN_12
#define lcd_d1_GPIO_Port GPIOE
#define lcd_d2_Pin GPIO_PIN_13
#define lcd_d2_GPIO_Port GPIOE
#define lcd_d3_Pin GPIO_PIN_14
#define lcd_d3_GPIO_Port GPIOE
#define lcd_d4_Pin GPIO_PIN_15
#define lcd_d4_GPIO_Port GPIOE
#define lcd_d6_Pin GPIO_PIN_8
#define lcd_d6_GPIO_Port GPIOD
#define lcd_d7_Pin GPIO_PIN_9
#define lcd_d7_GPIO_Port GPIOD
#define lcd_rs_Pin GPIO_PIN_10
#define lcd_rs_GPIO_Port GPIOD
#define lcd_d5_Pin GPIO_PIN_7
#define lcd_d5_GPIO_Port GPIOD

#ifndef INC_LCD_H_
#define INC_LCD_H_
extern void lcd_init(void);
extern void lcd_data(unsigned char);
extern void lcd_cmd(unsigned char);
extern void lcd_setcursor(unsigned char ,unsigned char );
extern void lcd_clear(void);
extern void lcd_displayString(int , int , char*);
extern void lcd_display(int , int , unsigned char );
#endif /* INC_LCD_H_ */
