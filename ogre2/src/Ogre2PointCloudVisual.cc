/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <ignition/common/Console.hh>

#include "ignition/rendering/ogre2/Ogre2DynamicRenderable.hh"
#include "ignition/rendering/ogre2/Ogre2PointCloudVisual.hh"
#include "ignition/rendering/ogre2/Ogre2Material.hh"
#include "ignition/rendering/ogre2/Ogre2Mesh.hh"
#include "ignition/rendering/ogre2/Ogre2Scene.hh"
#include "ignition/rendering/ogre2/Ogre2Visual.hh"

using namespace ignition;
using namespace rendering;

//////////////////////////////////////////////////
Ogre2PointCloudVisual::Ogre2PointCloudVisual()
{
    // BasePointCloudVisual::Init();
}

//////////////////////////////////////////////////
Ogre2PointCloudVisual::~Ogre2PointCloudVisual()
{
    // no ops
}

//////////////////////////////////////////////////
void Ogre2PointCloudVisual::Init()
{
    BasePointCloudVisual::Init();
}

//////////////////////////////////////////////////
void Ogre2PointCloudVisual::PreRender()
{
    // no ops
}


//////////////////////////////////////////////////
void Ogre2PointCloudVisual::Destroy()
{
    // no ops
}
