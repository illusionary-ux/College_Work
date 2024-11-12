onerror {exit -code 1}
vlib work
vlog -work work 2023063114THR.vo
vlog -work work CNT24.vwf.vt
vsim -novopt -c -t 1ps -L cyclonev_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.CNT24_vlg_vec_tst -voptargs="+acc"
vcd file -direction 2023063114THR.msim.vcd
vcd add -internal CNT24_vlg_vec_tst/*
vcd add -internal CNT24_vlg_vec_tst/i1/*
run -all
quit -f
