# FIFO UVM Verification

A self-checking, coverage-driven verification environment for a synchronous
FIFO, written in class-based SystemVerilog and simulated with **Verilator 5**.

Built from scratch to learn the concepts behind **UVM** (Universal
Verification Methodology) without requiring a commercial simulator.

## Highlights

- **100% functional coverage** — all 6 defined corner cases hit
- **Self-checking scoreboard** — every read compared against expected data
- **Randomized sequences** — 150 phase-biased transactions per run
- **Runs on free tools** — Verilator + Icarus Verilog, no licenses needed

## What Is This?

This project verifies a **synchronous FIFO** (first-in, first-out buffer)
with the following properties:

- Parameterizable data width (default 8 bits)
- Parameterizable depth (default 16 entries, power of 2)
- Single clock domain
- Reports `full` and `empty` status flags

The verification environment observes the FIFO's signals, reconstructs
transactions, and independently checks that data comes out in the same
order it went in.

## Architecture

## Project Structure

## Functional Coverage

The coverage model tracks 6 corner cases:

| Bin | Description |
|-----|-------------|
| `saw_full` | FIFO reached capacity during the test |
| `saw_empty` | FIFO reached empty during the test |
| `saw_write_when_full` | Write attempted while full (blocked by driver) |
| `saw_read_when_empty` | Read attempted while empty (blocked by driver) |
| `saw_back_to_back_writes` | Consecutive-cycle writes |
| `saw_back_to_back_reads` | Consecutive-cycle reads |

**Current run: 6/6 = 100%** ✅

## Running

### Prerequisites

- Verilator 5.0+
- `make`, `g++`
- (Optional) Icarus Verilog for the simple baseline testbench

On Ubuntu / WSL:

```bash
sudo apt install verilator make g++