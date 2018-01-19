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

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <string>
#include <tixi.h>
#include <typeinfo>
#include "CPACSAlignmentStringFrame.h"
#include "CPACSContinuity.h"
#include "CPACSInterpolation.h"
#include "CreateIfNotExists.h"
#include "CTiglError.h"
#include "tigl_internal.h"

namespace tigl
{
    class CTiglUIDManager;
    class CCPACSFrame;
    class CCPACSFuselageStringer;
    
    namespace generated
    {
        // This class is used in:
        // CPACSFrame
        // CPACSStringer
        
        // generated from /xsd:schema/xsd:complexType[838]
        class CPACSStringerFramePosition
        {
        public:
            TIGL_EXPORT CPACSStringerFramePosition(CCPACSFrame* parent, CTiglUIDManager* uidMgr);
            TIGL_EXPORT CPACSStringerFramePosition(CCPACSFuselageStringer* parent, CTiglUIDManager* uidMgr);
            
            TIGL_EXPORT virtual ~CPACSStringerFramePosition();
            
            template<typename P>
            bool IsParent() const
            {
                return m_parentType != NULL && *m_parentType == typeid(P);
            }
            
            template<typename P>
            P* GetParent() const
            {
                #ifdef HAVE_STDIS_SAME
                static_assert(std::is_same<P, CCPACSFrame>::value || std::is_same<P, CCPACSFuselageStringer>::value, "template argument for P is not a parent class of CPACSStringerFramePosition");
                #endif
                if (!IsParent<P>()) {
                    throw CTiglError("bad parent");
                }
                return static_cast<P*>(m_parent);
            }
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::string& GetUID() const;
            TIGL_EXPORT virtual void SetUID(const std::string& value);
            
            TIGL_EXPORT virtual const std::string& GetStructuralElementUID() const;
            TIGL_EXPORT virtual void SetStructuralElementUID(const std::string& value);
            
            TIGL_EXPORT virtual const double& GetPositionX() const;
            TIGL_EXPORT virtual void SetPositionX(const double& value);
            
            TIGL_EXPORT virtual const double& GetReferenceY() const;
            TIGL_EXPORT virtual void SetReferenceY(const double& value);
            
            TIGL_EXPORT virtual const double& GetReferenceZ() const;
            TIGL_EXPORT virtual void SetReferenceZ(const double& value);
            
            TIGL_EXPORT virtual const double& GetReferenceAngle() const;
            TIGL_EXPORT virtual void SetReferenceAngle(const double& value);
            
            TIGL_EXPORT virtual const boost::optional<CPACSAlignmentStringFrame>& GetAlignment() const;
            TIGL_EXPORT virtual boost::optional<CPACSAlignmentStringFrame>& GetAlignment();
            
            TIGL_EXPORT virtual const boost::optional<CPACSContinuity>& GetContinuity() const;
            TIGL_EXPORT virtual void SetContinuity(const CPACSContinuity& value);
            TIGL_EXPORT virtual void SetContinuity(const boost::optional<CPACSContinuity>& value);
            
            TIGL_EXPORT virtual const boost::optional<CPACSInterpolation>& GetInterpolation() const;
            TIGL_EXPORT virtual void SetInterpolation(const CPACSInterpolation& value);
            TIGL_EXPORT virtual void SetInterpolation(const boost::optional<CPACSInterpolation>& value);
            
            TIGL_EXPORT virtual CPACSAlignmentStringFrame& GetAlignment(CreateIfNotExistsTag);
            TIGL_EXPORT virtual void RemoveAlignment();
            
        protected:
            void* m_parent;
            const std::type_info* m_parentType;
            
            CTiglUIDManager* m_uidMgr;
            
            std::string                                m_uID;
            std::string                                m_structuralElementUID;
            double                                     m_positionX;
            double                                     m_referenceY;
            double                                     m_referenceZ;
            double                                     m_referenceAngle;
            boost::optional<CPACSAlignmentStringFrame> m_alignment;
            boost::optional<CPACSContinuity>           m_continuity;
            boost::optional<CPACSInterpolation>        m_interpolation;
            
        private:
            #ifdef HAVE_CPP11
            CPACSStringerFramePosition(const CPACSStringerFramePosition&) = delete;
            CPACSStringerFramePosition& operator=(const CPACSStringerFramePosition&) = delete;
            
            CPACSStringerFramePosition(CPACSStringerFramePosition&&) = delete;
            CPACSStringerFramePosition& operator=(CPACSStringerFramePosition&&) = delete;
            #else
            CPACSStringerFramePosition(const CPACSStringerFramePosition&);
            CPACSStringerFramePosition& operator=(const CPACSStringerFramePosition&);
            #endif
        };
    }
    
    // CPACSStringerFramePosition is customized, use type CCPACSFuselageStringerFramePosition directly
}
