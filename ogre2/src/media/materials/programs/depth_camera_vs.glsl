/*
 * Copyright (C) 2018 Open Source Robotics Foundation
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


#version 330

in vec4 vertex;
in vec3 normal;
in vec2 uv0;
uniform mat4 worldViewProj;

out gl_PerVertex
{
  vec4 gl_Position;
};

out block
{
  vec2 uv0;
  vec3 cameraDir;
} outVs;

out vec4 point;

void main()
{
  gl_Position = worldViewProj * vertex;
  outVs.uv0.xy = uv0.xy;

  // normal is used in fragment shader to reconstruct
  // viewspace pos from depth buffer data
  // see the `quad_normals` and `camera_far_corners_view_space`
  // param descriptions in
  // https://ogrecave.github.io/ogre/api/2.1/compositor.html
  outVs.cameraDir.xyz = normal.xyz;
}
