# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vverilator_test.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vverilator_test \
	Vverilator_test___024root__DepSet_h8ad277ea__0 \
	Vverilator_test___024root__DepSet_hb3c96fa5__0 \
	Vverilator_test___024unit__03a__03aPacket__Vclpkg__DepSet_hbbdb4ce1__0 \
	Vverilator_test___024unit__03a__03aPacket__Vclpkg__DepSet_ha2c2a89c__0 \
	Vverilator_test__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vverilator_test___024root__Slow \
	Vverilator_test___024root__DepSet_hf0c736fc__0__Slow \
	Vverilator_test___024root__DepSet_hb3c96fa5__0__Slow \
	Vverilator_test___024unit__Slow \
	Vverilator_test___024unit__DepSet_h62802834__0__Slow \
	Vverilator_test___024unit__03a__03aPacket__Vclpkg__Slow \
	Vverilator_test___024unit__03a__03aPacket__Vclpkg__DepSet_ha2c2a89c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vverilator_test__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_random \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
