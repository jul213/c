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
                trace(`pasamos a estado ${estado}`)
            }
            a.write(aVal)
            break;
        case 1:
            bVal -= 20;
            if (bVal < 1){
                bVal = 1;
                estado = 2;
                trace(`pasamos a ete estado ${estado}`)
            }
            b.write(bVal);
            break;
        case 2:
            aVal += 20;
            if (aVal > 1023){
                aVal = 1023
                estado = 3
                trace(`pasamos a este estado ${estado}`)
            }
            a.write(aVal)
            break;
        case 3:
            bval += 20;
            if (bval > 1023){
                bval = 1023
                estado = 0;
                trace(`pasamos a estado ${estado}`)
            }
            b.write(bval)
            break;
    }
}, 50)