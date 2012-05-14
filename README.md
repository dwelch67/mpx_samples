
I was looking around at opencores.org and found the mpx project.  I
didnt realize it was a mips processor.  I had tried the m1_core project
which I dont think anywhere describes itself as being a mips1 core.  I
was not overly pleased with the m1_core experience, but mpx was another
story.  verilator lint-free, already has a sim environment setup using
open source tools.  Went so far as to modify gcc to not output offending
instructions.

http://opencores.org/project,mpx

The processor is written using the hardware language Verilog, using an
open source tool (verilator) you can simulate this processors logic
without having one of these processors, nor having an fpga or any other
programmable logic, and without having to use very expensive simulation
software tools.  Everything here is free and open source (in some form
or another).  As with other logic simulation tools verilator allows you
to create waveform files of a format that another open source tool
(gtkwave) will allow you to look into what the logic is doing you can
see all of the signals described by the Verilog while your code is
running.

Each logic sim tool uses its own solution, verilator chooses to basically
translate the verilog into C++, combined with its own libraries creates
a functional simulation of the logic.

This project requires you to get and install verilator, just follow the
instructions for downloading and/or installing.

http://www.veripool.org/wiki/verilator/Installing

The mpx directory holds the verilog source and verilator files.  Running
make creates two simulators.  One simulator runs a finite number of
clock cycles (which you can easily change) because it outputs information
about the signals in vcd format (dont want the vcd file to fill up the
hard disk).  The other simulator, is not limited, it runs until you
kill it or your code kills it, but it does not output vcd wave file
information.

to run something, create a .hex file (intel hex format) then

./mpx/obj_vcd/Vmpx_top file.hex

or

./mpx/obj_forever/Vmpx_top file.hex

http://gtkwave.sourceforge.net/ is a very good, open source, tool for
viewing vcd files.  You can build from sources or apt-get install gtkwave.
See the documentation for basics on how to start using the tool.

Gtkwave is not required to use this processor as presented here,
verilator is required.  I was hoping to not need anything but a C/C++
compiler to use this project.  As far as compiler tools, open source has
good solutions.  Building a gnu cross compiler can be intimidating and
has many ways to fail.  You can go to what was once codesourcery.com
(now under the mentor graphics umbrella) and get the LITE version for
mips.  These are already built for you just install.  (no reason why
the full version wouldnt work).  If you are interested in getting your
feet wet with a mips processor, looking inside the processor when it runs,
in particular in assembly language.  I have created a no-frills mips
assembler, see the mas directory.  I have also created (TODO) an assembly
language tutorial for mips assembly language.  Sure many of you may have
used SPIM, I have tried it myself.  Using mas in combination with the
mpx processor you go further into your understanding by seeing the machine
code generated and being able to see the processor running at the logic
signal level.  See the mas directory for my simple assembler and a mips
assembly language tutorial.

The entry point for the mpx processor as at address 0x2000.  The mas
assembler takes care of this for you.  Likewise the example programs
tea01, crc_ccitt, etc which use gnu tools have linker scripts that show
you how to control the memory space when using the compiler/linker.

The mpx processor does not support a few instructions for patent reasons
as well as multiply and divide are huge and one (div) or both are often
not found in processors for that and other reasons.  The mpx author
created a build script with patches for building a number of gnu tools
including binutils and gcc.  I am only interested in binutils and gcc
so I modified that script and provided it in the build_gcc directory.
I also examined the modifications made by the mpx author to gcc 4.6.1
and created similar patches to gcc 4.7.0.  If you are only interested in
assembly language then you only need binutils.

The tea01 directory is a simple tea (tiny encryption algorithm) example
program to test things.  The mpx sources included a uart, or at least
hardware that feels like a uart, so the program outputs as if it were
talking to a uart.  The test appears to pass, it encrypts the data, then
decrypts then compares with the original.

The crc_ccitt directory contains a crc example.
