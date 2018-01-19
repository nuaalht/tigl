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
    class CCPACSCrossBeamStrutAssemblyPosition;
    class CCPACSFuselageStructure;
    
    namespace generated
    {
        // This class is used in:
        // CPACSFuselageStructure
        
        // generated from /xsd:schema/xsd:complexType[112]
        class CPACSCargoCrossBeamStrutsAssembly
        {
        public:
            TIGL_EXPORT CPACSCargoCrossBeamStrutsAssembly(CCPACSFuselageStructure* parent, CTiglUIDManager* uidMgr);
            
            TIGL_EXPORT virtual ~CPACSCargoCrossBeamStrutsAssembly();
            
            TIGL_EXPORT CCPACSFuselageStructure* GetParent() const;
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSCrossBeamStrutAssemblyPosition> >& GetCargoCrossBeamStruts() const;
            TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSCrossBeamStrutAssemblyPosition> >& GetCargoCrossBeamStruts();
            
            TIGL_EXPORT virtual CCPACSCrossBeamStrutAssemblyPosition& AddCargoCrossBeamStrut();
            TIGL_EXPORT virtual void RemoveCargoCrossBeamStrut(CCPACSCrossBeamStrutAssemblyPosition& ref);
            
        protected:
            CCPACSFuselageStructure* m_parent;
            
            CTiglUIDManager* m_uidMgr;
            
            std::vector<unique_ptr<CCPACSCrossBeamStrutAssemblyPosition> > m_cargoCrossBeamStruts;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCargoCrossBeamStrutsAssembly(const CPACSCargoCrossBeamStrutsAssembly&) = delete;
            CPACSCargoCrossBeamStrutsAssembly& operator=(const CPACSCargoCrossBeamStrutsAssembly&) = delete;
            
            CPACSCargoCrossBeamStrutsAssembly(CPACSCargoCrossBeamStrutsAssembly&&) = delete;
            CPACSCargoCrossBeamStrutsAssembly& operator=(CPACSCargoCrossBeamStrutsAssembly&&) = delete;
            #else
            CPACSCargoCrossBeamStrutsAssembly(const CPACSCargoCrossBeamStrutsAssembly&);
            CPACSCargoCrossBeamStrutsAssembly& operator=(const CPACSCargoCrossBeamStrutsAssembly&);
            #endif
        };
    }
    
    // CPACSCargoCrossBeamStrutsAssembly is customized, use type CCPACSCargoCrossBeamStrutsAssembly directly
}
