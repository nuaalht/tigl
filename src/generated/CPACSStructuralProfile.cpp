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
#include "CCPACSStructuralProfiles.h"
#include "CPACSStructuralProfile.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSStructuralProfile::CPACSStructuralProfile(CCPACSStructuralProfiles* parent, CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr), 
            m_pointList(m_uidMgr), 
            m_sheetList(this, m_uidMgr)
        {
            //assert(parent != NULL);
            m_parent = parent;
        }
        
        CPACSStructuralProfile::~CPACSStructuralProfile()
        {
            if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
        }
        
        CCPACSStructuralProfiles* CPACSStructuralProfile::GetParent() const
        {
            return m_parent;
        }
        
        CTiglUIDManager& CPACSStructuralProfile::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSStructuralProfile::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSStructuralProfile::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
                if (m_uID.empty()) {
                    LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
                }
            }
            else {
                LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
            }
            
            // read element name
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/name")) {
                m_name = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
                if (m_name.empty()) {
                    LOG(WARNING) << "Required element name is empty at xpath " << xpath;
                }
            }
            else {
                LOG(ERROR) << "Required element name is missing at xpath " << xpath;
            }
            
            // read element description
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/description")) {
                m_description = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
                if (m_description->empty()) {
                    LOG(WARNING) << "Optional element description is present but empty at xpath " << xpath;
                }
            }
            
            // read element pointList
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/pointList")) {
                m_pointList.ReadCPACS(tixiHandle, xpath + "/pointList");
            }
            else {
                LOG(ERROR) << "Required element pointList is missing at xpath " << xpath;
            }
            
            // read element sheetList
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/sheetList")) {
                m_sheetList.ReadCPACS(tixiHandle, xpath + "/sheetList");
            }
            else {
                LOG(ERROR) << "Required element sheetList is missing at xpath " << xpath;
            }
            
            if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
        }
        
        void CPACSStructuralProfile::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
            // write element name
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/name");
            tixi::TixiSaveElement(tixiHandle, xpath + "/name", m_name);
            
            // write element description
            if (m_description) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/description");
                tixi::TixiSaveElement(tixiHandle, xpath + "/description", *m_description);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/description")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/description");
                }
            }
            
            // write element pointList
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/pointList");
            m_pointList.WriteCPACS(tixiHandle, xpath + "/pointList");
            
            // write element sheetList
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/sheetList");
            m_sheetList.WriteCPACS(tixiHandle, xpath + "/sheetList");
            
        }
        
        const std::string& CPACSStructuralProfile::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSStructuralProfile::SetUID(const std::string& value)
        {
            if (m_uidMgr) {
                m_uidMgr->TryUnregisterObject(m_uID);
                m_uidMgr->RegisterObject(value, *this);
            }
            m_uID = value;
        }
        
        const std::string& CPACSStructuralProfile::GetName() const
        {
            return m_name;
        }
        
        void CPACSStructuralProfile::SetName(const std::string& value)
        {
            m_name = value;
        }
        
        const boost::optional<std::string>& CPACSStructuralProfile::GetDescription() const
        {
            return m_description;
        }
        
        void CPACSStructuralProfile::SetDescription(const std::string& value)
        {
            m_description = value;
        }
        
        void CPACSStructuralProfile::SetDescription(const boost::optional<std::string>& value)
        {
            m_description = value;
        }
        
        const CCPACSPointListXY& CPACSStructuralProfile::GetPointList() const
        {
            return m_pointList;
        }
        
        CCPACSPointListXY& CPACSStructuralProfile::GetPointList()
        {
            return m_pointList;
        }
        
        const CCPACSStructuralProfileSheets& CPACSStructuralProfile::GetSheetList() const
        {
            return m_sheetList;
        }
        
        CCPACSStructuralProfileSheets& CPACSStructuralProfile::GetSheetList()
        {
            return m_sheetList;
        }
        
    }
}
