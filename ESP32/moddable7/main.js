import config from "mc/config";
import WiFi from "wifi";
import Net from "net";
import Timer from "timer";

const {ssid, password} = config;

WiFi.mode = 1;
