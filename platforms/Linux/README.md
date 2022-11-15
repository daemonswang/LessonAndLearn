# *inux (Unix and Linux)

Not need much words, Linux or Unix are absolutely the power engine, no matter for the internet revolution, but also for the cloud computing. Meanwhile, it is unbelievable that Linux is developed by community, different people around the world instead of a commertial company. Extremely vital and infectious, it is a huge knowledge base for us to learn the programming(incl. the architecture, moudulized design, layered design, etc.).

Amazing Linux :heart_eyes:.

# Misleadings

## Linux is written in C which is proccesure base!

No exactly, C is mainly design for procecesure base, but C also could implement object oriented programming, just check the codes then you will find, data and related operations could be used like this, Aha...

## Linux may not well structed!

Linux is orginized by subsystems in horizontal:
- Process schedule    (i.e.: for CPU occupy)
- Memory management   (i.e.: for memory)
- Virtual file system (i.e.: for storages)
- IPC
- Networking

Also Linux system is based on the layers, no matter for the whole system but also within each subsystem.
- Different architecture supported by Linux
- BSP is responsible for isolate the hardware details
- Upper C world is portable

Linux has its configuration system.

FIXME: customize a kernel for self usage, the record the steps

## Linux has no high level data structure and algorithms!

Linux implemented lots of data structure and algorithm constructs, with high efficiency and elegant.

# Linux related `Role and Responsibility`

`System engineer` will be responsible for system burn up, include Bootloader, Kernel clipping, rootfs, device drivers, etc. also could be called BSP engineer, they work closed with hardware team, debugging or monitoring with hardware instruments, they care about the signals, sequence, interfere...
- No much more coding effort at this level, but should familiar with the hardware
- Not from scratch, mostly vendor provide the reference examples
  
`Application developer` will be responsible for implement the bussiness logic, familiar with cross-compile environment especialy for debugging.
