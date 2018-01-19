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

#include <cassert>
#include <CCPACSCrossBeamAssemblyPosition.h>
#include "CCPACSFuselageStructure.h"
#include "CPACSCargoCrossBeamsAssembly.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSCargoCrossBeamsAssembly::CPACSCargoCrossBeamsAssembly(CCPACSFuselageStructure* parent, CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr)
        {
            //assert(parent != NULL);
            m_parent = parent;
        }
        
        CPACSCargoCrossBeamsAssembly::~CPACSCargoCrossBeamsAssembly() {}
        
        CCPACSFuselageStructure* CPACSCargoCrossBeamsAssembly::GetParent() const
        {
            return m_parent;
        }
        
        CTiglUIDManager& CPACSCargoCrossBeamsAssembly::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSCargoCrossBeamsAssembly::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSCargoCrossBeamsAssembly::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element cargoCrossBeam
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/cargoCrossBeam")) {
                tixi::TixiReadElements(tixiHandle, xpath + "/cargoCrossBeam", m_cargoCrossBeams, reinterpret_cast<CCPACSCargoCrossBeamsAssembly*>(this), m_uidMgr);
            }
            
        }
        
        void CPACSCargoCrossBeamsAssembly::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element cargoCrossBeam
            tixi::TixiSaveElements(tixiHandle, xpath + "/cargoCrossBeam", m_cargoCrossBeams);
            
        }
        
        const std::vector<unique_ptr<CCPACSCrossBeamAssemblyPosition> >& CPACSCargoCrossBeamsAssembly::GetCargoCrossBeams() const
        {
            return m_cargoCrossBeams;
        }
        
        std::vector<unique_ptr<CCPACSCrossBeamAssemblyPosition> >& CPACSCargoCrossBeamsAssembly::GetCargoCrossBeams()
        {
            return m_cargoCrossBeams;
        }
        
        CCPACSCrossBeamAssemblyPosition& CPACSCargoCrossBeamsAssembly::AddCargoCrossBeam()
        {
            m_cargoCrossBeams.push_back(make_unique<CCPACSCrossBeamAssemblyPosition>(reinterpret_cast<CCPACSCargoCrossBeamsAssembly*>(this), m_uidMgr));
            return *m_cargoCrossBeams.back();
        }
        
        void CPACSCargoCrossBeamsAssembly::RemoveCargoCrossBeam(CCPACSCrossBeamAssemblyPosition& ref)
        {
            for (std::size_t i = 0; i < m_cargoCrossBeams.size(); i++) {
                if (m_cargoCrossBeams[i].get() == &ref) {
                    m_cargoCrossBeams.erase(m_cargoCrossBeams.begin() + i);
                    return;
                }
            }
            throw CTiglError("Element not found");
        }
        
    }
}
