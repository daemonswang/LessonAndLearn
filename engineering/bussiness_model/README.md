# What is bussiness model?

Bussiness model is an abstration of the system data flow, where the data is generated, how it is processed, where the data shoud be stored:
- what is the input, then process on the input, then action (incl. calculation, I/O)
- input could be user triggered event, or pure data, e.g. sensors continously captured data
- this is very basic model before the architecture design
- just a general roadmap, must not look deeply into
- it is the output by analysis the requirement

# Why it is neccessary or important?

It is the mental concept in the developer's head, it should be very clear and simple also it should be adapted contiously, it will strongly instruct the architecture design.

If there is no the bussiness model phase, we could start on architecture design anyhow, there will be huge gap between the requirements and current step. sometimes the architecture willn't cover all the use cases.

# Don't mix the bussiness model analysis with architecture design!!

In most of the textbook, they will be combined together, for some junior developers will step into architecture phase directly.