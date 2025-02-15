/******************************************************************************
 * Copyright © 2013-2019 The Komodo Platform Developers.                      *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * Komodo Platform software, including this file may be copied, modified,     *
 * propagated or distributed except according to the terms contained in the   *
 * LICENSE file                                                               *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/

#pragma once

#include <vector>

#ifdef ANTARA_LUA_SCRIPTING_ENABLED

#include <sol/sol.hpp>

#endif

#include "antara/gaming/transform/component.position.hpp"
#include "antara/gaming/core/safe.refl.hpp"
#include "antara/gaming/graphics/component.color.hpp"

namespace antara::gaming::geometry
{
    enum vertex_geometry_type
    {
        points,
        lines,
        line_strip,
        triangles,
        triangle_strip,
        triangle_fan,
        quads
    };

    struct vertex
    {
        transform::position_2d pos{transform::position_2d::scalar(0.f)};
        transform::position_2d texture_pos{transform::position_2d::scalar(0.f)};
        graphics::color pixel_color{graphics::white};
    };

    struct vertex_array
    {
        vertex_array() noexcept = default;

        vertex_array(std::vector<vertex> vertices_) noexcept : vertices(std::move(vertices_))
        {

        }

        vertex_array(std::vector<vertex> vertices_, vertex_geometry_type geometry_type_) noexcept : vertices(
                std::move(vertices_)), geometry_type(geometry_type_)
        {

        }

        std::vector<vertex> vertices;
        vertex_geometry_type geometry_type;

#ifdef ANTARA_LUA_SCRIPTING_ENABLED
        using constructors = sol::constructors<vertex_array(), vertex_array(std::vector<vertex>),
                vertex_array(std::vector<vertex>, vertex_geometry_type)>;
#endif
    };
}

REFL_AUTO(type(antara::gaming::geometry::vertex), field(pos), field(texture_pos), field(pixel_color))
REFL_AUTO(type(antara::gaming::geometry::vertex_array), field(vertices), field(geometry_type))