import Net from "net";
import Client from "mqtt";
import Timer from "timer";

const mac = Net.get("MAC");
const id = `ESP32_${mac.replaceAll(":","").slice(-6)}`;
const mqtt = new Client({
    host: "10.200.2.10",
    timeout: 5000,
    id
});