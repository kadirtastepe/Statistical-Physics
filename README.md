# Statistical-Physics

# Accessible States for Boson Particles

Bosons: Particles with integer spin (s = 0, 1, 2, etc.). 

Main Question: How can we place N boson particle with total amount of energy \beta  in \gamma enegy level with degeneracy g_i = \alpha ?
Solution: We should calculate statistical weights with average particle number in each energy state.

Bosons are particles that follows **Bose-Einstein Statistics. 

We can calculate statistical weight of the system by following fuction according to Bose-Einstein Statistics.

**g_i** -> degeneracy number of energy states

**N_i** -> number of particles whics occupies specific energy level

<img src="http://latex.codecogs.com/svg.latex?\Omega_k(BE)&space;=&space;\prod_i&space;\frac{(g_i&space;&plus;&space;N_i-1)!}{N_i!&space;(g_i&space;-1)}&space;" title="http://latex.codecogs.com/svg.latex?\Omega_k(BE) = \prod_i \frac{(g_i + N_i-1)!}{N_i! (g_i -1)} " />

And the sum of the microscopic states will be

<img src="http://latex.codecogs.com/svg.latex?\Omega(BE)&space;=&space;\sum_k&space;\Omega_k&space;(BE)&space;" title="http://latex.codecogs.com/svg.latex?\Omega(BE) = \sum_k \Omega_k (BE) " />

Average number of particles in every energy level calculated by

<img src="http://latex.codecogs.com/svg.latex?\overline{n(BE)}&space;=&space;\frac{1}{\Omega(BE)}\sum_k&space;n_k&space;\Omega_k" title="http://latex.codecogs.com/svg.latex?\overline{n(BE)} = \frac{1}{\Omega(BE)}\sum_k n_k \Omega_k" />


And we can also compare this system with Maxwell-Boltzmann Statistics. Bosons follow or not?

We can calculate statistical weight of the system by following fuction according to Maxwell-Boltzmann Statistics.

<img src="http://latex.codecogs.com/svg.latex?\Omega_k(MB)&space;=&space;N!&space;\prod_i&space;\frac{{g_i}^{N_i}}{N_i!}" title="http://latex.codecogs.com/svg.latex?\Omega_k(MB) = N! \prod_i \frac{{g_i}^{N_i}}{N_i!}" />

We need to generate particle distribution table. In order to calculate how many bosons occupy whics energy level, I have used some basic mathematical tricks.

1) Total number of particles in a row must be equal to total number of particles that we have entered.
2) <img src="http://latex.codecogs.com/svg.latex?\sum_{i=1}^{N}&space;a_n(n-1)&space;=\sum_{i=1}^{N}&space;a_n&space;=&space;E_{Total},&space;a_n&space;\in&space;\mathbb{N}" title="http://latex.codecogs.com/svg.latex?\sum_{i=1}^{N} a_n(n-1) =\sum_{i=1}^{N} a_n = E_{Total}, a_n \in \mathbb{N}" /> where a_n is the number of particles can occupy an energy level.

# Licence

***Released under licence: the GPL version 3 license.***
***Scientific or technical publications resulting from projects using this code are required to citate.***

# Usage 

You can enter defined total number of particles and proper amount of energy and degeneracy number.

Defined Total Number of Particles: 3,4,5,6,7,8,9,10
Total Number of Particles:
Total Amount of Energy:
Degeneracy number:



