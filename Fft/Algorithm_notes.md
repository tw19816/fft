# Radix-2 Cooley–Tukey FFT

## The Direct fourier transform
* The dft of a sequence of equally spaced values is given by:
$ F_n = \sum_{k = 0}^{N-1} f_k e^{-2 \pi i n k / N} $
    * Note: if the sequence is real then the transformed fourier coefficients will obey: $ F_{N-n} =  \bar{F}_n \\ \forall n \in \{0, 1,..., N-1\} $ 

## Features of the algorithm
* Radix 2 means that it only works sequences whose length are a power of two
    * Can still use for general sequences with some slowdown by padding it until it becomes a power of two
* The algorithm makes use of the fact that the exponential is symmetric around $ N/2 $:
$e^{\frac{- j2\pi k m}{N/2}} = e^{\frac{- j2\pi (N/2 + k) m}{N/2}}$

## Notes on implementations
* Distributed
    * Only allows the number of processes to be a power of two as this ensures that a processor will either have all or half of the data required to perform one gentleman sande butterfly operation