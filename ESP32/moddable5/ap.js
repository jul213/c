import WiFi from "wifi";


WiFi.scan({}, ap => {

    if (!ap){
        trace(`ya estan todos los AP`)
        return;
    }

    trace(`encontrado el ${ap.ssid}`)
    trace(`encontrado el ${ap.rssi}`)
    trace(`encontrado el ${ap.authentication}`)
})