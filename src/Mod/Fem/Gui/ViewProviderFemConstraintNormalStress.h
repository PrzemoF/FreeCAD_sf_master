/***************************************************************************
 *   Copyright (c) 2013 Jan Rheinländer <jrheinlaender[at]users.sourceforge.net>     *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef GUI_VIEWPROVIDERFEMCONSTRAINTNORMALSTRESS_H
#define GUI_VIEWPROVIDERFEMCONSTRAINTNORMALSTRESS_H

#include <TopoDS_Shape.hxx>

#include "ViewProviderFemConstraint.h"
#include <QObject>

class SoFontStyle;
class SoText2;
class SoBaseColor;
class SoTranslation;
class SbRotation;
class SoMaterial;
class SoLightModel;
class SoCoordinate3;
class SoIndexedLineSet;
class SoIndexedFaceSet;
class SoEventCallback;
class SoMarkerSet;

namespace Gui  {
class View3DInventorViewer;
    namespace TaskView {
        class TaskDialog;
    }
}

namespace FemGui
{

class FemGuiExport ViewProviderFemConstraintNormalStress : public FemGui::ViewProviderFemConstraint
{
    PROPERTY_HEADER(FemGui::ViewProviderFemConstraintNormalStress);

public:
    /// Constructor
    ViewProviderFemConstraintNormalStress();
    virtual ~ViewProviderFemConstraintNormalStress();

    virtual void updateData(const App::Property*);

protected:
    virtual bool setEdit(int ModNum);

private:
    /// Direction of the force
    Base::Vector3f forceDirection;

};

} //namespace FemGui


#endif // GUI_VIEWPROVIDERFEMCONSTRAINTNORMALSTRESS_H
