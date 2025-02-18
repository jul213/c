#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log_h"
#include "sdkconfig.h"


static const char *TAG = "Actividad 2 proyecto con esp-idf y freertos";

#define LED_GPIO 5
#define BUTTON_GPIO 17

static uint8_t s_led_state = 0;
static uint8_t s_button_state = 0;

//funcion para configurar el led

static void configure_led(void){
    ESP_LOGI(TAG, "configurando el led");
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);

}


//funcion para configurar el boton

static void configure_button(void){
    ESP_LOGI(TAG, "configurando el boton");
    gpio_reset_pin(BUTTON_GPIO);
    gpio_set_direction(BUTTON_GPIO, GPIO_MODE_INPUT);
}


static void blink(void){

    gpio_set_level(LED_GPIO, s_led_state);
    ESP_LOGI(TAG, "led is %s", s_led_state == true ? "ON" : "OFF");
}


void app_main(void){

    configure_led();
    configure_button();


    while (1){

        if(gpio_set_level(BUTTON_GPIO) == 1){
            printf("level to one %i", gpio_set_level(BUTTON_GPIO));

            if(s_button_state == 0){

                s_led_state = !s_led_state;
                blink();
                s_button_state = 1;
            }


        }
        else{
            s_button_state = 0;
        }
    }
}