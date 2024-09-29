onerror {exit -code 1}
vlib work
vlog -work work gate_xor.vo
vlog -work work gate.vwf.vt
vsim -novopt -c -t 1ps -L cyclonev_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.gate_xor_vlg_vec_tst -voptargs="+acc"
vcd file -direction gate_xor.msim.vcd
vcd add -internal gate_xor_vlg_vec_tst/*
vcd add -internal gate_xor_vlg_vec_tst/i1/*
run -all
quit -f
