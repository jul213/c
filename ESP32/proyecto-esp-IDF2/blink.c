#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"


static const char *TAG = "actividad 3 proyecto con esp-idf";

#define led1 17;
#define led2 5;
#define led3 18;


static uint32_t uStackDepth = 2048;

static uint8_t s_led1_state = 0;
static uint8_t s_led2_state = 0;
static uint8_t s_led3_state = 0;


static void configure_led(void){
    ESP_LOGI(TAG, "configuracion de led");
    gpio_reset_pin(led1);
    gpio_set_direction(led1, GPIO_MODE_OUTPUT);
}