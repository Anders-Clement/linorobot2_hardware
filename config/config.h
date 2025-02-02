// Copyright (c) 2021 Juan Miguel Jimeno
//
// Licensed under the Apache License, Version 2.0 (the "License");
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

#ifdef USE_POLYBOT_CONFIG
    #include "custom/polybot_config.h"
#endif

#ifdef USE_BEEBO_CONFIG
    #include "custom/beebo_config.h"
#endif

#ifdef USE_BEEBO_M_CONFIG
    #include "custom/beebo_m_config.h"
#endif

#ifdef USE_SQUARE_CONFIG
    #include "custom/square_config.h"
#endif

#ifdef USE_DEV_CONFIG
    #include "custom/dev_config.h"
#endif

#if !defined (USE_BEEBO_CONFIG) && !defined (USE_DEV_CONFIG) && !defined (USE_SQUARE_CONFIG) && !defined (USE_BEEBO_M_CONFIG) && !defined (USE_POLYBOT_CONFIG)
    #include "lino_base_config.h"
#endif

#ifndef ROS_NAMESPACE
    #define ROS_NAMESPACE ""
#endif

#ifndef ROS_DOMAIN_ID
    #define ROS_DOMAIN_ID 0
#endif