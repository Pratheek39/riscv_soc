# Build the Boolean board bitstream (synthesis, implementation, bitstream).
# Run from the repo root:
#   vivado -mode batch -source fpga/boolean/build_bitstream.tcl
# Run `make -C sw/fpga` first so boolean_mem.hex contains the current program.

set proj_dir [file normalize [file dirname [info script]]]
source $proj_dir/create_project.tcl

launch_runs synth_1 -jobs 8
wait_on_run synth_1
puts "SYNTH_STATUS: [get_property STATUS [get_runs synth_1]]"

launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1
puts "IMPL_STATUS: [get_property STATUS [get_runs impl_1]]"

open_run impl_1
report_timing_summary -file $proj_dir/timing_summary.rpt
report_utilization -file $proj_dir/utilization.rpt
puts "BITSTREAM: $proj_dir/vivado_boolean/boolean_soc.runs/impl_1/top.bit"
