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

#include <memory> // std::unique_ptr
#include "base.system.hpp"

namespace antara::gaming::ecs::event
{
    struct add_base_system
    {
        add_base_system(std::unique_ptr<ecs::base_system> system_ptr_ = nullptr) noexcept;
        std::unique_ptr<ecs::base_system> system_ptr{nullptr};
    };
}