import Timer from "timer";
import Digital from "pins/digital";

debugger;

let led5 = new Digital({
    pin: 5,
    mode: Digital.Output
});

let led10 = new Digital({
    pin: 10,
    mode: Digital.Output
})

let count = 0;
Timer.repeat(() => {
    trace("en cuenta ${++count}");
    led5.write(count & 1);
    led10.write((-count) & 1);
}, 1000)