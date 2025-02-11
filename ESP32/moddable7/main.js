import config from "mc/config";
import WiFi from "wifi";
import Net from "net";
import Timer from "timer";
import { trace } from "console";

const {ssid, password} = config;

WiFi.mode = 1;

trace(`ssid: ${ssid}, pass: ${password}`);

const opcionesWifi = {ssid, password};

const monitor = new WiFi(opcionesWifi, msg => {
    switch (msg) {
        case WiFi.connected:
            trace(`conectando a wifi, esperando ip`);
            break;
        case WiFi.gotIP:
            trace(`IP address: ${Net.get("IP")}`);
            trace(`Mac address: ${Net.get("MAC")}`);
            trace(`SSID: ${Net.get("SSID")}`);
            break;
    }
})