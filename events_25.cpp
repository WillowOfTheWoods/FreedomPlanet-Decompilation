#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2118()
{
    // event 904_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_904_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_904_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_904_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(12);
        }
        media.play_id(SOUND_BLASTER_0_238, -1, 1);
    }
    event_904_13_end: ;
}
void Frames::event_func_2119()
{
    // event 905_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_905_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_905_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_905_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(13);
        }
        media.play_id(SOUND_BLASTER_W_2_239, -1, 1);
    }
    event_905_13_end: ;
}
void Frames::event_func_2120()
{
    // event 906_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_906_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_906_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_906_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(14);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
    }
    event_906_13_end: ;
}
void Frames::event_func_2121()
{
    // event 907_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_907_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_907_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_907_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(15);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.stop_sample(SOUND_BLASTER_MM_171);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
    }
    event_907_13_end: ;
}
void Frames::event_func_2122()
{
    // event 908_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_908_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_908_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_908_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(16);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_BLASTER_F_2_237, -1, 1);
    }
    event_908_13_end: ;
}
void Frames::event_func_2123()
{
    // event 909_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_909_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_909_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_909_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(17);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_BLASTER_F_2_237, -1, 1);
    }
    event_909_13_end: ;
}
void Frames::event_func_2124()
{
    // event 910_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_910_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_910_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_910_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(18);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_COMMON_BLASTER10_234, -1, 1);
    }
    event_910_13_end: ;
}
void Frames::event_func_2125()
{
    // event 911_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_911_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_911_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_911_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(19);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.play_id(SOUND_COMMON_BLASTER10_234, -1, 1);
    }
    event_911_13_end: ;
}
void Frames::event_func_2126()
{
    // event 912_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1)) goto event_912_13_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_912_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (1))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_912_13_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_frame(20);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(2)), 0);
        }
        media.stop_sample(SOUND_BLASTER_MM_171);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
    }
    event_912_13_end: ;
}
void Frames::event_func_2127()
{
    // event 913_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1)) goto event_913_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
    }
    event_913_13_end: ;
}
void Frames::event_func_2128()
{
    // event 914_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1)) goto event_914_13_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(21))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_914_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_914_13_end: ;
}
void Frames::event_func_2129()
{
    // event 915_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_1 && group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1)) goto event_915_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_915_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_915_13_end: ;
}
void Frames::event_func_2130()
{
    // event 916_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1)) goto event_916_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (0))) goto event_916_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) > (0))) goto event_916_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_916_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)-1);
    }
    event_916_13_end: ;
}
void Frames::event_func_2131()
{
    // event 917_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1)) goto event_917_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (0))) goto event_917_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) > (0))) goto event_917_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) == (0))) goto event_917_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(0)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_917_13_end: ;
}
void Frames::event_func_2132()
{
    // event 918_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1)) goto event_918_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (0))) goto event_918_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) > (0))) goto event_918_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(6)) > (0))) goto event_918_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(6, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(6)-1);
    }
    event_918_13_end: ;
}
void Frames::event_func_2133()
{
    // event 919_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1)) goto event_919_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (0))) goto event_919_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) > (0))) goto event_919_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(6)) == (0))) goto event_919_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(5, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(1)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_919_13_end: ;
}
void Frames::event_func_2134()
{
    // event 920_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1)) goto event_920_13_end;
        if (!((global_values->get(3)%math_helper%60) == (0))) goto event_920_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_920_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (1))) goto event_920_13_end;
        ((Counter*)get_instance(guirings_122_instances))->subtract(1);
    }
    event_920_13_end: ;
}
void Frames::event_func_2135()
{
    // event 921_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1)) goto event_921_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) == (0))) goto event_921_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (1))) goto event_921_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(0, 0);
    }
    event_921_13_end: ;
}
void Frames::event_func_2136()
{
    // event 922_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_922_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto event_922_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (0))) goto event_922_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
    }
    event_922_13_end: ;
}
void Frames::event_func_2137()
{
    // event 923_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_923_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_923_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
    }
    event_923_13_end: ;
}
void Frames::event_func_2138()
{
    // event 924_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_924_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto event_924_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (25))) goto event_924_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_924_13_end: ;
}
void Frames::event_func_2139()
{
    // event 925_13
    bool or_result_925_13 = false;
    bool or_temp_result_925_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto or_event_925_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto or_event_925_13_0_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (0))) goto or_event_925_13_0_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(2)) > (0))) goto or_event_925_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto or_event_925_13_0_end;
        or_result_925_13 = true;
        or_temp_result_925_13_0 = true;
    }
    or_event_925_13_0_end: ;
    // event 925_13
    bool or_temp_result_925_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto or_event_925_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto or_event_925_13_1_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (0))) goto or_event_925_13_1_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(2)) > (-1))) goto or_event_925_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto or_event_925_13_1_end;
        or_result_925_13 = true;
        or_temp_result_925_13_1 = true;
        or_event_925_13_1_end: ;
        if (!or_result_925_13) goto or_final_or_event_925_13_1_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 30);
        media.play_id(SOUND_ITEM_SHIELDHIT_317, -1, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)%math_helper%5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(2, 1);
    }
    or_final_or_event_925_13_1_end: ;
}
void Frames::event_func_2140()
{
    // event 926_13
    bool or_result_926_13 = false;
    bool or_temp_result_926_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto or_event_926_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto or_event_926_13_0_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (0))) goto or_event_926_13_0_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(2)) <= (0))) goto or_event_926_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto or_event_926_13_0_end;
        or_result_926_13 = true;
        or_temp_result_926_13_0 = true;
    }
    or_event_926_13_0_end: ;
    // event 926_13
    bool or_temp_result_926_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto or_event_926_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto or_event_926_13_1_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (0))) goto or_event_926_13_1_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(2)) <= (-1))) goto or_event_926_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto or_event_926_13_1_end;
        or_result_926_13 = true;
        or_temp_result_926_13_1 = true;
        or_event_926_13_1_end: ;
        if (!or_result_926_13) goto or_final_or_event_926_13_1_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(global_values->get(12)*30+30, 60));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_ITEM_SHIELDBREAK_11, -1, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)%math_helper%5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(11, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, 0);
    }
    or_final_or_event_926_13_1_end: ;
}
void Frames::event_func_2141()
{
    // event 927_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_927_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto event_927_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_927_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.75-2.2*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*0.75-4.2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(global_values->get(12)*30+30, 60));
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        ((Counter*)get_instance(guirings_122_instances))->subtract((((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)*(1+get_max(1-global_values->get(12), -0.75)))/math_helper/5);
        {
            loop_petal_loss_running = true;
            int times = int(((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)/math_helper/2);
            loop_petal_loss_index = 0;
            while (loop_petal_loss_index < times) {
                loop_petal_loss_13();
                if (!loop_petal_loss_running) break;
                loop_petal_loss_index++;
            }
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(1)%math_helper%5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_hurt_77+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_927_13_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_927_13_0_end: ;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(11, 2);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_927_13_end: ;
}
void Frames::event_func_2142()
{
    // event 929_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_929_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (1))) goto event_929_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) == (0))) goto event_929_13_end;
        if (not_always_929_13 > loop_count) {
            not_always_929_13 = loop_count + 2;
            goto event_929_13_end;
        }
        not_always_929_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -2.2*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4.2);
    }
    event_929_13_end: ;
}
void Frames::event_func_2143()
{
    // event 930_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_930_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (height+32))) goto event_930_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_930_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 2);
    }
    event_930_13_end: ;
}
void Frames::event_func_2144()
{
    // event 933_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_933_13_end;
        if (group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto event_933_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_933_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
    }
    event_933_13_end: ;
}
void Frames::event_func_2145()
{
    // event 936_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_936_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (6))) goto event_936_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_936_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_936_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_936_13_end: ;
}
void Frames::event_func_2146()
{
    // event 937_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_check_for_being_hurt_1)) goto event_937_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_937_13_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
    }
    event_937_13_end: ;
}
void Frames::event_func_2147()
{
    // event 940_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (2))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (3))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (11))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (23))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (24))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (25))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (26))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (31))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (32))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (42))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (43))) goto event_940_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (44))) goto event_940_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_940_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_940_13_end: ;
}
void Frames::event_func_2148()
{
    // event 941_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (2))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (3))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (11))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (21))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (23))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (24))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (25))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (26))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (31))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (32))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (42))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (43))) goto event_941_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (44))) goto event_941_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_941_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_941_13_end: ;
}
void Frames::event_func_2149()
{
    // event 942_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_942_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_942_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (50))) goto event_942_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (27))) goto event_942_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) < (500))) goto event_942_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_942_13_end: ;
}
void Frames::event_func_2150()
{
    // event 943_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_943_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_943_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (50))) goto event_943_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (27))) goto event_943_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) < (500))) goto event_943_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_943_13_end: ;
}
void Frames::event_func_2151()
{
    // event 944_13
    bool or_result_944_13 = false;
    bool or_temp_result_944_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_944_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (44))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_944_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_944_13_0_end;
        or_result_944_13 = true;
        or_temp_result_944_13_0 = true;
    }
    or_event_944_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_944_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 944_13
    bool or_temp_result_944_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_944_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (21))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_944_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_944_13_1_end;
        or_result_944_13 = true;
        or_temp_result_944_13_1 = true;
    }
    or_event_944_13_1_end: ;
    if (or_temp_result_944_13_1) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 944_13
    bool or_temp_result_944_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_944_13_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (7))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_944_13_2_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_944_13_2_end;
        or_result_944_13 = true;
        or_temp_result_944_13_2 = true;
        or_event_944_13_2_end: ;
        playerskinsash_418_instances.clear_saved_selection();
        if (or_temp_result_944_13_2) {
            playerothers_123_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_944_13) goto or_final_or_event_944_13_2_end;
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_944_13_0 || or_temp_result_944_13_1 || or_temp_result_944_13_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_944_13_0 || or_temp_result_944_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_944_13_2) {
            playerskinsash_418_instances.restore_selection();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
    }
    or_final_or_event_944_13_2_end: ;
}
void Frames::event_func_2152()
{
    // event 945_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_945_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_945_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_945_13_end: ;
}
void Frames::event_func_2153()
{
    // event 946_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_946_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_946_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_946_13_end: ;
}
void Frames::event_func_2154()
{
    // event 947_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_947_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_947_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (9.5))) goto event_947_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(2);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
    }
    event_947_13_end: ;
}
void Frames::event_func_2155()
{
    // event 948_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_948_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_948_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (9.5))) goto event_948_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(23);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
        }
    }
    event_948_13_end: ;
}
void Frames::event_func_2156()
{
    // event 949_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_949_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) < (3))) goto event_949_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) != (1))) goto event_949_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0.0))) goto event_949_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
    }
    event_949_13_end: ;
}
void Frames::event_func_2157()
{
    // event 950_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_950_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (3))) goto event_950_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
        }
    }
    event_950_13_end: ;
}
void Frames::event_func_2158()
{
    // event 951_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_951_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (4))) goto event_951_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(11);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_951_13_end: ;
}
void Frames::event_func_2159()
{
    // event 952_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_952_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (5))) goto event_952_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(10);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(10);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_952_13_end: ;
}
void Frames::event_func_2160()
{
    // event 953_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_953_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (6))) goto event_953_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
    }
    event_953_13_end: ;
}
void Frames::event_func_2161()
{
    // event 954_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_954_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_954_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(13);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
    }
    event_954_13_end: ;
}
void Frames::event_func_2162()
{
    // event 955_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_955_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_955_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(7);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_955_13_end: ;
}
void Frames::event_func_2163()
{
    // event 956_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_956_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (9))) goto event_956_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(8);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(guiicon_452_instances))->force_animation(8);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_956_13_end: ;
}
void Frames::event_func_2164()
{
    // event 957_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_957_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (10))) goto event_957_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(38);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
    }
    event_957_13_end: ;
}
void Frames::event_func_2165()
{
    // event 958_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_958_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_958_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(5);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_958_13_end: ;
}
void Frames::event_func_2166()
{
    // event 959_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_959_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (12))) goto event_959_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
    }
    event_959_13_end: ;
}
void Frames::event_func_2167()
{
    // event 960_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_960_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(20))) goto event_960_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (12))) goto event_960_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_960_13_end: ;
}
void Frames::event_func_2168()
{
    // event 961_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_961_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (13))) goto event_961_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(12);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
    }
    event_961_13_end: ;
}
void Frames::event_func_2169()
{
    // event 962_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_962_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_962_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(18);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
    }
    event_962_13_end: ;
}
void Frames::event_func_2170()
{
    // event 963_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_963_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (15))) goto event_963_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(26);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_963_13_end: ;
}
void Frames::event_func_2171()
{
    // event 964_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_964_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (16))) goto event_964_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(22);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_964_13_end: ;
}
void Frames::event_func_2172()
{
    // event 965_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_965_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (19))) goto event_965_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(22);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_965_13_end: ;
}
void Frames::event_func_2173()
{
    // event 966_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_966_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_966_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(25);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_966_13_end: ;
}
void Frames::event_func_2174()
{
    // event 967_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_967_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (21))) goto event_967_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(26);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_967_13_end: ;
}
void Frames::event_func_2175()
{
    // event 968_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_968_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (22))) goto event_968_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(29);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_968_13_end: ;
}
void Frames::event_func_2176()
{
    // event 969_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_969_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_969_13_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(30);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
    }
    event_969_13_end: ;
}
void Frames::event_func_2177()
{
    // event 970_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_970_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (24))) goto event_970_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(28);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
    }
    event_970_13_end: ;
}
void Frames::event_func_2178()
{
    // event 971_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_971_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (25))) goto event_971_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(27);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
    }
    event_971_13_end: ;
}
void Frames::event_func_2179()
{
    // event 972_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_972_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_972_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(39);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
    }
    event_972_13_end: ;
}
void Frames::event_func_2180()
{
    // event 973_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_973_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (27))) goto event_973_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(9);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_973_13_end: ;
}
void Frames::event_func_2181()
{
    // event 974_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_974_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (28))) goto event_974_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(36);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
    }
    event_974_13_end: ;
}
void Frames::event_func_2182()
{
    // event 975_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_975_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (29))) goto event_975_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(35);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
    }
    event_975_13_end: ;
}
void Frames::event_func_2183()
{
    // event 976_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_976_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_976_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0.0))) goto event_976_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(14);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
    }
    event_976_13_end: ;
}
void Frames::event_func_2184()
{
    // event 977_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_977_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_977_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0.0))) goto event_977_13_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(24)) goto event_977_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(24);
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(6);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_977_13_end: ;
}
void Frames::event_func_2185()
{
    // event 978_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_978_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (41))) goto event_978_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(15);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
    }
    event_978_13_end: ;
}
void Frames::event_func_2186()
{
    // event 979_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_979_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (42))) goto event_979_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(17);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
    }
    event_979_13_end: ;
}
void Frames::event_func_2187()
{
    // event 980_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_980_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (43))) goto event_980_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(19);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
    }
    event_980_13_end: ;
}
void Frames::event_func_2188()
{
    // event 981_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_981_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (44))) goto event_981_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(21);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
    }
    event_981_13_end: ;
}
void Frames::event_func_2189()
{
    // event 982_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_982_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (45))) goto event_982_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(32);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
    }
    event_982_13_end: ;
}
void Frames::event_func_2190()
{
    // event 983_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_983_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (46))) goto event_983_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(31);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
    }
    event_983_13_end: ;
}
void Frames::event_func_2191()
{
    // event 984_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_984_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_984_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(33);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
    }
    event_984_13_end: ;
}
void Frames::event_func_2192()
{
    // event 985_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_985_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (48))) goto event_985_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(37);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(37);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
    }
    event_985_13_end: ;
}
void Frames::event_func_2193()
{
    // event 986_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_986_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (50))) goto event_986_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(40);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_986_13_end: ;
}
void Frames::event_func_2194()
{
    // event 987_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_987_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (51))) goto event_987_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(41);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(41);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
    }
    event_987_13_end: ;
}
void Frames::event_func_2195()
{
    // event 988_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_988_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_988_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_988_13_end: ;
}
void Frames::event_func_2196()
{
    // event 989_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_989_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_989_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_989_13_end: ;
}
void Frames::event_func_2197()
{
    // event 990_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_990_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_990_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_990_13_end: ;
}
void Frames::event_func_2198()
{
    // event 991_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_991_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (3))) goto event_991_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_991_13_end: ;
}
void Frames::event_func_2199()
{
    // event 992_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_992_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (4))) goto event_992_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_992_13_end: ;
}
void Frames::event_func_2200()
{
    // event 993_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_993_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (5))) goto event_993_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_993_13_end: ;
}
void Frames::event_func_2201()
{
    // event 994_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_994_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (6))) goto event_994_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_994_13_end: ;
}
void Frames::event_func_2202()
{
    // event 995_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_995_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_995_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_995_13_end: ;
}
void Frames::event_func_2203()
{
    // event 996_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_996_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_996_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_996_13_end: ;
}
void Frames::event_func_2204()
{
    // event 997_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_997_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (9))) goto event_997_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_997_13_end: ;
}
void Frames::event_func_2205()
{
    // event 998_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_998_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (10))) goto event_998_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_998_13_end: ;
}
void Frames::event_func_2206()
{
    // event 999_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_999_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_999_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_999_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_999_13_end: ;
}
void Frames::event_func_2207()
{
    // event 1000_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1000_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_1000_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_1000_13_end: ;
}
void Frames::event_func_2208()
{
    // event 1001_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1001_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (21))) goto event_1001_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_1001_13_end: ;
}
void Frames::event_func_2209()
{
    // event 1002_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1002_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (22))) goto event_1002_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_1002_13_end: ;
}
void Frames::event_func_2210()
{
    // event 1003_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1003_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_1003_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_1003_13_end: ;
}
void Frames::event_func_2211()
{
    // event 1004_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1004_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_1004_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_1004_13_end: ;
}
void Frames::event_func_2212()
{
    // event 1005_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1005_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_1005_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(0);
    }
    event_1005_13_end: ;
}
void Frames::event_func_2213()
{
    // event 1006_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1006_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (42))) goto event_1006_13_end;
        ((Active*)get_instance(playercharactersensor_383_instances))->force_animation(1);
    }
    event_1006_13_end: ;
}
void Frames::event_func_2214()
{
    // event 1007_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1007_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1007_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (2))) goto event_1007_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (8))) goto event_1007_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (15))) goto event_1007_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (26))) goto event_1007_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (40))) goto event_1007_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_speed();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1007_13_end: ;
}
void Frames::event_func_2215()
{
    // event 1008_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1008_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1008_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_1008_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
    }
    event_1008_13_end: ;
}
void Frames::event_func_2216()
{
    // event 1009_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1009_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1009_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_1009_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(20+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*4);
            ((Active*)*it)->start_animation();
        }
    }
    event_1009_13_end: ;
}
void Frames::event_func_2217()
{
    // event 1010_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1010_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (6))) goto event_1010_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_1010_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(35+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
    }
    event_1010_13_end: ;
}
