# SoC Bus Summary

## Bus routing (arbiter -> AXI tap)

```
   debug port (0) ──┐
   CPU data   (1) ──┤
   CPU instr  (2) ──┼──► ARBITER ──► AXI TAP ──┬─ 0x90… ──► irq_ctrl   (interrupt controller)
   ACCEL m_*  (3) ──┘   (whose turn)  (where to) ├─ 0x91… ──► timer
                                                 ├─ 0x92… ──► uart
                                                 ├─ 0x93… ──► spi
                                                 ├─ 0x94… ──► gpio
                                                 ├─ 0x95… ──► ACCEL cfg_*
                                                 └─ anything else ──► retime ──► RAM
```

- **Arbiter** (`soc/axi4_arb.v`): picks which of the 4 masters gets to use the bus next.
- **AXI tap** (`soc/axi4_lite_tap.v`): looks at the top byte of the read/write address and sends the request to the matching peripheral; anything not in `0x90`–`0x95` falls through to RAM.
