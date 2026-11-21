# Program the Boolean board over JTAG.
# Run from the repo root (board plugged in and powered):
#   vivado -mode batch -nolog -nojournal -source fpga/boolean/program_board.tcl
#     (programs the default build: vivado_boolean/.../top.bit)
#   vivado -mode batch -nolog -nojournal -source fpga/boolean/program_board.tcl \
#          -tclargs fpga/boolean/bitstreams/top_8x8.bit
#     (programs the bitstream given on the command line)

set proj_dir [file normalize [file dirname [info script]]]
if {[llength $argv] > 0} {
    set bit [file normalize [lindex $argv 0]]
} else {
    set bit $proj_dir/vivado_boolean/boolean_soc.runs/impl_1/top.bit
}
if {![file exists $bit]} {
    puts "ERROR: $bit not found; build it first (build_bitstream.tcl or build_dim.tcl)"
    exit 1
}

open_hw_manager
connect_hw_server -url localhost:3121
open_hw_target
set dev [lindex [get_hw_devices] 0]
current_hw_device $dev
set_property PROGRAM.FILE $bit $dev
program_hw_devices $dev
refresh_hw_device $dev
puts "PROGRAMMED: $dev with $bit"
close_hw_target
disconnect_hw_server
