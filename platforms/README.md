# Definition of platform

I would define the **platform** as the **union** of **hardware** (*incl. MCU, SOC, DSP with corresponding peripheral circuit*) and **software** (*incl. task based, bootloader + OS*), in generally it could be summarized as:

|      **HW.**       |       **SW.**     |    **Usage**    |
| :----------------: | :---------------: | :-------------: |
|   x86_64 or ia64   |      Unix/Linux   |  Servers, web   |
|   ARM SOC          |      Android      |  Mobile or Pad  |
|   ARM SOC          |      Linux        |  Embedded device|
|   x86_64 or ia64   |      Windows 10   |  PCs & desktop  |
|   MCUs             |      task based   | real time control|

__P.S.__: Mac and iPhone not list here cause not widely used especialy on device side except digital

# Why platform matters?

> The platform provide the environment (incl. the computation, the storage, the I/Os, etc.), within which the programs should be executed.
> 
> The environment will determine the technical stacks in bottom up manner.
>
> Different platform has its special usage case, constrains, at the same time some of them could tightly combined together.
>
> Each platform has special toolchain suite (incl. compile, debug, profiling, etc.)

# Interfacing platforms

Sometime single platform is not capable for some tasks, connected sum up platforms may has huge helpful on:
1. endpoint -> the identities that need to exchange information
2. channel  -> the physical paths (e.g. I2C, SPI, SDIO, networking, etc.)
3. message  -> the data want to exchanged (e.g. XML, JSON, binary format, etc.)
