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
#include "CPACSSheetPoints.h"
#include "tigl_internal.h"

namespace tigl
{
    class CTiglUIDManager;
    
    namespace generated
    {
        // This class is used in:
        // CPACSSheetList3D
        
        // generated from /xsd:schema/xsd:complexType[795]
        class CPACSSheet3D
        {
        public:
            TIGL_EXPORT CPACSSheet3D(CTiglUIDManager* uidMgr);
            TIGL_EXPORT virtual ~CPACSSheet3D();
            
            TIGL_EXPORT CTiglUIDManager& GetUIDManager();
            TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::string& GetUID() const;
            TIGL_EXPORT virtual void SetUID(const std::string& value);
            
            TIGL_EXPORT virtual const std::string& GetName() const;
            TIGL_EXPORT virtual void SetName(const std::string& value);
            
            TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
            TIGL_EXPORT virtual void SetDescription(const std::string& value);
            TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);
            
            TIGL_EXPORT virtual const CPACSSheetPoints& GetSheetPoints() const;
            TIGL_EXPORT virtual CPACSSheetPoints& GetSheetPoints();
            
        protected:
            CTiglUIDManager* m_uidMgr;
            
            std::string                  m_uID;
            std::string                  m_name;
            boost::optional<std::string> m_description;
            CPACSSheetPoints             m_sheetPoints;
            
        private:
            #ifdef HAVE_CPP11
            CPACSSheet3D(const CPACSSheet3D&) = delete;
            CPACSSheet3D& operator=(const CPACSSheet3D&) = delete;
            
            CPACSSheet3D(CPACSSheet3D&&) = delete;
            CPACSSheet3D& operator=(CPACSSheet3D&&) = delete;
            #else
            CPACSSheet3D(const CPACSSheet3D&);
            CPACSSheet3D& operator=(const CPACSSheet3D&);
            #endif
        };
    }
    
    // Aliases in tigl namespace
    #ifdef HAVE_CPP11
    using CCPACSSheet3D = generated::CPACSSheet3D;
    #else
    typedef generated::CPACSSheet3D CCPACSSheet3D;
    #endif
}
