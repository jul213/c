import WiFi from "wifi";


WiFi.scan({}, ap => {

    if (!ap){
        trace(`ya estan todos los AP`)
    }
})