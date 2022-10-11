
#include "libs/maxim.h"
#include "maximilian.h"

// This is the oscillator we will use to generate the test tone
maxiOsc mySine, myPhasor;
maxiFFT myFFT;


void setup() { myFFT.setup(1024, 512, 256); }

void play(double* output)
{


    float myOut = mySine.sinewave(
        myPhasor.phasorBetween(0.2, 100., 5000.));
    // output[0] is the left output. output[1] is the right output

    if (myFFT.process(myOut)) {

        // if you want you can mess with FFT frame values in here
    }

    output[0] = myOut; // simple as that!
    output[1] = output[0];
}
