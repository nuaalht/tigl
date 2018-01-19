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

#include "CPACSAlignmentCrossBeam.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSAlignmentCrossBeam::CPACSAlignmentCrossBeam(CTiglUIDManager* uidMgr) :
            m_uidMgr(uidMgr) {}
        
        CPACSAlignmentCrossBeam::~CPACSAlignmentCrossBeam()
        {
            if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
        }
        
        CTiglUIDManager& CPACSAlignmentCrossBeam::GetUIDManager()
        {
            return *m_uidMgr;
        }
        
        const CTiglUIDManager& CPACSAlignmentCrossBeam::GetUIDManager() const
        {
            return *m_uidMgr;
        }
        
        void CPACSAlignmentCrossBeam::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
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
            
            // read element offset1LocX
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/offset1LocX")) {
                m_offset1LocX = tixi::TixiGetElement<double>(tixiHandle, xpath + "/offset1LocX");
            }
            
            // read element offset2LocX
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/offset2LocX")) {
                m_offset2LocX = tixi::TixiGetElement<double>(tixiHandle, xpath + "/offset2LocX");
            }
            
            // read element rotationLocX
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/rotationLocX")) {
                m_rotationLocX = tixi::TixiGetElement<double>(tixiHandle, xpath + "/rotationLocX");
            }
            
            // read element translationLocY
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/translationLocY")) {
                m_translationLocY = tixi::TixiGetElement<double>(tixiHandle, xpath + "/translationLocY");
            }
            
            // read element translationLocZ
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/translationLocZ")) {
                m_translationLocZ = tixi::TixiGetElement<double>(tixiHandle, xpath + "/translationLocZ");
            }
            
            if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
        }
        
        void CPACSAlignmentCrossBeam::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
            // write element offset1LocX
            if (m_offset1LocX) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/offset1LocX");
                tixi::TixiSaveElement(tixiHandle, xpath + "/offset1LocX", *m_offset1LocX);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/offset1LocX")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/offset1LocX");
                }
            }
            
            // write element offset2LocX
            if (m_offset2LocX) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/offset2LocX");
                tixi::TixiSaveElement(tixiHandle, xpath + "/offset2LocX", *m_offset2LocX);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/offset2LocX")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/offset2LocX");
                }
            }
            
            // write element rotationLocX
            if (m_rotationLocX) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/rotationLocX");
                tixi::TixiSaveElement(tixiHandle, xpath + "/rotationLocX", *m_rotationLocX);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/rotationLocX")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/rotationLocX");
                }
            }
            
            // write element translationLocY
            if (m_translationLocY) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/translationLocY");
                tixi::TixiSaveElement(tixiHandle, xpath + "/translationLocY", *m_translationLocY);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/translationLocY")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/translationLocY");
                }
            }
            
            // write element translationLocZ
            if (m_translationLocZ) {
                tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/translationLocZ");
                tixi::TixiSaveElement(tixiHandle, xpath + "/translationLocZ", *m_translationLocZ);
            } else {
                if (tixi::TixiCheckElement(tixiHandle, xpath + "/translationLocZ")) {
                    tixi::TixiRemoveElement(tixiHandle, xpath + "/translationLocZ");
                }
            }
            
        }
        
        const std::string& CPACSAlignmentCrossBeam::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSAlignmentCrossBeam::SetUID(const std::string& value)
        {
            if (m_uidMgr) {
                m_uidMgr->TryUnregisterObject(m_uID);
                m_uidMgr->RegisterObject(value, *this);
            }
            m_uID = value;
        }
        
        const boost::optional<double>& CPACSAlignmentCrossBeam::GetOffset1LocX() const
        {
            return m_offset1LocX;
        }
        
        void CPACSAlignmentCrossBeam::SetOffset1LocX(const double& value)
        {
            m_offset1LocX = value;
        }
        
        void CPACSAlignmentCrossBeam::SetOffset1LocX(const boost::optional<double>& value)
        {
            m_offset1LocX = value;
        }
        
        const boost::optional<double>& CPACSAlignmentCrossBeam::GetOffset2LocX() const
        {
            return m_offset2LocX;
        }
        
        void CPACSAlignmentCrossBeam::SetOffset2LocX(const double& value)
        {
            m_offset2LocX = value;
        }
        
        void CPACSAlignmentCrossBeam::SetOffset2LocX(const boost::optional<double>& value)
        {
            m_offset2LocX = value;
        }
        
        const boost::optional<double>& CPACSAlignmentCrossBeam::GetRotationLocX() const
        {
            return m_rotationLocX;
        }
        
        void CPACSAlignmentCrossBeam::SetRotationLocX(const double& value)
        {
            m_rotationLocX = value;
        }
        
        void CPACSAlignmentCrossBeam::SetRotationLocX(const boost::optional<double>& value)
        {
            m_rotationLocX = value;
        }
        
        const boost::optional<double>& CPACSAlignmentCrossBeam::GetTranslationLocY() const
        {
            return m_translationLocY;
        }
        
        void CPACSAlignmentCrossBeam::SetTranslationLocY(const double& value)
        {
            m_translationLocY = value;
        }
        
        void CPACSAlignmentCrossBeam::SetTranslationLocY(const boost::optional<double>& value)
        {
            m_translationLocY = value;
        }
        
        const boost::optional<double>& CPACSAlignmentCrossBeam::GetTranslationLocZ() const
        {
            return m_translationLocZ;
        }
        
        void CPACSAlignmentCrossBeam::SetTranslationLocZ(const double& value)
        {
            m_translationLocZ = value;
        }
        
        void CPACSAlignmentCrossBeam::SetTranslationLocZ(const boost::optional<double>& value)
        {
            m_translationLocZ = value;
        }
        
    }
}
