# Create the Vivado project for the Boolean board (XC7S50-CSG324).
# Usage (from fpga/boolean):  vivado -mode batch -source create_project.tcl
# or in the Vivado Tcl console:  source create_project.tcl

set proj_dir   [file normalize [file dirname [info script]]]
set repo_dir   [file normalize $proj_dir/../..]

create_project boolean_soc $proj_dir/vivado_boolean -part xc7s50csga324-1 -force

# RTL: board top, PLL, block-RAM memory, then the SoC and CPU
add_files -fileset sources_1 [list \
    $proj_dir/top.v \
    $proj_dir/boolean_pll.v \
    $proj_dir/axi4_bram.v \
]
add_files -fileset sources_1 [glob $repo_dir/soc/*.v]
add_files -fileset sources_1 [glob $repo_dir/core/core/rv32imsu/*.v]

# Include directories for `include "*_defs.v"
set_property include_dirs [list $repo_dir/soc $repo_dir/core/core/rv32imsu] [get_filesets sources_1]

# Program image for block RAM
add_files -fileset sources_1 $proj_dir/boolean_mem.hex
set_property file_type {Memory File} [get_files boolean_mem.hex]

# Constraints
add_files -fileset constrs_1 $proj_dir/boolean.xdc

set_property top top [current_fileset]
set_property top_file [get_files top.v] [current_fileset]
# Absolute path so block RAM init does not depend on the run directory
set_property generic [list "MEM_INIT_FILE=\"$proj_dir/boolean_mem.hex\""] [current_fileset]

puts "Project created: $proj_dir/vivado_boolean/boolean_soc.xpr"
