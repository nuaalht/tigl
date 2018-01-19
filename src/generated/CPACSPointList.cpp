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

#include <CCPACSPoint.h>
#include "CPACSPointList.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSPointList::CPACSPointList(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSPointList::~CPACSPointList() {}
        
        CTiglUIDManager& CPACSPointList::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSPointList::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSPointList::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element point
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/point")) {
                tixi::TixiReadElements(tixiHandle, xpath + "/point", m_points, m_uidMgr);
            }
            
        }
        
        void CPACSPointList::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element point
            tixi::TixiSaveElements(tixiHandle, xpath + "/point", m_points);
            
        }
        
        const std::vector<unique_ptr<CCPACSPoint> >& CPACSPointList::GetPoints() const
        {
            return m_points;
        }
        
        std::vector<unique_ptr<CCPACSPoint> >& CPACSPointList::GetPoints()
        {
            return m_points;
        }
        
        CCPACSPoint& CPACSPointList::AddPoint()
        {
            m_points.push_back(make_unique<CCPACSPoint>(m_uidMgr));
            return *m_points.back();
        }
        
        void CPACSPointList::RemovePoint(CCPACSPoint& ref)
        {
            for (std::size_t i = 0; i < m_points.size(); i++) {
                if (m_points[i].get() == &ref) {
                    m_points.erase(m_points.begin() + i);
                    return;
                }
            }
            throw CTiglError("Element not found");
        }
        
    }
}
