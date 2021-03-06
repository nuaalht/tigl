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
#include <CCPACSRotorBladeAttachments.h>
#include <string>
#include <TiglRotorHubType.h>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
    class CTiglUIDManager;
    class CCPACSRotor;
    
    namespace generated
    {
        // This class is used in:
        // CPACSRotor
        
        // generated from /xsd:schema/xsd:complexType[770]
        class CPACSRotorHub
        {
        public:
            TIGL_EXPORT CPACSRotorHub(CCPACSRotor* parent, CTiglUIDManager* uidMgr);
            
            TIGL_EXPORT virtual ~CPACSRotorHub();
            
            TIGL_EXPORT CCPACSRotor* GetParent() const;
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::string& GetUID() const;
            TIGL_EXPORT virtual void SetUID(const std::string& value);
            
            TIGL_EXPORT virtual const boost::optional<std::string>& GetName() const;
            TIGL_EXPORT virtual void SetName(const boost::optional<std::string>& value);
            
            TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
            TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);
            
            TIGL_EXPORT virtual const boost::optional<TiglRotorHubType>& GetType() const;
            TIGL_EXPORT virtual void SetType(const boost::optional<TiglRotorHubType>& value);
            
            TIGL_EXPORT virtual const CCPACSRotorBladeAttachments& GetRotorBladeAttachments() const;
            TIGL_EXPORT virtual CCPACSRotorBladeAttachments& GetRotorBladeAttachments();
            
        protected:
            CCPACSRotor* m_parent;
            
            CTiglUIDManager* m_uidMgr;
            
            std::string                       m_uID;
            boost::optional<std::string>      m_name;
            boost::optional<std::string>      m_description;
            boost::optional<TiglRotorHubType> m_type;
            CCPACSRotorBladeAttachments       m_rotorBladeAttachments;
            
        private:
            #ifdef HAVE_CPP11
            CPACSRotorHub(const CPACSRotorHub&) = delete;
            CPACSRotorHub& operator=(const CPACSRotorHub&) = delete;
            
            CPACSRotorHub(CPACSRotorHub&&) = delete;
            CPACSRotorHub& operator=(CPACSRotorHub&&) = delete;
            #else
            CPACSRotorHub(const CPACSRotorHub&);
            CPACSRotorHub& operator=(const CPACSRotorHub&);
            #endif
        };
    }
    
    // CPACSRotorHub is customized, use type CCPACSRotorHub directly
}
