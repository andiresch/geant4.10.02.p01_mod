//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file field/BlineTracer/src/G4BlineSteppingAction.cc
/// \brief Implementation of the G4BlineSteppingAction class
//
//
// $Id: G4BlineSteppingAction.cc 68021 2013-03-13 13:36:07Z gcosmo $
//
//
// --------------------------------------------------------------------
//
// G4BlineSteppingAction implementation
//
// --------------------------------------------------------------------
// Author: Laurent Desorgher (desorgher@phim.unibe.ch)
//         Created - 2003-10-06
// --------------------------------------------------------------------

#include "G4BlineSteppingAction.hh"

///////////////////////////////////////////////////////////////////////////

G4BlineSteppingAction::
G4BlineSteppingAction(G4BlineTracer* aBlineTool)
{
  fBlineTool=aBlineTool;
}

///////////////////////////////////////////////////////////////////////////

G4BlineSteppingAction::~G4BlineSteppingAction()
{
}

///////////////////////////////////////////////////////////////////////////

void G4BlineSteppingAction::UserSteppingAction(const G4Step*)
{ 
}
