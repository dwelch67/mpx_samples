
Just getting this repo started, will come back and work on this.

I am liking the MPX opencores mips much more than the m1_core mips.
Didnt realize what either one was until I dug a little deeper.

http://opencores.org/project,mpx

There is a gcc build script that goes with this, will add that soon.

Verilator is required, in the mpx directory use make to create a sim
that runs a finite number of clocks but makes a .vcd file.  use
make -f Makefile.forever to make one that doesnt create vcd files but
runs forever.

the tea01 directory is a simple tea (tiny encryption algorithm) example
program to test things.  The mpx sources included a uart or at least
hardware that feels like a uart (didnt actually check to see if it
serializes the data) so the program outputs as if it were talking to
a uart.  the test appears to pass it encrypts the data, then decrypts
then compares with the original.

Lots more work to do, wanted to get this checked in.

