# Architecture steps

Below is a general architecture design steps from my experience.

## de-couple the bussiness model, break into moudules

According the bussiness model to figure out the single responsible identity(clear the R&R for it).

## define the interfaces between modules

this also involved with `technical selection`:

- which IPC is best fit for (e.g. share memory, pipeline, socket), keep in mind share memory & pipeline are intrusive, also tight coupling...
- actually should decide on what kind of `channel` and what kind of `protocol`(i.e.: text based or binary)
- provide the mechanism instead of policy