

static void configureLed(void){
    ESP_LOGI(TAG, "ejemplo de configuracion led con el esp32");
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}

static void blink_led(void){
        gpio_set_level(BLINK_GPIO, s_led_state) //variable definida como global 
}

void app main(void){

    configureLed();


    while (1){
        ESP_LOGI(TAG, "encendido de led %s", s_led_state == true ? "ON": "OF");
        blink_led()
    }
}