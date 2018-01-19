// Copyright (c) 2016 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>
#include <tixi.h>
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
    class CTiglUIDManager;
    class CCPACSLongFloorBeamPosition;
    class CCPACSLongFloorBeamsAssembly;
    
    namespace generated
    {
        // This class is used in:
        // CPACSLongFloorBeamsAssembly
        
        // generated from /xsd:schema/xsd:complexType[517]
        class CPACSLongFloorBeam
        {
        public:
            TIGL_EXPORT CPACSLongFloorBeam(CCPACSLongFloorBeamsAssembly* parent, CTiglUIDManager* uidMgr);
            
            TIGL_EXPORT virtual ~CPACSLongFloorBeam();
            
            TIGL_EXPORT CCPACSLongFloorBeamsAssembly* GetParent() const;
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::string& GetUID() const;
            TIGL_EXPORT virtual void SetUID(const std::string& value);
            
            TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSLongFloorBeamPosition> >& GetLongFloorBeamPositions() const;
            TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSLongFloorBeamPosition> >& GetLongFloorBeamPositions();
            
            TIGL_EXPORT virtual CCPACSLongFloorBeamPosition& AddLongFloorBeamPosition();
            TIGL_EXPORT virtual void RemoveLongFloorBeamPosition(CCPACSLongFloorBeamPosition& ref);
            
        protected:
            CCPACSLongFloorBeamsAssembly* m_parent;
            
            CTiglUIDManager* m_uidMgr;
            
            std::string                                           m_uID;
            std::vector<unique_ptr<CCPACSLongFloorBeamPosition> > m_longFloorBeamPositions;
            
        private:
            #ifdef HAVE_CPP11
            CPACSLongFloorBeam(const CPACSLongFloorBeam&) = delete;
            CPACSLongFloorBeam& operator=(const CPACSLongFloorBeam&) = delete;
            
            CPACSLongFloorBeam(CPACSLongFloorBeam&&) = delete;
            CPACSLongFloorBeam& operator=(CPACSLongFloorBeam&&) = delete;
            #else
            CPACSLongFloorBeam(const CPACSLongFloorBeam&);
            CPACSLongFloorBeam& operator=(const CPACSLongFloorBeam&);
            #endif
        };
    }
    
    // CPACSLongFloorBeam is customized, use type CCPACSLongFloorBeam directly
}
