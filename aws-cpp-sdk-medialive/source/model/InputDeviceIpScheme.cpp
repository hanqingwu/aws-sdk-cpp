﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/InputDeviceIpScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputDeviceIpSchemeMapper
      {

        static const int STATIC__HASH = HashingUtils::HashString("STATIC");
        static const int DHCP_HASH = HashingUtils::HashString("DHCP");


        InputDeviceIpScheme GetInputDeviceIpSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return InputDeviceIpScheme::STATIC_;
          }
          else if (hashCode == DHCP_HASH)
          {
            return InputDeviceIpScheme::DHCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceIpScheme>(hashCode);
          }

          return InputDeviceIpScheme::NOT_SET;
        }

        Aws::String GetNameForInputDeviceIpScheme(InputDeviceIpScheme enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceIpScheme::STATIC_:
            return "STATIC";
          case InputDeviceIpScheme::DHCP:
            return "DHCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceIpSchemeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
