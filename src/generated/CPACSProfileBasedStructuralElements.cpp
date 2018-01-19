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

#include <CCPACSProfileBasedStructuralElement.h>
#include "CPACSProfileBasedStructuralElements.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSProfileBasedStructuralElements::CPACSProfileBasedStructuralElements(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSProfileBasedStructuralElements::~CPACSProfileBasedStructuralElements() {}
        
        CTiglUIDManager& CPACSProfileBasedStructuralElements::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSProfileBasedStructuralElements::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSProfileBasedStructuralElements::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element profileBasedStructuralElement
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/profileBasedStructuralElement")) {
                tixi::TixiReadElements(tixiHandle, xpath + "/profileBasedStructuralElement", m_profileBasedStructuralElements, m_uidMgr);
            }
            
        }
        
        void CPACSProfileBasedStructuralElements::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element profileBasedStructuralElement
            tixi::TixiSaveElements(tixiHandle, xpath + "/profileBasedStructuralElement", m_profileBasedStructuralElements);
            
        }
        
        const std::vector<unique_ptr<CCPACSProfileBasedStructuralElement> >& CPACSProfileBasedStructuralElements::GetProfileBasedStructuralElements() const
        {
            return m_profileBasedStructuralElements;
        }
        
        std::vector<unique_ptr<CCPACSProfileBasedStructuralElement> >& CPACSProfileBasedStructuralElements::GetProfileBasedStructuralElements()
        {
            return m_profileBasedStructuralElements;
        }
        
        CCPACSProfileBasedStructuralElement& CPACSProfileBasedStructuralElements::AddProfileBasedStructuralElement()
        {
            m_profileBasedStructuralElements.push_back(make_unique<CCPACSProfileBasedStructuralElement>(m_uidMgr));
            return *m_profileBasedStructuralElements.back();
        }
        
        void CPACSProfileBasedStructuralElements::RemoveProfileBasedStructuralElement(CCPACSProfileBasedStructuralElement& ref)
        {
            for (std::size_t i = 0; i < m_profileBasedStructuralElements.size(); i++) {
                if (m_profileBasedStructuralElements[i].get() == &ref) {
                    m_profileBasedStructuralElements.erase(m_profileBasedStructuralElements.begin() + i);
                    return;
                }
            }
            throw CTiglError("Element not found");
        }
        
    }
}
