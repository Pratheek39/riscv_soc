# Program the Boolean board over JTAG with the built bitstream.
# Run from the repo root (board plugged in and powered):
#   vivado -mode batch -nolog -nojournal -source fpga/boolean/program_board.tcl

set proj_dir [file normalize [file dirname [info script]]]
set bit $proj_dir/vivado_boolean/boolean_soc.runs/impl_1/top.bit
if {![file exists $bit]} {
    puts "ERROR: $bit not found; run build_bitstream.tcl first"
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
