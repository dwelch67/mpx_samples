
I like the mpx project found at opencores much more than the m1_core
project.  I didnt realize that either one was a mips processor without
having to dig deeper.

http://opencores.org/project,mpx

I modified the gcc build script from the mpx project (build_gcc
directory).  It built more things than I was interested in so I limited
it to binutils and gcc.  It builds gcc 4.6.1 I modified it to build
4.7.0, as well as made what I hope are the same mods to 4.7.0 that were
made by the mpx author for 4.6.1.  If you are only interested in assembly
then you only need to build binutils.

The processor is written using the hardware language Verilog, using an
open source tool you can simulate this processor while at the same time
if you choose being able to later see all the internal logic signals.
You can watch your code run inside the processor.  Verilator is the
open source tool that converts verilog to C++ and then builds that
into a simulation.

http://www.veripool.org/wiki/verilator/Installing

The mpx directory holds the verilog source and verilator files.  Running
make creates a simulator that outputs wave files in vcd format.  You
can adjust how many clock cycles it runs before stopping.  If you
build using make -f Makefile.forever it creates a sim that does not
output waveforms but will run forever or until you stop it.

to run something, create a .hex file (intel hex format) then

./mpx/obj_dir/Vmpx_top file.hex

The entry point is at address 0x2000.  See the example programs, tea01,
crc_ccitt, on how to build simple programs using the gnu tools.

http://gtkwave.sourceforge.net/ is a very good, open source, tool for
viewing vcd files.  You can build from sources or apt-get install gtkwave.
See the documentation for basics on how to start using the tool.

The tea01 directory is a simple tea (tiny encryption algorithm) example
program to test things.  The mpx sources included a uart or at least
hardware that feels like a uart (didnt actually check to see if it
serializes the data) so the program outputs as if it were talking to
a uart.  the test appears to pass it encrypts the data, then decrypts
then compares with the original.

The crc_ccitt directory contains a crc example.
