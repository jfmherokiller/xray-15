
#ifndef _MFnGeometryFilter
#define _MFnGeometryFilter
//
//-
// ==========================================================================
// Copyright (C) 1995 - 2006 Autodesk, Inc., and/or its licensors.  All 
// rights reserved.
// 
// The coded instructions, statements, computer programs, and/or related 
// material (collectively the "Data") in these files contain unpublished 
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its 
// licensors,  which is protected by U.S. and Canadian federal copyright law 
// and by international treaties.
// 
// The Data may not be disclosed or distributed to third parties or be 
// copied or duplicated, in whole or in part, without the prior written 
// consent of Autodesk.
// 
// The copyright notices in the Software and this entire statement, 
// including the above license grant, this restriction and the following 
// disclaimer, must be included in all copies of the Software, in whole 
// or in part, and all derivative works of the Software, unless such copies 
// or derivative works are solely in the form of machine-executable object 
// code generated by a source language processor.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND. 
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED 
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF 
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, 
// OR ARISING FROM A COURSE OF DEALING, USAGE, OR TRADE PRACTICE. IN NO 
// EVENT WILL AUTODESK AND/OR ITS LICENSORS BE LIABLE FOR ANY LOST 
// REVENUES, DATA, OR PROFITS, OR SPECIAL, DIRECT, INDIRECT, OR 
// CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK AND/OR ITS LICENSORS HAS 
// BEEN ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES. 
// ==========================================================================
//+
//
// CLASS:    MFnGeometryFilter
//
// *****************************************************************************
//
// CLASS DESCRIPTION (MFnGeometryFilter)
//
// MFnGeometryFilter is the function set for geometry filters (deformers)
//
// *****************************************************************************

#if defined __cplusplus

// *****************************************************************************

// INCLUDED HEADER FILES


#include <maya/MFnDependencyNode.h>
#include <maya/MObject.h>
// *****************************************************************************

// DECLARATIONS
class MObject;
class MDagPath;
class MIntArray;
class MFloatArray;
class MObjectArray;
class MSelectionList;
class MString;

// *****************************************************************************

// CLASS DECLARATION (MFnGeometryFilter)

///  geometry filter function set (OpenMayaAnim) (OpenMayaAnim.py)
/**
MFnGeometryFilter is the function set for deformers.
*/
#ifdef _WIN32
#pragma warning(disable: 4522)
#endif // _WIN32

class OPENMAYAANIM_EXPORT MFnGeometryFilter : public MFnDependencyNode
{
	declareMFn(MFnGeometryFilter, MFnDependencyNode);

public:
	///
	MStatus		getInputGeometry(MObjectArray &objects) const;
	///
	MStatus		getOutputGeometry(MObjectArray &objects) const;
	///
	MObject		inputShapeAtIndex(unsigned int index,
								  MStatus *ReturnStatus = NULL) const;
	///
	MObject		outputShapeAtIndex(unsigned int index,
								   MStatus *ReturnStatus = NULL) const;
	///
	unsigned int	indexForOutputShape(const MObject &shape,
									MStatus *ReturnStatus = NULL) const;
	///
	MStatus		getPathAtIndex(unsigned int index,
							   MDagPath &path) const;
	///
	unsigned int	indexForGroupId(unsigned int groupId,
								MStatus *ReturnStatus = NULL) const;
	///
	unsigned int	groupIdAtIndex(unsigned int index,
							   MStatus *ReturnStatus = NULL) const;
	///
	unsigned int	numOutputConnections(MStatus *ReturnStatus = NULL) const;
	///
	unsigned int	indexForOutputConnection(unsigned int connectionIndex,
										 MStatus *ReturnStatus = NULL) const;
	///
	MObject		deformerSet(MStatus *ReturnStatus = NULL) const;
	///
	float		envelope(MStatus *ReturnStatus = NULL) const;
	///
	MStatus		setEnvelope(float envelope);

BEGIN_NO_SCRIPT_SUPPORT:

 	declareMFnConstConstructor( MFnGeometryFilter, MFnDependencyNode );
	
END_NO_SCRIPT_SUPPORT:

protected:
// No protected members

private:
// No private members
};

#ifdef _WIN32
#pragma warning(default: 4522)
#endif // _WIN32

// *****************************************************************************
#endif /* __cplusplus */
#endif /* _MFnGeometryFilter */