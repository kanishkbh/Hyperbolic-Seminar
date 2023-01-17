#include "MySolver_FV.h"

#include "MySolver_FV_Variables.h"


tarch::logging::Log Burger_limiting::MySolver_FV::_log( "Burger_limiting::MySolver_FV" );

void Burger_limiting::MySolver_FV::init(const std::vector<std::string>& cmdlineargs,const exahype::parser::ParserView& constants) {
  // Tip: You find documentation for this method in header file "Burger_limiting::MySolver_FV.h".
  
  // @todo Please implement/augment if required
  
}

void Burger_limiting::MySolver_FV::adjustSolution(const double* const x,const double t,const double dt, double* const Q) {
  // Tip: You find documentation for this method in header file "Burger_limiting::MySolver_FV.h".
  // Tip: See header file "Burger_limiting::AbstractMySolver_FV.h" for toolkit generated compile-time 
  //      constants such as PatchSize, NumberOfVariables, and NumberOfParameters.
  
  // @todo Please implement/augment if required
  if (tarch::la::equals(t,0.0)) {
		if (x[0] < 0.5) {
			Q[0] = 2.0;
		} else {
			Q[0] = 1.0;
		}
  }
}

void Burger_limiting::MySolver_FV::eigenvalues(const double* const Q, const int dIndex, double* const lambda) {
  // Tip: You find documentation for this method in header file "Burger_limiting::MySolver_FV.h".
  // Tip: See header file "Burger_limiting::AbstractMySolver_FV.h" for toolkit generated compile-time 
  //      constants such as PatchSize, NumberOfVariables, and NumberOfParameters.
  
  // @todo Please implement/augment if required
  lambda[0] = Q[0];
}

void Burger_limiting::MySolver_FV::boundaryValues(
    const double* const x,
    const double t,const double dt,
    const int faceIndex,
    const int direction,
    const double* const stateInside,
    double* const stateOutside) {
  // Tip: You find documentation for this method in header file "Burger_limiting::MySolver_FV.h".
  // Tip: See header file "Burger_limiting::AbstractMySolver_FV.h" for toolkit generated compile-time 
  //      constants such as PatchSize, NumberOfVariables, and NumberOfParameters.

  // @todo Please implement/augment if required
  stateOutside[0] = stateInside[0];
}

//***********************************************************
//*********************** PDE *******************************
//***********************************************************

//to add new PDEs specify them in the specification file, delete this file and its header and rerun the toolkit


void Burger_limiting::MySolver_FV::flux(const double* const Q,double** const F) {
  // Tip: You find documentation for this method in header file "Burger_limiting::MySolver_FV.h".
  // Tip: See header file "Burger_limiting::AbstractMySolver_FV.h" for toolkit generated compile-time 
  //      constants such as PatchSize, NumberOfVariables, and NumberOfParameters.
  
  // @todo Please implement/augment if required
	F[0][0] = 0.5 * Q[0] * Q[0]; // = 1/2 * u^2
	F[1][0] = 0.0;
  
}






