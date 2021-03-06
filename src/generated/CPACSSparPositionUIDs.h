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

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSSparSegment
        
        // generated from /xsd:schema/xsd:complexType[814]
        class CPACSSparPositionUIDs
        {
        public:
            TIGL_EXPORT CPACSSparPositionUIDs();
            TIGL_EXPORT virtual ~CPACSSparPositionUIDs();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT virtual const std::vector<std::string>& GetSparPositionUIDs() const;
            TIGL_EXPORT virtual std::vector<std::string>& GetSparPositionUIDs();
            
        protected:
            std::vector<std::string> m_sparPositionUIDs;
            
        private:
            #ifdef HAVE_CPP11
            CPACSSparPositionUIDs(const CPACSSparPositionUIDs&) = delete;
            CPACSSparPositionUIDs& operator=(const CPACSSparPositionUIDs&) = delete;
            
            CPACSSparPositionUIDs(CPACSSparPositionUIDs&&) = delete;
            CPACSSparPositionUIDs& operator=(CPACSSparPositionUIDs&&) = delete;
            #else
            CPACSSparPositionUIDs(const CPACSSparPositionUIDs&);
            CPACSSparPositionUIDs& operator=(const CPACSSparPositionUIDs&);
            #endif
        };
    }
    
    // CPACSSparPositionUIDs is customized, use type CCPACSWingSparPositionUIDs directly
}
