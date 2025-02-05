import Timer from "timer";
import Digital from "pins/digital"

const BUTTON_PIN = 0;

const bt0 = ({
    pin: BUTTON_PIN,
    mode: Digital.InputPullUp,
});

trace(`el pin del boton esta ${BUTTON_PIN}`);

let anterior = 0;
Timer.repeat(() => {
    const actual = bt0.read();
    if (actual !== anterior){
        trace(`cambio de estado a ${actual}`);
        anterior = actual;
    }

}, 100);
