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

#include <meta/sequence/list.hpp>
#include "antara/gaming/event/quit.game.hpp"
#include "antara/gaming/event/start.game.hpp"
#include "antara/gaming/event/key.pressed.hpp"
#include "antara/gaming/event/key.released.hpp"
#include "antara/gaming/event/mouse.moved.hpp"
#include "antara/gaming/event/mouse.button.pressed.hpp"
#include "antara/gaming/event/mouse.button.released.hpp"

namespace antara::gaming::event
{
    using events_list = doom::meta::list<
            quit_game,
            key_pressed,
            key_released,
            start_game,
            mouse_moved,
            mouse_button_pressed,
            mouse_button_released>;
}