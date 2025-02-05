import Analog from "pins/analog";
import Timer from "timer";

debugger;

const PIN_ADC = 0;

Timer.repeat(() => {
    let valor = Analog.read(PIN_ADC);
    trace(`valor leido ${valor}`);
}, 700);