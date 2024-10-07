onerror {exit -code 1}
vlib work
vlog -work work thr2023063114_1.vo
vlog -work work adder.vwf.vt
vsim -novopt -c -t 1ps -L cyclonev_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.adder_vlg_vec_tst -voptargs="+acc"
vcd file -direction thr2023063114_1.msim.vcd
vcd add -internal adder_vlg_vec_tst/*
vcd add -internal adder_vlg_vec_tst/i1/*
run -all
quit -f
