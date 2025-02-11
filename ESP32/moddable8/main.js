import Net from "net";
import Client from "mqtt";
import Timer from "timer";
import { trace } from "console";

const mac = Net.get("MAC");
const id = `ESP32_${mac.replaceAll(":","").slice(-6)}`;
const mqtt = new Client({
    host: "10.200.2.10",
    timeout: 5000,
    id
});


mqtt.onReady = function(){
    this.suscribe("ESP32/mqtt/example/#");

    this.timer = Timer.set(() => {
        this.publish(`ESP32/${id}/date`, Date());
        this.publish(`ESP32/${id}/random`, Math.random());
    }, 0, 5000);
}

mqtt.onMessage = function(topic, body){
    trace(`recibir ${topic}: ${String.fromArrayBuffer(body)}`);
};


mqtt.onClose = function(){
    trace(`coneccion perdida del servidor`);
    if (this.timer){
        Timer.clear(this.timer);
        delete this.timer;
    }
}