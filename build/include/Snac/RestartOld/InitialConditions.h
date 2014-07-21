/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**
** Copyright (C), 2003,
**	Steve Quenette, 110 Victoria Street, Melbourne, Victoria, 3053, Australia.
**	Californian Institute of Technology, 1200 East California Boulevard, Pasadena, California, 91125, USA.
**	University of Texas, 1 University Station, Austin, Texas, 78712, USA.
**
** Authors:
**	Stevan M. Quenette, Senior Software Engineer, VPAC. (steve@vpac.org)
**	Stevan M. Quenette, Visitor in Geophysics, Caltech.
**	Luc Lavier, Research Scientist, The University of Texas. (luc@utig.ug.utexas.edu)
**	Luc Lavier, Research Scientist, Caltech.
**
** This program is free software; you can redistribute it and/or modify it
** under the terms of the GNU General Public License as published by the
** Free Software Foundation; either version 2, or (at your option) any
** later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**
*/
/** \file
** Role:
**	With respect to the exchanger/citcom coupling, set up Snac's initial conditions.
**	Facilitated by applying the spherical mesh input conditions and tagging the outer walls as force boudary conditions.
**
** Assumptions:
**	The dicitonary has a struct entry call "citcom", which has the values "thetaMin", "thetaMax", "phiMin", "phiMax", "rMin" and
**		"rMax" within it as doubles.
**
** Comments:
**	Needs to be added to the "AbstractContext_EP_IC" entry point as "EntryPoint_Add_AppendBeforeDefault", as it will change the
**		initial geometry (and Snac's IC function calcs from it and dumps values to file).
**
** $Id: InitialConditions.h 1431 2004-05-18 07:19:21Z SteveQuenette $
**
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#ifndef __SnacRestartOld_InitialConditions_h__
#define __SnacRestartOld_InitialConditions_h__

	void _SnacRestartOld_resetMinLengthScale( void* _context, void* data );
	void _SnacRestartOld_InitialCoords( void* _context, void* data );
	void _SnacRestartOld_InitialVelocities( void* _context, void* data );
	void _SnacRestartOld_InitialStress( void* _context, void* data );

#endif /* __SnacRestartOld_InitialConditions_h__ */
