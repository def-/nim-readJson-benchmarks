## Benchmarks for JSON parsing in Nim

```zsh
nim -v                                                                                     !249
Nim Compiler Version 0.13.0 (2016-02-23) [Linux: amd64]
Copyright (c) 2006-2015 by Andreas Rumpf

git hash: a121c3f9eb2a348b9d6ae03ffd01aab26a238c30
active boot switches: -d:release


>% benchmark                                                                        
NODE.js (require):
Node.js parsed 389373 Objects

real  0m0.648s
user  0m0.580s
sys 0m0.068s

Ruby:
Ruby parsed 389373 Objects
real  0m0.653s
user  0m0.600s
sys 0m0.044s

Nim readFile:
file was read!

real  0m0.007s
user  0m0.000s
sys 0m0.004s

Nim parseJson:
<TraceBack Message Removed for brevity>
SIGINT: Interrupted by Ctrl-C.

real  1m45.362s
user  1m45.032s
sys 0m0.040s


```