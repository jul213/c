import Timer from "timer"
import PWM from "pins/pwm"

debugger;

const a = new PWM({pin: 5})
const b = new PWM({pin: 6})

let aVal = 1023;
let bVal = 1023;

a.write(aVal)

b.write(bVal);

Timer.repeat(() => {
    switch (estado){
        case 0:
            aVal -= 20;
            if (aVal < 1){
                aVal = 1
                estado = 1;
                trace()
            }
    }
})