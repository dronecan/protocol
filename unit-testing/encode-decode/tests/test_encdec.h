/*
 * This program source code file is part of DroneCAN protocol specification
 *
 * Copyright (C) 2017 Currawong Engineering Pty Ltd, see AUTHORS.txt for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef TEST_ENCDEC_H
#define TEST_ENCDEC_H

#include <QList>

#include "drone_can_protocol.h"

/**
 * @brief Test_EncDecAllId - Encode each possible CAN ID and test that it matches the decoded value
 * @return
 */
int Test_EncDecAllId();

/**
 * @brief Test_InvalidMsg - Test that invalid message types are correctly detected
 * @return
 */
int Test_InvalidMsg();

QList<int> ListAllClasses();

#endif // TEST_ENCDEC_H
