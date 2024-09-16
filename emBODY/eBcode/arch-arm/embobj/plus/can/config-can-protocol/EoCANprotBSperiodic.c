/*
 * Copyright (C) 2022 iCub Facility - Istituto Italiano di Tecnologia
 * Author:  Luca Tricerri
 * email:   luca.tricerri@iit.it
 * website: www.robotcub.org
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
*/

// --------------------------------------------------------------------------------------------------------------------
// - external dependencies
// --------------------------------------------------------------------------------------------------------------------


#include "EoCommon.h"
#include "embot_app_eth_theBATservice.h"

// --------------------------------------------------------------------------------------------------------------------
// - declaration of extern public interface
// --------------------------------------------------------------------------------------------------------------------

#include "EOtheCANprotocol_functions.h" 


// --------------------------------------------------------------------------------------------------------------------
// - declaration of extern hidden interface 
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - #define with internal scope
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition (and initialisation) of extern variables, but better using _get(), _set() 
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - typedef with internal scope
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - declaration of static functions
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition (and initialisation) of static variables
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition of extern public functions
// --------------------------------------------------------------------------------------------------------------------

#include "embot_core.h"
extern eOresult_t eocanprotINperiodic_parser_PER_BS_MSG__INFO(eOcanframe_t *frame, eOcanport_t port)
{
    embot::app::eth::theBATservice::canFrameDescriptor cfd 
    { 
        port, 
        frame, 
        embot::app::eth::theBATservice::canFrameDescriptor::Type::info
    };
    embot::app::eth::theBATservice::getInstance().AcceptCANframe(cfd);
    return(eores_OK);
}

extern eOresult_t eocanprotINperiodic_parser_PER_BS_MSG__STATUS_BMS(eOcanframe_t *frame, eOcanport_t port)
{
    embot::app::eth::theBATservice::canFrameDescriptor cfd 
    { 
        port, 
        frame, 
        embot::app::eth::theBATservice::canFrameDescriptor::Type::status_bms
    };
    embot::app::eth::theBATservice::getInstance().AcceptCANframe(cfd);
    return(eores_OK);
}

extern eOresult_t eocanprotINperiodic_parser_PER_BS_MSG__STATUS_BAT(eOcanframe_t *frame, eOcanport_t port)
{
    embot::app::eth::theBATservice::canFrameDescriptor cfd 
    { 
        port, 
        frame, 
        embot::app::eth::theBATservice::canFrameDescriptor::Type::status_bat
    };
    embot::app::eth::theBATservice::getInstance().AcceptCANframe(cfd);
    return(eores_OK);
}

extern eOresult_t eocanprotINperiodic_parser_PER_BS_MSG__ALLTHEOTHERS(eOcanframe_t *frame, eOcanport_t port)
{
    return(eores_OK);   
}

extern eOresult_t eocanprotINperiodic_parser_PER_BS_MSG__ADVANCED_STATUS_BMS(eOcanframe_t *frame, eOcanport_t port)
{
    embot::app::eth::theBATservice::canFrameDescriptor cfd 
    { 
        port, 
        frame, 
        embot::app::eth::theBATservice::canFrameDescriptor::Type::adv_status_bms
    };
    embot::app::eth::theBATservice::getInstance().AcceptCANframe(cfd);
    return(eores_OK);
}

extern eOresult_t eocanprotINperiodic_parser_PER_BS_MSG__SPECIAL_COMMAND_BMS(eOcanframe_t *frame, eOcanport_t port)
{
    embot::app::eth::theBATservice::canFrameDescriptor cfd 
    { 
        port, 
        frame, 
        embot::app::eth::theBATservice::canFrameDescriptor::Type::special_command
    };
    embot::app::eth::theBATservice::getInstance().AcceptCANframe(cfd);
    return(eores_OK);
}

extern eOresult_t eocanprotINperiodic_former_PER_BS_MSG__SPECIAL_COMMAND_BMS(eOcanprot_descriptor_t *descriptor, eOcanframe_t *frame)
{
    frame->id           = EOCANPROT_CREATE_CANID_PERIODIC(eocanprot_msgclass_periodicBattery, descriptor->loc.addr, 0xF);
    frame->id_type      = eocanframeID_std11bits;
    frame->frame_type   = eocanframetype_data; 
    frame->size         = 2;
    frame->data[0]      = descriptor->cmd.type;
    memcpy(&frame->data[1], descriptor->cmd.value, 1);
    
    return(eores_OK);                
}

// --------------------------------------------------------------------------------------------------------------------
// - definition of extern hidden functions 
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition of static functions 
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - end-of-file (leave a blank line after)
// --------------------------------------------------------------------------------------------------------------------





