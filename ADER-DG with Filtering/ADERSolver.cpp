// This file was generated by the ExaHyPE toolkit.
// It will NOT be regenerated or overwritten.
// Please adapt it to your own needs.
// 
// ========================
//   www.exahype.eu
// ========================

#include "ADERSolver.h"

#include "ADERSolver_Variables.h"

#include "kernels/KernelUtils.h"
#include "peano/utils/Loop.h"

tarch::logging::Log Burger::ADERSolver::_log( "Burger::ADERSolver" );


void Burger::ADERSolver::init(const std::vector<std::string>& cmdlineargs,const exahype::parser::ParserView& constants) {
  // Tip: You find documentation for this method in header file "Burger::ADERSolver.h".
  
  // @todo Please implement/augment if required

    
}

void Burger::ADERSolver::adjustPointSolution(const double* const x,const double t,const double dt,double* const Q) {
  // Tip: You find documentation for this method in header file "Burger::ADERSolver.h".
  // Tip: See header file "Burger::AbstractADERSolver.h" for toolkit generated compile-time 
  //      constants such as Order, NumberOfVariables, and NumberOfParameters.
  
  // @todo Please implement/augment if required
  if (tarch::la::equals(t,0.0)) {
    if (x[0] < 0.5)
    {
      Q[0] = 2.0;
    } else {
      Q[0] = 1.0;
    }
  }
}

void Burger::ADERSolver::boundaryValues(const double* const x,const double t,const double dt,const int faceIndex,const int direction,const double* const fluxIn,const double* const stateIn,const double* const gradStateIn,double* const fluxOut,double* const stateOut) {
  // Tip: You find documentation for this method in header file "Burger::ADERSolver.h".
  // Tip: See header file "Burger::AbstractADERSolver.h" for toolkit generated compile-time 
  //      constants such as Order, NumberOfVariables, and NumberOfParameters.

  // @todo Please implement/augment if required
  stateOut[0] = stateIn[0];

  fluxOut[0] = fluxIn[0]; //probably (check guidebook again)
}

exahype::solvers::Solver::RefinementControl Burger::ADERSolver::refinementCriterion(const double* const luh,const tarch::la::Vector<DIMENSIONS,double>& cellCentre,const tarch::la::Vector<DIMENSIONS,double>& cellSize,double t,const int level) {
  // Tip: You find documentation for this method in header file "Burger::ADERSolver.h".
  // Tip: See header file "Burger::AbstractADERSolver.h" for toolkit generated compile-time 
  //      constants such as Order, NumberOfVariables, and NumberOfParameters.
  // Tip: See header file "peano/utils/Loop.h" for dimension-agnostic for loops.
  
  //  Example: Loop over all pointwise state variables (plus parameters)
  //
  //  constexpr int sizeOfQ = NumberOfVariables+NumberOfParameters;
  //  dfor(i,Order+1) {
  //    const int iLinearised = dLinearised(i,Order+1);
  //    const double* const Q = luh + iLinearised * sizeOfQ; // pointwise state variables (plus parameters)
  //    // use Q[0], Q[1], ... Q[sizeOfQ-1]
  //  }
  
  // @todo Please implement/augment if required
  return exahype::solvers::Solver::RefinementControl::Keep;
}

//*****************************************************************************
//******************************** PDE ****************************************
// To use other PDE terms, specify them in the specification file, delete this 
// file and its header and rerun the toolkit
//*****************************************************************************


void Burger::ADERSolver::eigenvalues(const double* const Q,const int direction,double* const lambda) {
  // Tip: You find documentation for this method in header file "Burger::ADERSolver.h".
  // Tip: See header file "Burger::AbstractADERSolver.h" for toolkit generated compile-time 
  //      constants such as Order, NumberOfVariables, and NumberOfParameters.
  
  // @todo Please implement/augment if required
  lambda[0] = Q[0];
}





void Burger::ADERSolver::flux(const double* const Q,double** const F) {
  // Tip: You find documentation for this method in header file "Burger::ADERSolver.h".
  // Tip: See header file "Burger::AbstractADERSolver.h" for toolkit generated compile-time 
  //      constants such as Order, NumberOfVariables, and NumberOfParameters.
  
  // @todo Please implement/augment if required
  F[0][0] = 0.5 * Q[0] * Q[0]; // = 1/2 * u^2
  
  F[1][0] = 0.0;
  
}





