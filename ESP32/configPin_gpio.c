

static void configureLed(void){
    ESP_LOGI(TAG, "ejemplo de configuracion led con el esp32");
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}

static void blink_led(void){
        gpio_set_level(BLINK_GPIO, s_led_state) //variable definida como global 
}