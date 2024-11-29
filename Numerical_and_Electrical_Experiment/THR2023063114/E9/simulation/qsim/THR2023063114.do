onerror {exit -code 1}
vlib work
vlog -work work THR2023063114.vo
vlog -work work mo12.vwf.vt
vsim -novopt -c -t 1ps -L cyclonev_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.mo12_vlg_vec_tst -voptargs="+acc"
vcd file -direction THR2023063114.msim.vcd
vcd add -internal mo12_vlg_vec_tst/*
vcd add -internal mo12_vlg_vec_tst/i1/*
run -all
quit -f