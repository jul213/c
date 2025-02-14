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