

static void configureLed(void){
    ESP_LOGI(TAG, "ejemplo de configuracion led con el esp32");
    gpio_reset_pin(BLINK_GPIO);
    
}