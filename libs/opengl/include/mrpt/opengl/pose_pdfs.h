/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2022, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */
#pragma once

#include <mrpt/opengl/CSetOfObjects.h>

namespace mrpt::opengl
{
/** @name Functions to obtain a 3D representation of a pose PDF
	@{  */

/** Returns a representation of a the PDF - this is just an auxiliary function,
 * it's more natural to call mrpt::poses::CPosePDF::getAs3DObject     */
template <class POSE_PDF>
inline CSetOfObjects::Ptr posePDF2opengl(const POSE_PDF& o)
{
	return CSetOfObjects::posePDF2opengl(o);
}

/**  @}  */
}  // namespace mrpt::opengl
