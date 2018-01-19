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

#include "CPACSDoorSurroundStructurePosition.h"
#include "CPACSDoorSurroundStructuresAssembly.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSDoorSurroundStructuresAssembly::CPACSDoorSurroundStructuresAssembly(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSDoorSurroundStructuresAssembly::~CPACSDoorSurroundStructuresAssembly() {}
        
        CTiglUIDManager& CPACSDoorSurroundStructuresAssembly::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSDoorSurroundStructuresAssembly::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSDoorSurroundStructuresAssembly::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element doorSurroundStructure
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/doorSurroundStructure")) {
                tixi::TixiReadElements(tixiHandle, xpath + "/doorSurroundStructure", m_doorSurroundStructures, m_uidMgr);
            }
            
        }
        
        void CPACSDoorSurroundStructuresAssembly::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element doorSurroundStructure
            tixi::TixiSaveElements(tixiHandle, xpath + "/doorSurroundStructure", m_doorSurroundStructures);
            
        }
        
        const std::vector<unique_ptr<CPACSDoorSurroundStructurePosition> >& CPACSDoorSurroundStructuresAssembly::GetDoorSurroundStructures() const
        {
            return m_doorSurroundStructures;
        }
        
        std::vector<unique_ptr<CPACSDoorSurroundStructurePosition> >& CPACSDoorSurroundStructuresAssembly::GetDoorSurroundStructures()
        {
            return m_doorSurroundStructures;
        }
        
        CPACSDoorSurroundStructurePosition& CPACSDoorSurroundStructuresAssembly::AddDoorSurroundStructure()
        {
            m_doorSurroundStructures.push_back(make_unique<CPACSDoorSurroundStructurePosition>(m_uidMgr));
            return *m_doorSurroundStructures.back();
        }
        
        void CPACSDoorSurroundStructuresAssembly::RemoveDoorSurroundStructure(CPACSDoorSurroundStructurePosition& ref)
        {
            for (std::size_t i = 0; i < m_doorSurroundStructures.size(); i++) {
                if (m_doorSurroundStructures[i].get() == &ref) {
                    m_doorSurroundStructures.erase(m_doorSurroundStructures.begin() + i);
                    return;
                }
            }
            throw CTiglError("Element not found");
        }
        
    }
}
