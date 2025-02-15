
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

#include "antara/gaming/event/key.released.hpp"

namespace antara::gaming::event
{
    key_released::key_released(antara::gaming::input::key key_, bool alt_,
                               bool control_,
                               bool shift_,
                               bool system_) noexcept : key(key_), alt(alt_), control(control_), shift(shift_),
                                                        system(system_)
    {

    }

    key_released::key_released() noexcept : key(input::key::a), alt(false), control(false), shift(false), system(false)
    {

    }
}