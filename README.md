# Hyperbolic Seminar

My code submission for the seminar course "Fundamentals of Wave Simulation - Solving Hyperbolic Systems of PDEs" (winter semester 2022-23) at
the TUM School of Computation, Information and Technology.

## Topic

Dealing with Discontinuities II: Filtering and Finite Volume Subcell Limiting (FV-SCL)

## File Structure

Files for solving 1D Burgers equation in ExaHyPE using ADER-DG, exponential filtering and FV-SCL.

#### ADER-DG: 
- exahype config file
- C++ file implementing the PDE flux, initial, and boundary conditions

#### ADER-DG with Filtering: 
- exahype config file
- C++ file implementing the PDE flux, initial, and boundary conditions
- C++ file implementing a third order filters
- Matlab files for computing third order filters of varying strengths (along with Vandermonde matrix)

#### ADER-DG with Limiting:
- exahype config file
- C++ files implementing the PDE flux, initial, and boundary conditions