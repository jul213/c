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