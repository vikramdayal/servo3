# servo3
The Arduino library for PotBanger.

The library assumes that PINS 2-12 will be used to manage up to 10 servo motors being used for pot bangers to make music.

The bulk of the servo management is done from the Java controller. There are older versions of servo controllers where I tried to bring the management down 
to the board. But Alas! The usual problems with real-time systems makes it easier to just have one central conroller that maintains state. The board is a stateless machine.
Though the servos maintain their own state.

As usual, feel free to modify or give feedback.


