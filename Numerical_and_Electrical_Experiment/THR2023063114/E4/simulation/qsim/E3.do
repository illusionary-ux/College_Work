onerror {exit -code 1}
vlib work
vlog -work work E3.vo
vlog -work work E3_74138.vwf.vt
vsim -novopt -c -t 1ps -L cyclonev_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.E3_74153_vlg_vec_tst -voptargs="+acc"
vcd file -direction E3.msim.vcd
vcd add -internal E3_74153_vlg_vec_tst/*
vcd add -internal E3_74153_vlg_vec_tst/i1/*
run -all
quit -f
