#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3927()
{
    // event 1741_16
    {
        if (!(group_main_engine_1)) goto event_1741_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1741_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) < (0))) goto event_1741_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+4, 0));
    }
    event_1741_16_end: ;
}
void Frames::event_func_3928()
{
    // event 1742_16
    {
        if (!(group_main_engine_1)) goto event_1742_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1742_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) > (0))) goto event_1742_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-4, 0));
    }
    event_1742_16_end: ;
}
void Frames::event_func_3929()
{
    // event 1743_16
    {
        if (!(group_main_engine_1)) goto event_1743_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) > (0))) goto event_1743_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) < (0))) goto event_1743_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+4, 0));
    }
    event_1743_16_end: ;
}
void Frames::event_func_3930()
{
    // event 1744_16
    {
        if (!(group_main_engine_1)) goto event_1744_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)*2));
    }
    event_1744_16_end: ;
}
void Frames::event_func_3931()
{
    // event 1745_16
    {
        if (!(group_main_engine_1)) goto event_1745_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)))) goto event_1745_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), 0));
    }
    event_1745_16_end: ;
}
void Frames::event_func_3932()
{
    // event 1746_16
    {
        if (!(group_main_engine_1)) goto event_1746_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)))) goto event_1746_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), 0));
    }
    event_1746_16_end: ;
}
void Frames::event_func_3933()
{
    // event 1747_16
    {
        if (!(group_main_engine_1)) goto event_1747_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)) > (0))) goto event_1747_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)));
    }
    event_1747_16_end: ;
}
void Frames::event_func_3934()
{
    // event 1748_16
    {
        if (!(group_main_engine_1)) goto event_1748_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)) < (0))) goto event_1748_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(18, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)));
    }
    event_1748_16_end: ;
}
void Frames::event_func_3935()
{
    // event 1749_16
    {
        if (!(group_main_engine_1)) goto event_1749_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)*2));
    }
    event_1749_16_end: ;
}
void Frames::event_func_3936()
{
    // event 1750_16
    {
        if (!(group_main_engine_1)) goto event_1750_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)))) goto event_1750_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)), 0));
    }
    event_1750_16_end: ;
}
void Frames::event_func_3937()
{
    // event 1751_16
    {
        if (!(group_main_engine_1)) goto event_1751_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)))) goto event_1751_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)), 0));
    }
    event_1751_16_end: ;
}
void Frames::event_func_3938()
{
    // event 1752_16
    {
        if (!(group_main_engine_1)) goto event_1752_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)) > (0))) goto event_1752_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
    }
    event_1752_16_end: ;
}
void Frames::event_func_3939()
{
    // event 1753_16
    {
        if (!(group_main_engine_1)) goto event_1753_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)) < (0))) goto event_1753_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(19, get_max(get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)-(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)), 0), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
    }
    event_1753_16_end: ;
}
void Frames::event_func_3940()
{
    // event 1754_16
    {
        if (!(group_main_engine_1)) goto event_1754_16_end;
        set_display_center(get_floor(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)), -1);
        set_display_center(-1, get_floor(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)-0.1, 0));
    }
    event_1754_16_end: ;
}
void Frames::event_func_3941()
{
    // event 1755_16
    {
        if (!(group_main_engine_1)) goto event_1755_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(21, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_1755_16_end: ;
}
void Frames::event_func_3942()
{
    // event 1756_16
    {
        if (!(group_main_engine_1)) goto event_1756_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1756_16_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(2, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+3*cos_deg(global_values->get(3)*1.5));
    }
    event_1756_16_end: ;
}
void Frames::event_func_3943()
{
    // event 1757_16
    {
        if (!(group_main_engine_1)) goto event_1757_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1757_16_end;
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-(frame_left()%math_helper%64));
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(get_max(frame_top(), ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2)));
        }
    }
    event_1757_16_end: ;
}
void Frames::event_func_3944()
{
    // event 1758_16
    {
        if (!(group_main_engine_1)) goto event_1758_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (20))) goto event_1758_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-466, 85);
            pos_end_1758_16_0: ;
        }
    }
    event_1758_16_end: ;
}
void Frames::event_func_3945()
{
    // event 1759_16
    {
        if (!(group_main_engine_1)) goto event_1759_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1759_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()-40);
        }
        ((Active*)get_single(bubblenumbers_429_instances, default_active_instance))->move_front(((Active*)get_instance(player_389_instances)));
    }
    event_1759_16_end: ;
}
void Frames::event_func_3946()
{
    // event 1760_16
    {
        if (!(group_main_engine_1)) goto event_1760_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (20))) goto event_1760_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(5);
        }
    }
    event_1760_16_end: ;
}
void Frames::event_func_3947()
{
    // event 1761_16
    {
        if (!(group_main_engine_1)) goto event_1761_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (22))) goto event_1761_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(4);
        }
    }
    event_1761_16_end: ;
}
void Frames::event_func_3948()
{
    // event 1762_16
    {
        if (!(group_main_engine_1)) goto event_1762_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (24))) goto event_1762_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(3);
        }
    }
    event_1762_16_end: ;
}
void Frames::event_func_3949()
{
    // event 1763_16
    {
        if (!(group_main_engine_1)) goto event_1763_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (26))) goto event_1763_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1763_16_end: ;
}
void Frames::event_func_3950()
{
    // event 1764_16
    {
        if (!(group_main_engine_1)) goto event_1764_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (28))) goto event_1764_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1764_16_end: ;
}
void Frames::event_func_3951()
{
    // event 1765_16
    {
        if (!(group_main_engine_1)) goto event_1765_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (30))) goto event_1765_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1765_16_end: ;
}
void Frames::event_func_3952()
{
    // event 1766_16
    {
        if (!(group_main_engine_1)) goto event_1766_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (32))) goto event_1766_16_end;
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1766_16_end: ;
}
void Frames::event_func_3953()
{
    // event 1768_16
    {
        if (!(group_main_engine_1)) goto event_1768_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1768_16_end;
        if (!((global_values->get(3)%math_helper%48) == (0))) goto event_1768_16_end;
        ((Active*)get_instance(player_389_instances))->alterables->values.set(7, randrange(2));
    }
    event_1768_16_end: ;
}
void Frames::event_func_3954()
{
    // event 1769_16
    {
        if (!(group_main_engine_1)) goto event_1769_16_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) <= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1769_16_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(7)) == (1))) goto event_1769_16_end;
        ((Active*)get_instance(player_389_instances))->alterables->values.set(7, 0);
    }
    event_1769_16_end: ;
}
void Frames::event_func_3955()
{
    // event 1770_16
    bool or_result_1770_16 = false;
    bool or_temp_result_1770_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1770_16_0_end;
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1770_16_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (10))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1770_16_0_end;
        or_result_1770_16 = true;
        or_temp_result_1770_16_0 = true;
    }
    or_event_1770_16_0_end: ;
    player_389_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1770_16_0) {
        playermovementvalues_245_instances.save_selection();
        player_389_instances.save_selection();
    }
    // event 1770_16
    bool or_temp_result_1770_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1770_16_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (10))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1770_16_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1770_16_1_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_1770_16_1_end;
        or_result_1770_16 = true;
        or_temp_result_1770_16_1 = true;
        or_event_1770_16_1_end: ;
        playerskinsash_418_instances.clear_saved_selection();
        if (or_temp_result_1770_16_1) {
            playermovementvalues_245_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1770_16) goto or_final_or_event_1770_16_1_end;
        player_389_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1770_16_0 || or_temp_result_1770_16_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1770_16_0) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1770_16_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    or_final_or_event_1770_16_1_end: ;
}
void Frames::event_func_3956()
{
    // event 1771_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_timer_1)) goto event_1771_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1771_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1771_16_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)+1000.0/math_helper/59);
    }
    event_1771_16_end: ;
}
void Frames::event_func_3957()
{
    // event 1774_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1774_16_end;
        if (!((global_values->get(4)) == (0))) goto event_1774_16_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto event_1774_16_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (50))) goto event_1774_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
    }
    event_1774_16_end: ;
}
void Frames::event_func_3958()
{
    // event 1775_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1775_16_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (50))) goto event_1775_16_end;
        if (!((global_values->get(4)) == (0))) goto event_1775_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1775_16_end;
        global_values->set(4, 1);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 999);
        }
    }
    event_1775_16_end: ;
}
void Frames::event_func_3959()
{
    // event 1776_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1776_16_end;
        if (!((global_values->get(4)) != (0))) goto event_1776_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1776_16_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_top()+152))) { it.deselect(); continue; }
        }
        if (!levelcardintro3_760_instances.has_selection()) goto event_1776_16_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1776_16_end: ;
}
void Frames::event_func_3960()
{
    // event 1777_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1777_16_end;
        if (!((global_values->get(4)) != (0))) goto event_1777_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1777_16_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1777_16_end: ;
}
void Frames::event_func_3961()
{
    // event 1778_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1778_16_end;
        if (!((global_values->get(4)) != (0))) goto event_1778_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1778_16_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (frame_top()+152))) { it.deselect(); continue; }
        }
        if (!levelcardintro3_760_instances.has_selection()) goto event_1778_16_end;
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+152);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1778_16_end: ;
}
void Frames::event_func_3962()
{
    // event 1779_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1779_16_end;
        if (!((global_values->get(4)) != (0))) goto event_1779_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1779_16_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (frame_top()+168))) { it.deselect(); continue; }
        }
        if (!levelcardintro2_761_instances.has_selection()) goto event_1779_16_end;
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+168);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1779_16_end: ;
}
void Frames::event_func_3963()
{
    // event 1780_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1780_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1780_16_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(0, get_min(((Active*)*it)->alterables->values.get(1)*3-60, 256)));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1780_16_end: ;
}
void Frames::event_func_3964()
{
    // event 1781_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1781_16_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (96))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1781_16_end;
        if (!((global_values->get(4)) != (0))) goto event_1781_16_end;
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+3, 100));
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+3, 100));
        }
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1781_16_end: ;
}
void Frames::event_func_3965()
{
    // event 1782_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1782_16_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1782_16_end;
        if (!((global_values->get(4)) != (0))) goto event_1782_16_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1782_16_end: ;
}
void Frames::event_func_3966()
{
    // event 1825_16
    {
        if (!(group_pause_1)) goto event_1825_16_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1825_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1825_16_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1825_16_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1825_16_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1825_16_end: ;
}
void Frames::event_func_3967()
{
    // event 1826_16
    bool or_result_1826_16 = false;
    bool or_temp_result_1826_16_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1826_16_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1826_16_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1826_16_0_end;
        or_result_1826_16 = true;
        or_temp_result_1826_16_0 = true;
    }
    or_event_1826_16_0_end: ;
    // event 1826_16
    bool or_temp_result_1826_16_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1826_16_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1826_16_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1826_16_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1826_16_1_end;
        or_result_1826_16 = true;
        or_temp_result_1826_16_1 = true;
        or_event_1826_16_1_end: ;
        if (!or_result_1826_16) goto or_final_or_event_1826_16_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossironwormsegment_674_instances.clear_selection();
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1826_16_1_end: ;
}
void Frames::event_func_3968()
{
    // event 1828_16
    {
        if (!(group_pause_1)) goto event_1828_16_end;
        if (once_condition_1828_16) goto event_1828_16_end;
        once_condition_1828_16 = true;
        ((Active*)get_instance(guipause_453_instances))->force_frame(3);
    }
    event_1828_16_end: ;
}
void Frames::event_func_3969()
{
    // event 1829_16
    {
        if (!(group_pause_1)) goto event_1829_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1829_16_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1829_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) < (2))) goto event_1829_16_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+24*((Active*)get_instance(crystal_456_instances))->alterables->values.get(0));
    }
    event_1829_16_end: ;
}
void Frames::event_func_3970()
{
    // event 1830_16
    {
        if (!(group_pause_1)) goto event_1830_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1830_16_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1830_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (2))) goto event_1830_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) > (0))) goto event_1830_16_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+24*((Active*)get_instance(crystal_456_instances))->alterables->values.get(0));
    }
    event_1830_16_end: ;
}
void Frames::event_func_3971()
{
    // event 1831_16
    {
        if (!(group_pause_1)) goto event_1831_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->get_frame()) == (3))) goto event_1831_16_end;
        if (!((manager.lives) <= (1))) goto event_1831_16_end;
        if (not_always_1831_16 > loop_count) {
            not_always_1831_16 = loop_count + 2;
            goto event_1831_16_end;
        }
        not_always_1831_16 = loop_count + 2;
        ((Active*)get_instance(guipause_453_instances))->force_frame(4);
    }
    event_1831_16_end: ;
}
void Frames::event_func_3972()
{
    // event 1832_16
    {
        if (!(group_pause_1)) goto event_1832_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->get_frame()) == (4))) goto event_1832_16_end;
        if (!((manager.lives) > (1))) goto event_1832_16_end;
        if (not_always_1832_16 > loop_count) {
            not_always_1832_16 = loop_count + 2;
            goto event_1832_16_end;
        }
        not_always_1832_16 = loop_count + 2;
        ((Active*)get_instance(guipause_453_instances))->force_frame(3);
    }
    event_1832_16_end: ;
}
void Frames::event_func_3973()
{
    // event 1833_16
    {
        if (!(group_pause_1)) goto event_1833_16_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1833_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1833_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->get_frame()) == (4))) goto event_1833_16_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+24*((Active*)get_instance(crystal_456_instances))->alterables->values.get(0));
    }
    event_1833_16_end: ;
}
void Frames::event_func_3974()
{
    // event 1834_16
    {
        if (!(group_pause_1)) goto event_1834_16_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1834_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1834_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->get_frame()) == (4))) goto event_1834_16_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+24*((Active*)get_instance(crystal_456_instances))->alterables->values.get(0));
    }
    event_1834_16_end: ;
}
void Frames::event_func_3975()
{
    // event 1835_16
    {
        if (!(group_pause_1)) goto event_1835_16_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_1835_16_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1835_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (1))) goto event_1835_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (2))) goto event_1835_16_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(crystal_456_instances))->alterables->values.add(0, 2);
    }
    event_1835_16_end: ;
}
void Frames::event_func_3976()
{
    // event 1836_16
    {
        if (!(group_pause_1)) goto event_1836_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_1836_16_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1836_16_end: ;
}
void Frames::event_func_3977()
{
    // event 1837_16
    {
        if (!(group_pause_1)) goto event_1837_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_1837_16_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1837_16_end;
        {
            loop_restart_running = true;
            int times = int(1);
            loop_restart_index = 0;
            while (loop_restart_index < times) {
                loop_restart_16();
                if (!loop_restart_running) break;
                loop_restart_index++;
            }
        }
    }
    event_1837_16_end: ;
}
void Frames::event_func_3978()
{
    // event 1839_16
    {
        if (!(group_pause_1)) goto event_1839_16_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_1839_16_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1839_16_end;
        {
            loop_return_running = true;
            int times = int(1);
            loop_return_index = 0;
            while (loop_return_index < times) {
                loop_return_0();
                if (!loop_return_running) break;
                loop_return_index++;
            }
        }
    }
    event_1839_16_end: ;
}
void Frames::handle_frame_17_events()
{
    test_collisions_16();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_3807();
    event_func_3904();
    event_func_3909();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_1406();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_1472();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_1570();
    event_func_1571();
    event_func_1572();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_1604();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_1732();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_1761();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_1777();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_1866();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_1909();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_3740();
    event_func_3741();
    event_func_3742();
    event_func_3743();
    event_func_3744();
    event_func_3745();
    event_func_3746();
    event_func_3747();
    event_func_3748();
    event_func_3749();
    event_func_3750();
    event_func_3751();
    event_func_3752();
    event_func_3753();
    event_func_3754();
    event_func_3755();
    event_func_3756();
    event_func_3757();
    event_func_3758();
    event_func_3759();
    event_func_3760();
    event_func_3761();
    event_func_3762();
    event_func_3763();
    event_func_3764();
    event_func_3765();
    event_func_3766();
    event_func_3767();
    event_func_3768();
    event_func_3769();
    event_func_3770();
    event_func_3771();
    event_func_3772();
    event_func_3773();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_3774();
    event_func_3775();
    event_func_3776();
    event_func_3777();
    event_func_3778();
    event_func_3779();
    event_func_3780();
    event_func_3781();
    event_func_3782();
    event_func_3783();
    event_func_3784();
    event_func_3785();
    event_func_3786();
    event_func_3787();
    event_func_3788();
    event_func_3789();
    event_func_3790();
    event_func_3791();
    event_func_3792();
    event_func_3793();
    event_func_3794();
    event_func_3795();
    event_func_3796();
    event_func_3797();
    event_func_3798();
    event_func_3799();
    event_func_3800();
    event_func_3801();
    event_func_3802();
    event_func_3803();
    event_func_3804();
    event_func_3805();
    event_func_3806();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3809();
    event_func_3810();
    event_func_3811();
    event_func_3812();
    event_func_3813();
    event_func_3814();
    event_func_3815();
    event_func_3816();
    event_func_3817();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    event_func_3821();
    event_func_3822();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_3000();
    event_func_3844();
    event_func_3845();
    event_func_3846();
    event_func_3847();
    event_func_3848();
    event_func_3849();
    event_func_3850();
    event_func_3851();
    event_func_3852();
    event_func_3853();
    event_func_3854();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_3861();
    event_func_3862();
    event_func_3863();
    event_func_3864();
    event_func_3865();
    event_func_3866();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    event_func_3868();
    event_func_3869();
    event_func_3870();
    event_func_3871();
    event_func_3872();
    event_func_3873();
    event_func_3874();
    event_func_3875();
    event_func_3876();
    event_func_3877();
    event_func_3878();
    if (!group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1) goto group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1_end;
    event_func_3879();
    event_func_3880();
    event_func_3881();
    event_func_3882();
    event_func_3883();
    event_func_3884();
    event_func_3885();
    event_func_3886();
    event_func_3887();
    event_func_3888();
    event_func_3889();
    event_func_3890();
    event_func_3891();
    event_func_3892();
    event_func_3893();
    event_func_3894();
    event_func_3895();
    event_func_3896();
    event_func_3897();
    event_func_3898();
    event_func_3899();
    event_func_3900();
    event_func_3901();
    group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1_end: ;
    event_func_3902();
    event_func_3903();
    event_func_3905();
    event_func_3906();
    event_func_3907();
    event_func_3908();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    event_func_3912();
    event_func_3913();
    event_func_3914();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_3953();
    event_func_3954();
    event_func_3955();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3957();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_3966();
    event_func_3967();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_17_pre_events()
{
}
void Frames::event_func_3979()
{
    // event 1_16
    {
        if (!((global_values->get(1)) == (0))) goto event_1_16_end;
        global_values->set(1, 4);
    }
    event_1_16_end: ;
}
void Frames::event_func_3980()
{
    // event 2_16
    {
        if (!((global_values->get(4)) < (1))) goto event_2_16_end;
        global_values->set(4, 1);
    }
    event_2_16_end: ;
}
void Frames::event_func_3981()
{
    // event 3_16
    {
        if (!(group_main_engine_1)) goto event_3_16_end;
        ((Active*)get_instance(guipause_453_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(crystal_456_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_action_x());
        ((Active*)get_instance(levelcardgameover_462_instances))->set_x(((Active*)get_instance(levelcardgameover_462_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(guitimer_564_instances))->set_x(((Active*)get_instance(guitimer_564_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_x(((Counter*)get_instance(guitimermilli_360_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_x(((Counter*)get_instance(guitimermilli2_361_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimers_362_instances))->set_x(((Counter*)get_instance(guitimers_362_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimers2_363_instances))->set_x(((Counter*)get_instance(guitimers2_363_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimerm_364_instances))->set_x(((Counter*)get_instance(guitimerm_364_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_x(((Counter*)get_instance(guitimerm2_365_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
    }
    event_3_16_end: ;
}
void Frames::event_func_3982()
{
    // event 4_16
    {
        if (!(group_main_engine_1)) goto event_4_16_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1200);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 21);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 8);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_4_16_end: ;
}
void Frames::event_func_3983()
{
    // event 21_16
    {
        if (!(group_main_engine_1)) goto event_21_16_end;
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.75);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.75);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.55);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.55);
    }
    event_21_16_end: ;
}
void Frames::event_func_3984()
{
    // event 23_16
    {
        if (!(group_main_engine_1)) goto event_23_16_end;
        if (!((global_values->get(4)) < (0))) goto event_23_16_end;
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        global_values->set(14, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(14));
        global_values->set(29, ((Counter*)get_instance(guicrystal_121_instances))->value);
        global_values->set(28, manager.lives);
        global_values->set(30, ((Counter*)get_instance(guirings_122_instances))->value);
    }
    event_23_16_end: ;
}
void Frames::event_func_3985()
{
    // event 24_16
    {
        if (!(group_main_engine_1)) goto event_24_16_end;
        if (!((global_values->get(4)) >= (0))) goto event_24_16_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, global_values->get(14));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(14));
        global_values->set(29, ((Counter*)get_instance(guicrystal_121_instances))->value);
        global_values->set(28, manager.lives);
        global_values->set(30, ((Counter*)get_instance(guirings_122_instances))->value);
    }
    event_24_16_end: ;
}
void Frames::event_func_3986()
{
    // event 1400_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1400_16_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1400_16_end;
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1400_16_end: ;
}
void Frames::event_func_3987()
{
    // event 1401_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1401_16_end;
        if (!((qualifier_23.size()) == (0))) goto event_1401_16_end;
            group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = false;
    
    }
    event_1401_16_end: ;
}
void Frames::event_func_3988()
{
    // event 1432_16
    {
        if (!(group_main_engine_1)) goto event_1432_16_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->layer->index+1);
        }
        switchpressureplate_752_instances.clear_selection();
        spread_value(switchpressureplate_752_instances, 0, 0);
        ((Active*)get_instance(switchdoor2_754_instances))->alterables->values.set(1, ((Active*)get_instance(switchdoor2_754_instances))->layer->index+1);
    }
    event_1432_16_end: ;
}
void Frames::event_func_3989()
{
    // event 1487_16
    {
        if (!(group_main_engine_1)) goto event_1487_16_end;
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
    }
    event_1487_16_end: ;
}
void Frames::event_func_3990()
{
    // event 1535_16
    {
        if (!(group_main_engine_1)) goto event_1535_16_end;
        objectdigspot_734_instances.clear_selection();
        spread_value(objectdigspot_734_instances, 0, 0);
    }
    event_1535_16_end: ;
}
void Frames::event_func_3991()
{
    // event 1553_16
    {
        if (!(group_main_engine_1)) goto event_1553_16_end;
        if (!((global_values->get(1)) != (4))) goto event_1553_16_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 7579, 732, 7789, 1130);
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1553_16_end: ;
}
void Frames::event_func_3992()
{
    // event 1554_16
    {
        if (!(group_main_engine_1)) goto event_1554_16_end;
        if (!((global_values->get(1)) == (4))) goto event_1554_16_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 7790, 929, 8051, 1134);
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1554_16_end: ;
}
void Frames::event_func_3993()
{
    // event 1559_16
    {
        if (!(group_main_engine_1)) goto event_1559_16_end;
        minibossironwormsegment_674_instances.clear_selection();
        spread_value(minibossironwormsegment_674_instances, 3, 1);
        for (ObjectIterator it(minibossironwormsegment_674_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(3)*-20);
        }
        minibossironworm_675_instances.clear_selection();
        for (ObjectIterator it(minibossironworm_675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (minibossironwormsegment_674_instances.size()+1)*-20);
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1559_16_end: ;
}
void Frames::event_func_3994()
{
    // event 1691_16
    {
        if (!(group_main_engine_1)) goto event_1691_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(23, (frame_right()-frame_left())/math_helper/2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(24, (frame_bottom()-frame_top())/math_helper/2);
    }
    event_1691_16_end: ;
}
void Frames::event_func_3995()
{
    // event 1692_16
    {
        if (!(group_main_engine_1)) goto event_1692_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x())/math_helper/2);
            ((Active*)*it)->alterables->values.set(1, (((Active*)get_instance(cameralimitbosstop_423_instances, it.current_index, default_active_instance))->get_y()+((Active*)get_instance(cameralimitbossbottom_420_instances, it.current_index, default_active_instance))->get_y())/math_helper/2);
        }
    }
    event_1692_16_end: ;
}
void Frames::event_func_3996()
{
    // event 1693_16
    {
        if (!(group_main_engine_1)) goto event_1693_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1693_16_end: ;
}
void Frames::event_func_3997()
{
    // event 1767_16
    {
        if (!(group_main_engine_1)) goto event_1767_16_end;
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_box_index(1));
        }
    }
    event_1767_16_end: ;
}
void Frames::event_func_3998()
{
    // event 1772_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1772_16_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1772_16_end: ;
}
void Frames::event_func_3999()
{
    // event 1773_16
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1773_16_end;
        if (!((global_values->get(4)) == (0))) goto event_1773_16_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = true;
        }
    }
    event_1773_16_end: ;
}
void Frames::on_frame_17_start_events()
{
    event_func_3979();
    event_func_3980();
    event_func_3981();
    event_func_3982();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_3983();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_3988();
    event_func_3989();
    event_func_3990();
    event_func_2686();
    event_func_2687();
    event_func_3991();
    event_func_3992();
    event_func_3993();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_3997();
    event_func_3998();
    event_func_3999();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_17_init()
{
    index = 16;
    width = 12512;
    height = 1864;
    virtual_width = 12512;
    virtual_height = 1864;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &aquabrickplatform_744_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &aquabrickplatform_744_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&minibossironworm_675_instances, &enemyslime_741_instances, &enemyfirefly_742_instances, NULL};
    qualifier_20.set(3, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece6_511_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &switchdoor_735_instances, &jellyspring_739_instances, &breakableaquabrick_743_instances, &collapsingplatform_745_instances, &switchdoor2_754_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingmovingsensor_737_instances, &gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &gimmickhangingmovingchasis_738_instances, NULL};
    qualifier_12.set(5, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelaxelplatform1_653_instances, &levelaxelplatform2_654_instances, &gimmickhangingmovingbar2_736_instances, &gimmickhangingmovingsensor_737_instances, &gimmickhangingmovingchasis_738_instances, NULL};
    qualifier_13.set(6, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece6_648(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_649(32, 0), 0);
    add_background_object(create_levelparallaxpiece5_650(104, 0), 0);
    add_background_object(create_lightray1_659(1376, 440), 1);
    add_background_object(create_aquabrickback6_660(3840, 512), 1);
    add_background_object(create_aquabrickback1_661(3968, 512), 1);
    add_background_object(create_aquabrickback1_661(3456, 896), 1);
    add_background_object(create_aquabrickback1_661(3840, 896), 1);
    add_background_object(create_aquabrickback1_661(2560, 896), 1);
    add_background_object(create_aquabrickback1_661(256, 768), 1);
    add_background_object(create_aquabrickback1_661(512, 768), 1);
    add_background_object(create_aquabrickback1_661(0, 768), 1);
    add_background_object(create_aquabrickback1_661(256, 896), 1);
    add_background_object(create_aquabrickback1_661(512, 896), 1);
    add_background_object(create_aquabrickback1_661(0, 896), 1);
    add_background_object(create_aquabrickback7_662(-400, 912), 1);
    add_background_object(create_aquabrickback8_663(-400, 928), 1);
    add_background_object(create_aquabrickback10_664(-232, 864), 1);
    add_background_object(create_aquabrickback6_660(-312, 1024), 1);
    add_background_object(create_aquabrickback1_661(768, 768), 1);
    add_background_object(create_aquabrickback1_661(768, 896), 1);
    add_background_object(create_aquabrickback1_661(2176, 896), 1);
    add_background_object(create_aquabrickback1_661(2304, 896), 1);
    add_background_object(create_aquabrickback1_661(2432, 768), 1);
    add_background_object(create_aquabrickback1_661(2432, 896), 1);
    add_background_object(create_aquabrickback1_661(2432, 640), 1);
    add_background_object(create_aquabrickback1_661(2688, 896), 1);
    add_background_object(create_aquabrickback1_661(2688, 640), 1);
    add_background_object(create_aquabrickback1_661(2816, 896), 1);
    add_background_object(create_aquabrickback1_661(2944, 896), 1);
    add_background_object(create_aquabrickback1_661(2688, 512), 1);
    add_background_object(create_aquabrickback1_661(3072, 768), 1);
    add_background_object(create_aquabrickback1_661(3072, 896), 1);
    add_background_object(create_aquabrickback1_661(2304, 768), 1);
    add_background_object(create_aquabrickback1_661(3200, 768), 1);
    add_background_object(create_aquabrickback1_661(3200, 896), 1);
    add_background_object(create_aquabrickback1_661(3584, 768), 1);
    add_background_object(create_aquabrickback1_661(3584, 896), 1);
    add_background_object(create_aquabrickback1_661(3584, 576), 1);
    add_background_object(create_aquabrickback1_661(3712, 768), 1);
    add_background_object(create_aquabrickback1_661(3712, 896), 1);
    add_background_object(create_aquabrickback1_661(3328, 768), 1);
    add_background_object(create_aquabrickback1_661(3328, 896), 1);
    add_background_object(create_aquabrickback1_661(3200, 512), 1);
    add_background_object(create_aquabrickback1_661(3456, 832), 1);
    add_background_object(create_aquabrickback1_661(3456, 704), 1);
    add_background_object(create_aquabrickback1_661(3584, 640), 1);
    add_background_object(create_aquabrickback1_661(3328, 640), 1);
    add_background_object(create_aquabrickback1_661(2560, 512), 1);
    add_background_object(create_aquabrickback1_661(2176, 640), 1);
    add_background_object(create_aquabrickback1_661(3968, 768), 1);
    add_background_object(create_aquabrickback1_661(3968, 896), 1);
    add_background_object(create_aquabrickback1_661(4096, 768), 1);
    add_background_object(create_aquabrickback1_661(4096, 896), 1);
    add_background_object(create_aquabrickback1_661(4096, 512), 1);
    add_background_object(create_aquabrickback1_661(3840, 768), 1);
    add_background_object(create_aquabrickback1_661(4096, 640), 1);
    add_background_object(create_aquabrickback1_661(4224, 768), 1);
    add_background_object(create_aquabrickback1_661(4224, 896), 1);
    add_background_object(create_aquabrickback1_661(4224, 512), 1);
    add_background_object(create_aquabrickback1_661(4224, 640), 1);
    add_background_object(create_aquabrickback1_661(2816, 512), 1);
    add_background_object(create_aquabrickback10_664(2688, 768), 1);
    add_background_object(create_aquabrickback6_660(2944, 768), 1);
    add_background_object(create_aquabrickback10_664(2816, 640), 1);
    add_background_object(create_aquabrickback6_660(3200, 640), 1);
    add_background_object(create_aquabrickback7_662(2848, 640), 1);
    add_background_object(create_aquabrickback7_662(3168, 640), 1);
    add_background_object(create_aquabrickback8_663(2816, 880), 1);
    add_background_object(create_aquabrickback7_662(2720, 768), 1);
    add_background_object(create_aquabrickback8_663(3072, 752), 1);
    add_background_object(create_aquabrickback9_665(128, 640), 1);
    add_background_object(create_aquabrickback9_665(384, 704), 1);
    add_background_object(create_aquabrickback9_665(640, 640), 1);
    add_background_object(create_aquabrickback9_665(3456, 576), 1);
    add_background_object(create_aquabrickback1_661(2176, 768), 1);
    add_background_object(create_aquabrickback9_665(2304, 640), 1);
    add_background_object(create_aquabrickback9_665(2560, 640), 1);
    add_background_object(create_aquabrickback1_661(2560, 768), 1);
    add_background_object(create_aquabrickback1_661(3328, 512), 1);
    add_background_object(create_aquabrickback6_660(3072, 512), 1);
    add_background_object(create_aquabrickback10_664(2944, 512), 1);
    add_background_object(create_aquabrickback7_662(2816, 656), 1);
    add_background_object(create_aquabrickback6_660(3968, 640), 1);
    add_background_object(create_aquabrickback10_664(3712, 576), 1);
    add_background_object(create_aquabrickback10_664(3712, 640), 1);
    add_background_object(create_aquabrickback7_662(3744, 576), 1);
    add_background_object(create_aquabrickback7_662(3712, 656), 1);
    add_background_object(create_aquabrickback8_663(3904, 752), 1);
    add_background_object(create_aquabrickback10_664(4352, 768), 1);
    add_background_object(create_aquabrickback10_664(4352, 896), 1);
    add_background_object(create_aquabrickback10_664(4352, 640), 1);
    add_background_object(create_aquabrickback1_661(5248, 864), 1);
    add_background_object(create_aquabrickback1_661(5248, 608), 1);
    add_background_object(create_aquabrickback6_660(4992, 864), 1);
    add_background_object(create_aquabrickback1_661(5120, 864), 1);
    add_background_object(create_aquabrickback1_661(5376, 864), 1);
    add_background_object(create_aquabrickback1_661(5376, 736), 1);
    add_background_object(create_aquabrickback1_661(5376, 608), 1);
    add_background_object(create_aquabrickback1_661(5376, 480), 1);
    add_background_object(create_aquabrickback1_661(5248, 352), 1);
    add_background_object(create_aquabrickback1_661(5376, 352), 1);
    add_background_object(create_aquabrickback1_661(5504, 352), 1);
    add_background_object(create_aquabrickback1_661(5632, 352), 1);
    add_background_object(create_aquabrickback1_661(5504, 480), 1);
    add_background_object(create_aquabrickback1_661(5632, 480), 1);
    add_background_object(create_aquabrickback1_661(5504, 608), 1);
    add_background_object(create_aquabrickback1_661(5632, 608), 1);
    add_background_object(create_aquabrickback1_661(5504, 736), 1);
    add_background_object(create_aquabrickback1_661(5632, 736), 1);
    add_background_object(create_aquabrickback1_661(5504, 864), 1);
    add_background_object(create_aquabrickback1_661(5632, 864), 1);
    add_background_object(create_aquabrickback1_661(256, 640), 1);
    add_background_object(create_aquabrickback1_661(512, 640), 1);
    add_background_object(create_aquabrickback1_661(0, 640), 1);
    add_background_object(create_aquabrickback1_661(768, 640), 1);
    add_background_object(create_aquabrickback1_661(2176, 512), 1);
    add_background_object(create_aquabrickback1_661(384, 576), 1);
    add_background_object(create_aquabrickback1_661(256, 512), 1);
    add_background_object(create_aquabrickback1_661(512, 512), 1);
    add_background_object(create_aquabrickback1_661(128, 512), 1);
    add_background_object(create_aquabrickback1_661(0, 512), 1);
    add_background_object(create_aquabrickback1_661(640, 512), 1);
    add_background_object(create_aquabrickback1_661(768, 512), 1);
    add_background_object(create_aquabrickback1_661(2304, 512), 1);
    add_background_object(create_aquabrickback1_661(2432, 512), 1);
    add_background_object(create_aquabrickback1_661(2432, 384), 1);
    add_background_object(create_aquabrickback1_661(2560, 384), 1);
    add_background_object(create_aquabrickback1_661(2688, 384), 1);
    add_background_object(create_aquabrickback1_661(2688, 256), 1);
    add_background_object(create_aquabrickback1_661(2816, 384), 1);
    add_background_object(create_aquabrickback1_661(2816, 256), 1);
    add_background_object(create_aquabrickback1_661(3072, 384), 1);
    add_background_object(create_aquabrickback1_661(3072, 256), 1);
    add_background_object(create_aquabrickback1_661(2944, 384), 1);
    add_background_object(create_aquabrickback1_661(2944, 256), 1);
    add_background_object(create_aquabrickback1_661(3200, 384), 1);
    add_background_object(create_aquabrickback1_661(3200, 256), 1);
    add_background_object(create_aquabrickback1_661(3328, 384), 1);
    add_background_object(create_aquabrickback1_661(3456, 448), 1);
    add_background_object(create_aquabrickback1_661(3456, 320), 1);
    add_background_object(create_aquabrickback1_661(3328, 256), 1);
    add_background_object(create_aquabrickback1_661(3584, 448), 1);
    add_background_object(create_aquabrickback1_661(3584, 320), 1);
    add_background_object(create_aquabrickback1_661(3712, 448), 1);
    add_background_object(create_aquabrickback1_661(3712, 320), 1);
    add_background_object(create_aquabrickback1_661(3840, 448), 1);
    add_background_object(create_aquabrickback1_661(3840, 320), 1);
    add_background_object(create_aquabrickback1_661(3968, 256), 1);
    add_background_object(create_aquabrickback1_661(4096, 256), 1);
    add_background_object(create_aquabrickback1_661(4224, 256), 1);
    add_background_object(create_aquabrickback1_661(5120, 736), 1);
    add_background_object(create_aquabrickback1_661(5120, 608), 1);
    add_background_object(create_aquabrickback1_661(5120, 480), 1);
    add_background_object(create_aquabrickback1_661(5120, 352), 1);
    add_background_object(create_aquabrickback1_661(3968, 384), 1);
    add_background_object(create_aquabrickback1_661(4096, 384), 1);
    add_background_object(create_aquabrickback1_661(4224, 384), 1);
    add_background_object(create_aquabrickback1_661(3584, 192), 1);
    add_background_object(create_aquabrickback1_661(3712, 192), 1);
    add_background_object(create_aquabrickback1_661(3840, 192), 1);
    add_background_object(create_aquabrickback1_661(3456, 192), 1);
    add_background_object(create_aquabrickback9_665(5248, 480), 1);
    add_background_object(create_aquabrickback9_665(5248, 736), 1);
    add_background_object(create_aquabrickback1_661(5760, 352), 1);
    add_background_object(create_aquabrickback1_661(5888, 352), 1);
    add_background_object(create_aquabrickback1_661(5760, 480), 1);
    add_background_object(create_aquabrickback1_661(5888, 480), 1);
    add_background_object(create_aquabrickback1_661(5760, 608), 1);
    add_background_object(create_aquabrickback1_661(5888, 608), 1);
    add_background_object(create_aquabrickback1_661(5760, 736), 1);
    add_background_object(create_aquabrickback1_661(5888, 736), 1);
    add_background_object(create_aquabrickback1_661(5760, 864), 1);
    add_background_object(create_aquabrickback1_661(5888, 864), 1);
    add_background_object(create_aquabrickback1_661(6016, 352), 1);
    add_background_object(create_aquabrickback1_661(6144, 352), 1);
    add_background_object(create_aquabrickback1_661(6016, 480), 1);
    add_background_object(create_aquabrickback1_661(6144, 480), 1);
    add_background_object(create_aquabrickback1_661(6016, 608), 1);
    add_background_object(create_aquabrickback1_661(6144, 608), 1);
    add_background_object(create_aquabrickback1_661(6016, 736), 1);
    add_background_object(create_aquabrickback1_661(6144, 736), 1);
    add_background_object(create_aquabrickback1_661(6016, 864), 1);
    add_background_object(create_aquabrickback1_661(6144, 864), 1);
    add_background_object(create_aquabrickback1_661(6272, 352), 1);
    add_background_object(create_aquabrickback1_661(6400, 352), 1);
    add_background_object(create_aquabrickback1_661(6272, 480), 1);
    add_background_object(create_aquabrickback1_661(6400, 480), 1);
    add_background_object(create_aquabrickback1_661(6272, 608), 1);
    add_background_object(create_aquabrickback1_661(6400, 608), 1);
    add_background_object(create_aquabrickback1_661(6272, 736), 1);
    add_background_object(create_aquabrickback1_661(6400, 736), 1);
    add_background_object(create_aquabrickback1_661(6272, 864), 1);
    add_background_object(create_aquabrickback1_661(6400, 864), 1);
    add_background_object(create_aquabrickback1_661(6528, 480), 1);
    add_background_object(create_aquabrickback1_661(6528, 608), 1);
    add_background_object(create_aquabrickback1_661(6528, 736), 1);
    add_background_object(create_aquabrickback1_661(6528, 864), 1);
    add_background_object(create_aquabrickback1_661(384, 1024), 1);
    add_background_object(create_aquabrickback1_661(256, 1024), 1);
    add_background_object(create_aquabrickback1_661(384, 1024), 1);
    add_background_object(create_aquabrickback1_661(128, 1024), 1);
    add_background_object(create_aquabrickback1_661(0, 1024), 1);
    add_background_object(create_aquabrickback1_661(640, 1024), 1);
    add_background_object(create_aquabrickback1_661(512, 1024), 1);
    add_background_object(create_aquabrickback1_661(768, 1024), 1);
    add_background_object(create_aquabrickback1_661(2176, 1024), 1);
    add_background_object(create_aquabrickback1_661(2304, 1024), 1);
    add_background_object(create_aquabrickback1_661(256, 1152), 1);
    add_background_object(create_aquabrickback1_661(384, 1152), 1);
    add_background_object(create_aquabrickback1_661(128, 1152), 1);
    add_background_object(create_aquabrickback1_661(0, 1152), 1);
    add_background_object(create_aquabrickback1_661(640, 1152), 1);
    add_background_object(create_aquabrickback1_661(512, 1152), 1);
    add_background_object(create_aquabrickback1_661(768, 1152), 1);
    add_background_object(create_aquabrickback1_661(2176, 1152), 1);
    add_background_object(create_aquabrickback1_661(2304, 1152), 1);
    add_background_object(create_aquabrickback1_661(1664, 896), 1);
    add_background_object(create_aquabrickback1_661(1664, 576), 1);
    add_background_object(create_aquabrickback1_661(1664, 1024), 1);
    add_background_object(create_aquabrickback1_661(1664, 1152), 1);
    add_background_object(create_aquabrickback1_661(384, 448), 1);
    add_background_object(create_aquabrickback1_661(256, 384), 1);
    add_background_object(create_aquabrickback1_661(128, 384), 1);
    add_background_object(create_aquabrickback1_661(0, 384), 1);
    add_background_object(create_aquabrickback1_661(384, 320), 1);
    add_background_object(create_aquabrickback1_661(256, 256), 1);
    add_background_object(create_aquabrickback1_661(128, 256), 1);
    add_background_object(create_aquabrickback1_661(0, 256), 1);
    add_background_object(create_aquabrickback1_661(384, 192), 1);
    add_background_object(create_aquabrickback1_661(256, 128), 1);
    add_background_object(create_aquabrickback1_661(128, 128), 1);
    add_background_object(create_aquabrickback1_661(0, 128), 1);
    add_background_object(create_aquabrickback1_661(384, 64), 1);
    add_background_object(create_aquabrickback1_661(256, 0), 1);
    add_background_object(create_aquabrickback1_661(128, 0), 1);
    add_background_object(create_aquabrickback1_661(0, 0), 1);
    add_background_object(create_aquabrickback1_661(384, 896), 1);
    add_background_object(create_aquabrickback1_661(128, 896), 1);
    add_background_object(create_aquabrickback1_661(640, 896), 1);
    add_background_object(create_aquabrickback1_661(384, 832), 1);
    add_background_object(create_aquabrickback1_661(640, 768), 1);
    add_background_object(create_aquabrickback9_665(1664, 704), 1);
    add_background_object(create_aquabrickback1_661(128, 768), 1);
    add_background_object(create_aquabrickback7_662(5088, 992), 1);
    add_background_object(create_aquabrickback7_662(5344, 992), 1);
    add_background_object(create_aquabrickback7_662(5536, 992), 1);
    add_background_object(create_aquabrickback1_661(1024, 768), 1);
    add_background_object(create_aquabrickback1_661(1024, 896), 1);
    add_background_object(create_aquabrickback9_665(896, 640), 1);
    add_background_object(create_aquabrickback1_661(1024, 640), 1);
    add_background_object(create_aquabrickback1_661(896, 512), 1);
    add_background_object(create_aquabrickback1_661(1024, 576), 1);
    add_background_object(create_aquabrickback1_661(896, 1024), 1);
    add_background_object(create_aquabrickback1_661(1024, 1024), 1);
    add_background_object(create_aquabrickback1_661(896, 1152), 1);
    add_background_object(create_aquabrickback1_661(1024, 1152), 1);
    add_background_object(create_aquabrickback1_661(896, 896), 1);
    add_background_object(create_aquabrickback1_661(896, 768), 1);
    add_background_object(create_aquabrickback1_661(1280, 768), 1);
    add_background_object(create_aquabrickback1_661(1280, 896), 1);
    add_background_object(create_aquabrickback9_665(1152, 704), 1);
    add_background_object(create_aquabrickback1_661(1280, 640), 1);
    add_background_object(create_aquabrickback1_661(1152, 1024), 1);
    add_background_object(create_aquabrickback1_661(1280, 1024), 1);
    add_background_object(create_aquabrickback1_661(1152, 1152), 1);
    add_background_object(create_aquabrickback1_661(1280, 1152), 1);
    add_background_object(create_aquabrickback1_661(1152, 896), 1);
    add_background_object(create_aquabrickback1_661(1152, 576), 1);
    add_background_object(create_aquabrickback1_661(1536, 768), 1);
    add_background_object(create_aquabrickback1_661(1536, 896), 1);
    add_background_object(create_aquabrickback9_665(1408, 704), 1);
    add_background_object(create_aquabrickback1_661(1536, 640), 1);
    add_background_object(create_aquabrickback1_661(1408, 1024), 1);
    add_background_object(create_aquabrickback1_661(1536, 1024), 1);
    add_background_object(create_aquabrickback1_661(1408, 1152), 1);
    add_background_object(create_aquabrickback1_661(1536, 1152), 1);
    add_background_object(create_aquabrickback1_661(1408, 896), 1);
    add_background_object(create_aquabrickback1_661(1408, 576), 1);
    add_background_object(create_aquabrickback1_661(1152, 832), 1);
    add_background_object(create_aquabrickback1_661(1408, 832), 1);
    add_background_object(create_aquabrickback1_661(1664, 832), 1);
    add_background_object(create_aquabrickback1_661(1920, 896), 1);
    add_background_object(create_aquabrickback1_661(1920, 576), 1);
    add_background_object(create_aquabrickback1_661(1920, 512), 1);
    add_background_object(create_aquabrickback1_661(1920, 1024), 1);
    add_background_object(create_aquabrickback1_661(1920, 1152), 1);
    add_background_object(create_aquabrickback9_665(1920, 704), 1);
    add_background_object(create_aquabrickback1_661(1792, 768), 1);
    add_background_object(create_aquabrickback1_661(1792, 896), 1);
    add_background_object(create_aquabrickback1_661(1792, 640), 1);
    add_background_object(create_aquabrickback1_661(1792, 512), 1);
    add_background_object(create_aquabrickback1_661(1792, 1024), 1);
    add_background_object(create_aquabrickback1_661(1792, 1152), 1);
    add_background_object(create_aquabrickback1_661(1920, 832), 1);
    add_background_object(create_aquabrickback1_661(2048, 768), 1);
    add_background_object(create_aquabrickback1_661(2048, 896), 1);
    add_background_object(create_aquabrickback1_661(2048, 640), 1);
    add_background_object(create_aquabrickback1_661(2048, 512), 1);
    add_background_object(create_aquabrickback1_661(2048, 1024), 1);
    add_background_object(create_aquabrickback1_661(2048, 1152), 1);
    add_background_object(create_aquabrickback1_661(1664, 320), 1);
    add_background_object(create_aquabrickback9_665(1664, 448), 1);
    add_background_object(create_aquabrickback9_665(1024, 448), 1);
    add_background_object(create_aquabrickback1_661(1280, 576), 1);
    add_background_object(create_aquabrickback1_661(1152, 320), 1);
    add_background_object(create_aquabrickback1_661(1536, 512), 1);
    add_background_object(create_aquabrickback1_661(1408, 320), 1);
    add_background_object(create_aquabrickback1_661(1280, 320), 1);
    add_background_object(create_aquabrickback1_661(1536, 384), 1);
    add_background_object(create_aquabrickback1_661(1024, 320), 1);
    add_background_object(create_aquabrickback1_661(1024, 256), 1);
    add_background_object(create_aquabrickback1_661(1280, 256), 1);
    add_background_object(create_aquabrickback1_661(1536, 256), 1);
    add_background_object(create_aquabrickback1_661(1920, 384), 1);
    add_background_object(create_aquabrickback1_661(1792, 384), 1);
    add_background_object(create_aquabrickback1_661(1920, 256), 1);
    add_background_object(create_aquabrickback1_661(1792, 256), 1);
    add_background_object(create_aquabrickback1_661(1152, 256), 1);
    add_background_object(create_aquabrickback1_661(1408, 256), 1);
    add_background_object(create_aquabrickback1_661(896, 384), 1);
    add_background_object(create_aquabrickback1_661(896, 256), 1);
    add_background_object(create_aquabrickback1_661(1664, 256), 1);
    add_background_object(create_aquabrickback1_661(768, 384), 1);
    add_background_object(create_aquabrickback1_661(768, 256), 1);
    add_background_object(create_aquabrickback1_661(1024, 128), 1);
    add_background_object(create_aquabrickback1_661(1280, 128), 1);
    add_background_object(create_aquabrickback1_661(1536, 128), 1);
    add_background_object(create_aquabrickback1_661(1920, 128), 1);
    add_background_object(create_aquabrickback1_661(1792, 128), 1);
    add_background_object(create_aquabrickback1_661(1152, 128), 1);
    add_background_object(create_aquabrickback1_661(1408, 128), 1);
    add_background_object(create_aquabrickback1_661(896, 128), 1);
    add_background_object(create_aquabrickback1_661(1664, 128), 1);
    add_background_object(create_aquabrickback1_661(768, 128), 1);
    add_background_object(create_aquabrickback1_661(2176, 384), 1);
    add_background_object(create_aquabrickback1_661(2304, 384), 1);
    add_background_object(create_aquabrickback1_661(2048, 384), 1);
    add_background_object(create_aquabrickback10_664(1152, 448), 1);
    add_background_object(create_aquabrickback6_660(1408, 448), 1);
    add_background_object(create_aquabrickback7_662(1440, 448), 1);
    add_background_object(create_lightray1_659(1360, 472), 1);
    add_background_object(create_lightray2_666(1344, 504), 1);
    add_background_object(create_aquabrickback7_662(1184, 448), 1);
    add_background_object(create_aquabrickback1_661(6400, 1120), 1);
    add_background_object(create_aquabrickback1_661(6528, 992), 1);
    add_background_object(create_aquabrickback1_661(6528, 1120), 1);
    add_background_object(create_aquabrickback1_661(6656, 736), 1);
    add_background_object(create_aquabrickback1_661(6656, 864), 1);
    add_background_object(create_aquabrickback1_661(6784, 736), 1);
    add_background_object(create_aquabrickback1_661(6784, 864), 1);
    add_background_object(create_aquabrickback1_661(6656, 992), 1);
    add_background_object(create_aquabrickback1_661(6656, 1120), 1);
    add_background_object(create_aquabrickback1_661(6784, 1120), 1);
    add_background_object(create_aquabrickback1_661(6912, 736), 1);
    add_background_object(create_aquabrickback1_661(6912, 864), 1);
    add_background_object(create_aquabrickback1_661(6912, 992), 1);
    add_background_object(create_aquabrickback1_661(6912, 1120), 1);
    add_background_object(create_aquabrickback1_661(6144, 992), 1);
    add_background_object(create_aquabrickback1_661(6144, 1120), 1);
    add_background_object(create_aquabrickback1_661(6272, 992), 1);
    add_background_object(create_aquabrickback1_661(6272, 1120), 1);
    add_background_object(create_aquabrickback9_665(6400, 992), 1);
    add_background_object(create_aquabrickback1_661(7040, 736), 1);
    add_background_object(create_aquabrickback1_661(7040, 992), 1);
    add_background_object(create_aquabrickback1_661(7040, 1120), 1);
    add_background_object(create_aquabrickback1_661(7168, 736), 1);
    add_background_object(create_aquabrickback1_661(7168, 864), 1);
    add_background_object(create_aquabrickback1_661(7296, 736), 1);
    add_background_object(create_aquabrickback1_661(7296, 864), 1);
    add_background_object(create_aquabrickback1_661(7168, 992), 1);
    add_background_object(create_aquabrickback1_661(7168, 1120), 1);
    add_background_object(create_aquabrickback1_661(7296, 1120), 1);
    add_background_object(create_aquabrickback1_661(7680, 736), 1);
    add_background_object(create_aquabrickback1_661(7680, 864), 1);
    add_background_object(create_aquabrickback1_661(7680, 992), 1);
    add_background_object(create_aquabrickback1_661(7680, 1120), 1);
    add_background_object(create_aquabrickback9_665(6784, 992), 1);
    add_background_object(create_aquabrickback9_665(7040, 864), 1);
    add_background_object(create_aquabrickback9_665(7296, 992), 1);
    add_background_object(create_aquabrickback10_664(7808, 736), 1);
    add_background_object(create_aquabrickback10_664(7808, 864), 1);
    add_background_object(create_aquabrickback10_664(7808, 992), 1);
    add_background_object(create_aquabrickback10_664(7808, 1120), 1);
    add_background_object(create_aquabrickback1_661(8616, 320), 1);
    add_background_object(create_aquabrickback1_661(8616, 448), 1);
    add_background_object(create_aquabrickback1_661(8744, 448), 1);
    add_background_object(create_aquabrickback9_665(8744, 320), 1);
    add_background_object(create_aquabrickback1_661(8616, 192), 1);
    add_background_object(create_aquabrickback1_661(8744, 192), 1);
    add_background_object(create_aquabrickback1_661(8872, 448), 1);
    add_background_object(create_aquabrickback1_661(8872, 320), 1);
    add_background_object(create_aquabrickback10_664(8872, 192), 1);
    add_background_object(create_aquabrickback1_661(9000, 384), 1);
    add_background_object(create_aquabrickback1_661(9000, 320), 1);
    add_background_object(create_aquabrickback1_661(8616, 64), 1);
    add_background_object(create_aquabrickback1_661(8744, 64), 1);
    add_background_object(create_aquabrickback1_661(8872, 64), 1);
    add_background_object(create_aquabrickback1_661(9000, 64), 1);
    add_background_object(create_aquabrickback7_662(8904, 192), 1);
    add_background_object(create_lightray1_659(8944, 208), 1);
    add_background_object(create_lightray2_666(8928, 240), 1);
    add_background_object(create_aquabrickback1_661(5248, 224), 1);
    add_background_object(create_aquabrickback1_661(5376, 224), 1);
    add_background_object(create_aquabrickback1_661(5504, 224), 1);
    add_background_object(create_aquabrickback1_661(5632, 224), 1);
    add_background_object(create_aquabrickback1_661(5120, 224), 1);
    add_background_object(create_aquabrickback1_661(5760, 224), 1);
    add_background_object(create_aquabrickback1_661(5888, 224), 1);
    add_background_object(create_aquabrickback1_661(6016, 224), 1);
    add_background_object(create_aquabrickback1_661(6144, 224), 1);
    add_background_object(create_aquabrickback1_661(6272, 224), 1);
    add_background_object(create_aquabrickback1_661(6400, 224), 1);
    add_background_object(create_aquabrickback1_661(7424, 736), 1);
    add_background_object(create_aquabrickback1_661(7424, 864), 1);
    add_background_object(create_aquabrickback1_661(7424, 992), 1);
    add_background_object(create_aquabrickback1_661(7424, 1120), 1);
    add_background_object(create_aquabrickback1_661(7552, 736), 1);
    add_background_object(create_aquabrickback1_661(7552, 992), 1);
    add_background_object(create_aquabrickback1_661(7552, 1120), 1);
    add_background_object(create_aquabrickback9_665(7552, 864), 1);
    add_background_object(create_atsewerpipe9_668(11512, 928), 2);
    add_background_object(create_aquabrickarch1_669(2192, 976), 2);
    add_background_object(create_aquaplant1_670(11952, 840), 2);
    add_background_object(create_atsewerpipe1_671(11384, 880), 2);
    add_background_object(create_atsewerpipe6_672(11368, 896), 2);
    add_background_object(create_atsewerpipe6_672(11368, 928), 2);
    add_background_object(create_atsewerpipe6_672(11368, 960), 2);
    add_background_object(create_atsewerpipe6_672(11368, 992), 2);
    add_background_object(create_atsewerpipe1_671(11512, 880), 2);
    add_background_object(create_atsewerpipe9_668(11512, 1088), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(12480, -51), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_objectfuel_528(-284, 132), 2);
    add_object(create_objectjumppad_530(-384, 288), 2);
    add_object(create_objectcrystal_279(509, 954), 2);
    add_object(create_objectcrystal_279(605, 954), 2);
    add_object(create_waterjetright_673(1008, 992), 2);
    add_object(create_waterjetright_673(1008, 1024), 2);
    add_object(create_waterjetright_673(1136, 992), 2);
    add_object(create_waterjetright_673(1136, 1024), 2);
    add_object(create_waterjetright_673(1264, 992), 2);
    add_object(create_waterjetright_673(1264, 1024), 2);
    add_object(create_waterjetright_673(1392, 992), 2);
    add_object(create_waterjetright_673(1392, 1024), 2);
    add_object(create_waterjetright_673(1520, 992), 2);
    add_object(create_waterjetright_673(1520, 1024), 2);
    add_object(create_waterjetright_673(1648, 992), 2);
    add_object(create_waterjetright_673(1648, 1024), 2);
    add_object(create_waterjetright_673(1776, 992), 2);
    add_object(create_waterjetright_673(1776, 1024), 2);
    add_object(create_waterjetright_673(1904, 992), 2);
    add_object(create_waterjetright_673(1904, 1024), 2);
    add_object(create_waterjetright_673(2032, 992), 2);
    add_object(create_waterjetright_673(2032, 1024), 2);
    add_object(create_waterjetright_673(2160, 992), 2);
    add_object(create_waterjetright_673(2160, 1024), 2);
    add_object(create_waterjetright_673(2288, 992), 2);
    add_object(create_waterjetright_673(2288, 1024), 2);
    add_object(create_waterjetright_673(11264, 1136), 2);
    add_object(create_waterjetright_673(11264, 1168), 2);
    add_object(create_waterjetright_673(11392, 1136), 2);
    add_object(create_waterjetright_673(11392, 1168), 2);
    add_object(create_waterjetright_673(11520, 1136), 2);
    add_object(create_waterjetright_673(11520, 1168), 2);
    add_object(create_waterjetright_673(11648, 1136), 2);
    add_object(create_waterjetright_673(11648, 1168), 2);
    add_object(create_waterjetright_673(11776, 1136), 2);
    add_object(create_waterjetright_673(11776, 1168), 2);
    add_object(create_waterjetright_673(11904, 1136), 2);
    add_object(create_waterjetright_673(11904, 1168), 2);
    add_object(create_waterjetright_673(11008, 1136), 2);
    add_object(create_waterjetright_673(11008, 1168), 2);
    add_object(create_waterjetright_673(12032, 1136), 2);
    add_object(create_waterjetright_673(12032, 1168), 2);
    add_object(create_waterjetright_673(12160, 1136), 2);
    add_object(create_waterjetright_673(12160, 1168), 2);
    add_object(create_waterjetright_673(12288, 1136), 2);
    add_object(create_waterjetright_673(12288, 1168), 2);
    add_object(create_waterjetright_673(12416, 1136), 2);
    add_object(create_waterjetright_673(12416, 1168), 2);
    add_object(create_minibossironwormsegment_674(11967, 744), 2);
    add_object(create_minibossironwormsegment_674(11959, 768), 2);
    add_object(create_minibossironwormsegment_674(11951, 792), 2);
    add_object(create_minibossironwormsegment_674(11951, 816), 2);
    add_object(create_minibossironwormsegment_674(11959, 840), 2);
    add_object(create_minibossironwormsegment_674(11967, 864), 2);
    add_object(create_minibossironworm_675(11967, 704), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_aquabrick1_676(10336, 1120), 3);
    add_background_object(create_aquabrick1_676(10000, 1104), 3);
    add_background_object(create_aquabrick1_676(9808, 1104), 3);
    add_background_object(create_aquabrick1_676(3456, 1024), 3);
    add_background_object(create_aquabrick10_677(9024, 752), 3);
    add_background_object(create_aquabrick10_677(9152, 752), 3);
    add_background_object(create_aquabrick10_677(9088, 752), 3);
    add_background_object(create_aquadirt6_678(9088, 736), 3);
    add_background_object(create_atsewerpipe11_679(9232, 1184), 3);
    add_background_object(create_atsewerpipe9_668(8976, 1184), 3);
    add_background_object(create_atsewerpipe9_668(9104, 1184), 3);
    add_background_object(create_atsewerpipe9_668(9360, 1328), 3);
    add_background_object(create_atsewerpipe9_668(9488, 1328), 3);
    add_background_object(create_atsewerpipe9_668(8720, 1328), 3);
    add_background_object(create_atsewerpipe9_668(8848, 1328), 3);
    add_background_object(create_atsewerpipe9_668(8976, 1328), 3);
    add_background_object(create_atsewerpipe9_668(9104, 1328), 3);
    add_background_object(create_atsewerpipe9_668(9232, 1328), 3);
    add_background_object(create_atsewerpipe6_672(8832, 1016), 3);
    add_background_object(create_lightray1_659(8736, 1008), 3);
    add_background_object(create_atsewerpipe8_680(8080, 1360), 3);
    add_background_object(create_atsewerpipe11_679(8080, 1200), 3);
    add_background_object(create_atsewerpipe9_668(7952, 1200), 3);
    add_background_object(create_atsewerpipe9_668(7824, 1200), 3);
    add_background_object(create_atsewerpipe6_672(8184, 944), 3);
    add_background_object(create_atsewerpipe6_672(8544, 1080), 3);
    add_background_object(create_atsewerpipe6_672(8544, 1016), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 944), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 880), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 1264), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 1200), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 1136), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 1072), 3);
    add_background_object(create_atwaterfaucet3_681(9320, 1008), 3);
    add_background_object(create_atsewerpipe1_671(8288, 960), 3);
    add_background_object(create_atsewerpipe1_671(8416, 976), 3);
    add_background_object(create_atsewerpipe6_672(8272, 1016), 3);
    add_background_object(create_atsewerpipe6_672(8272, 952), 3);
    add_background_object(create_aquabrick5_682(11168, 1168), 3);
    add_background_object(create_aquadirt6_678(11136, 1120), 3);
    add_background_object(create_aquabrick21_683(384, 688), 3);
    add_background_object(create_aquabrick1_676(11648, 1088), 3);
    add_background_object(create_aquabrick16_684(10312, 1136), 3);
    add_background_object(create_aquabrick15_685(10368, 1136), 3);
    add_background_object(create_aquatree2_686(12104, 728), 3);
    add_background_object(create_aquabrickarch1_669(11224, 1056), 3);
    add_background_object(create_aquadirt6_678(11136, 1088), 3);
    add_background_object(create_switchbase_687(11592, 864), 3);
    add_background_object(create_aquabrick11_688(11264, 1088), 3);
    add_background_object(create_aquabrick11_688(11456, 1056), 3);
    add_background_object(create_aquabrick1_676(11264, 1056), 3);
    add_background_object(create_aquabrick1_676(11456, 1088), 3);
    add_background_object(create_aquadirt6_678(11008, 1120), 3);
    add_background_object(create_aquatree2_686(11616, 736), 3);
    add_background_object(create_aquadirt_689(11648, 880), 3);
    add_background_object(create_aquabrickarch1_669(11264, 928), 3);
    add_background_object(create_aquabrickarch1_669(11264, 992), 3);
    add_background_object(create_aquabrickarch1_669(11264, 864), 3);
    add_background_object(create_aquabrickarch2_690(11264, 672), 3);
    add_background_object(create_aquabrickarch1_669(11264, 800), 3);
    add_background_object(create_aquabrick3_691(12416, 352), 3);
    add_background_object(create_aquabrick3_691(12416, 416), 3);
    add_background_object(create_aquabrick21_683(12416, 480), 3);
    add_background_object(create_aquabrickarch1_669(11224, 992), 3);
    add_background_object(create_aquabrickarch1_669(11224, 928), 3);
    add_background_object(create_aquadirt2_692(12272, 872), 3);
    add_background_object(create_aquadirt_689(11776, 880), 3);
    add_background_object(create_aquabrickarch1_669(10688, 672), 3);
    add_background_object(create_aquabrickarch1_669(10688, 544), 3);
    add_background_object(create_aquabrickarch1_669(10688, 608), 3);
    add_background_object(create_aquabrick11_688(10496, 736), 3);
    add_background_object(create_aquabrick1_676(10496, 704), 3);
    add_background_object(create_aquabrick1_676(10496, 768), 3);
    add_background_object(create_aquabrick14_693(10736, 416), 3);
    add_background_object(create_aquabrick14_693(10736, 480), 3);
    add_background_object(create_aquabrick5_682(10880, 128), 3);
    add_background_object(create_aquabrick21_683(11264, 160), 3);
    add_background_object(create_aquabrick1_676(10752, 608), 3);
    add_background_object(create_aquabrick1_676(10816, 608), 3);
    add_background_object(create_aquabrick1_676(10752, 512), 3);
    add_background_object(create_aquabrick1_676(10816, 512), 3);
    add_background_object(create_aquatree2_686(10536, 544), 3);
    add_background_object(create_aquabrick3_691(10752, 320), 3);
    add_background_object(create_aquabrick21_683(10752, 384), 3);
    add_background_object(create_aquaplant1_670(10800, 1096), 3);
    add_background_object(create_aquatree2_686(10896, 960), 3);
    add_background_object(create_aquadirt2_692(10720, 1128), 3);
    add_background_object(create_aquadirt2_692(10872, 1112), 3);
    add_background_object(create_aquabrickarch1_669(9168, 1248), 3);
    add_background_object(create_aquabrickarch1_669(10208, 1056), 3);
    add_background_object(create_aquabrickarch1_669(9648, 480), 3);
    add_background_object(create_aquabrickarch1_669(9408, 672), 3);
    add_background_object(create_aquaplant2_694(10424, 144), 3);
    add_background_object(create_aquabrick3_691(7424, 1136), 3);
    add_background_object(create_aquaplant1_670(9528, 648), 3);
    add_background_object(create_aquadirt2_692(10272, 1112), 3);
    add_background_object(create_aquadirt2_692(10472, 1128), 3);
    add_background_object(create_aquadirt5_695(10392, 1120), 3);
    add_background_object(create_aquadirt_689(10560, 1136), 3);
    add_background_object(create_aquabrick16_684(10376, 1136), 3);
    add_background_object(create_aquadirt6_678(10192, 1136), 3);
    add_background_object(create_aquabrick15_685(10304, 1136), 3);
    add_background_object(create_atwaterfaucet5_696(9792, 888), 3);
    add_background_object(create_atwaterfaucet5_696(9984, 888), 3);
    add_background_object(create_atwaterfaucet5_696(10320, 776), 3);
    add_background_object(create_aquabrick3_691(9728, 1280), 3);
    add_background_object(create_aquabrick3_691(8768, 960), 3);
    add_background_object(create_aquabrick3_691(8768, 896), 3);
    add_background_object(create_aquabrick21_683(8896, 1152), 3);
    add_background_object(create_aquabrick21_683(8896, 1024), 3);
    add_background_object(create_aquabrick5_682(8576, 1248), 3);
    add_background_object(create_aquabrick3_691(8448, 1120), 3);
    add_background_object(create_aquabrick3_691(8448, 1184), 3);
    add_background_object(create_aquabrick10_677(8416, 960), 3);
    add_background_object(create_aquabrickslope1_697(8256, 912), 3);
    add_background_object(create_aquabrickslope2_698(8384, 944), 3);
    add_background_object(create_aquabrick3_691(8320, 1120), 3);
    add_background_object(create_aquabrick10_677(8288, 1088), 3);
    add_background_object(create_aquabrick14_693(8176, 1056), 3);
    add_background_object(create_aquatree2_686(9360, 96), 3);
    add_background_object(create_aquadirt4_699(9424, 224), 3);
    add_background_object(create_atsewerpipe6_672(10144, 552), 3);
    add_background_object(create_atsewerpipe4_700(10120, 552), 3);
    add_background_object(create_atsewerpipe6_672(10144, 680), 3);
    add_background_object(create_atsewerpipe6_672(10144, 648), 3);
    add_background_object(create_atsewerpipe6_672(10144, 584), 3);
    add_background_object(create_atsewerpipe6_672(10144, 616), 3);
    add_background_object(create_atsewerpipe10_701(9792, 248), 3);
    add_background_object(create_atsewerpipe11_679(9952, 248), 3);
    add_background_object(create_atsewerpipe8_680(9792, 408), 3);
    add_background_object(create_aquatree1_702(10104, 544), 3);
    add_background_object(create_aquadirt_689(10176, 688), 3);
    add_background_object(create_aquadirt2_692(10096, 680), 3);
    add_background_object(create_atsewerpipe1_671(9888, 552), 3);
    add_background_object(create_atsewerpipe6_672(10016, 648), 3);
    add_background_object(create_aquabrick21_683(9888, 424), 3);
    add_background_object(create_aquadirt6_678(9856, 688), 3);
    add_background_object(create_atsewerpipe1_671(9760, 552), 3);
    add_background_object(create_atsewerpipe1_671(9632, 552), 3);
    add_background_object(create_atsewerpipe6_672(9616, 584), 3);
    add_background_object(create_atsewerpipe6_672(9616, 616), 3);
    add_background_object(create_atsewerpipe6_672(9616, 648), 3);
    add_background_object(create_atsewerpipe6_672(9616, 552), 3);
    add_background_object(create_aquadirt2_692(9592, 664), 3);
    add_background_object(create_aquadirt6_678(9728, 688), 3);
    add_background_object(create_aquadirt3_703(9088, 728), 3);
    add_background_object(create_atsewerpipe9_668(8960, 784), 3);
    add_background_object(create_atsewerpipe9_668(9088, 784), 3);
    add_background_object(create_aquabrick10_677(8960, 752), 3);
    add_background_object(create_aquabrick15_685(1760, 288), 3);
    add_background_object(create_aquatree2_686(9184, 544), 3);
    add_background_object(create_aquatree2_686(8184, 336), 3);
    add_background_object(create_atsewerpipe10_701(8304, 432), 3);
    add_background_object(create_aquabrick21_683(9216, 704), 3);
    add_background_object(create_aquabrick1_676(3200, 1024), 3);
    add_background_object(create_aquabrick11_688(3264, 1024), 3);
    add_background_object(create_aquaplant2_694(3544, 464), 3);
    add_background_object(create_atsewerpipe8_680(6480, 1552), 3);
    add_background_object(create_atsewerpipe10_701(6480, 1392), 3);
    add_background_object(create_atsewerpipe9_668(6640, 1392), 3);
    add_background_object(create_atsewerpipe8_680(6864, 1488), 3);
    add_background_object(create_atsewerpipe8_680(6864, 1616), 3);
    add_background_object(create_atsewerpipe8_680(7184, 1568), 3);
    add_background_object(create_atsewerpipe8_680(7184, 1440), 3);
    add_background_object(create_atsewerpipe8_680(6864, 1360), 3);
    add_background_object(create_atcolumn_704(6592, 1584), 3);
    add_background_object(create_aquabrick21_683(7040, 1456), 3);
    add_background_object(create_aquabrick1_676(7040, 1712), 3);
    add_background_object(create_aquabrick1_676(6976, 1712), 3);
    add_background_object(create_aquabrick5_682(6080, 1360), 3);
    add_background_object(create_aquabrick21_683(2944, 1024), 3);
    add_background_object(create_atsewerpipe11_679(6864, 1200), 3);
    add_background_object(create_atsewerpipe9_668(6736, 1200), 3);
    add_background_object(create_atsewerpipe9_668(6608, 1200), 3);
    add_background_object(create_atsewerpipe9_668(6480, 1200), 3);
    add_background_object(create_atsewerpipe9_668(6352, 1200), 3);
    add_background_object(create_atsewerpipe9_668(6224, 1200), 3);
    add_background_object(create_aquabrick21_683(256, 1088), 3);
    add_background_object(create_aquabrick21_683(256, 960), 3);
    add_background_object(create_aquabrick5_682(-64, 1088), 3);
    add_background_object(create_aquabrick5_682(-64, 960), 3);
    add_background_object(create_aquabrick1_676(192, 1184), 3);
    add_background_object(create_atsewerpipe8_680(8720, 720), 3);
    add_background_object(create_aquatree2_686(8520, 712), 3);
    add_background_object(create_aquabrick10_677(8480, 928), 3);
    add_background_object(create_aquabrick3_691(8576, 896), 3);
    add_background_object(create_atsewerpipe1_671(8320, 784), 3);
    add_background_object(create_aquabrick21_683(9600, 1280), 3);
    add_background_object(create_aquabrick1_676(8960, 1504), 3);
    add_background_object(create_aquabrick1_676(8896, 1504), 3);
    add_background_object(create_aquabrick1_676(9088, 1472), 3);
    add_background_object(create_aquabrick1_676(9152, 1504), 3);
    add_background_object(create_aquabrick1_676(9024, 1504), 3);
    add_background_object(create_aquabrick11_688(9024, 1472), 3);
    add_background_object(create_aquabrick1_676(9216, 1472), 3);
    add_background_object(create_aquabrick1_676(9344, 1504), 3);
    add_background_object(create_aquabrick1_676(9280, 1504), 3);
    add_background_object(create_aquabrick11_688(9152, 1472), 3);
    add_background_object(create_aquabrick3_691(9344, 1536), 3);
    add_background_object(create_aquabrick10_677(7424, 1136), 3);
    add_background_object(create_aquabrick5_682(7680, 1168), 3);
    add_background_object(create_aquatree2_686(5704, 656), 3);
    add_background_object(create_aquatree1_702(5672, 760), 3);
    add_background_object(create_aquatree2_686(5712, 800), 3);
    add_background_object(create_aquatree1_702(5936, 728), 3);
    add_background_object(create_aquabrick21_683(7296, 1232), 3);
    add_background_object(create_aquabrick21_683(7296, 1264), 3);
    add_background_object(create_aquabrick21_683(7296, 1104), 3);
    add_background_object(create_atsewerpipe1_671(6208, 800), 3);
    add_background_object(create_aquabrick21_683(5696, 976), 3);
    add_background_object(create_aquabrick21_683(5696, 912), 3);
    add_background_object(create_atcolumn_704(7136, 1296), 3);
    add_background_object(create_aquabrick5_682(6336, 1104), 3);
    add_background_object(create_atsewerpipe6_672(6144, 408), 3);
    add_background_object(create_atsewerpipe6_672(5984, 416), 3);
    add_background_object(create_atsewerpipe6_672(5664, 424), 3);
    add_background_object(create_atsewerpipe6_672(4512, 592), 3);
    add_background_object(create_aquabrick1_676(5440, 464), 3);
    add_background_object(create_aquabrick1_676(5440, 432), 3);
    add_background_object(create_aquabrick1_676(5504, 464), 3);
    add_background_object(create_aquabrick1_676(5504, 432), 3);
    add_background_object(create_aquabrickarch1_669(5248, 752), 3);
    add_background_object(create_aquabrickarch1_669(5008, 752), 3);
    add_background_object(create_aquabrickarch1_669(5248, 816), 3);
    add_background_object(create_aquabrickarch1_669(5008, 816), 3);
    add_background_object(create_aquabrickarch1_669(5248, 848), 3);
    add_background_object(create_aquabrickarch2_690(5008, 624), 3);
    add_background_object(create_aquabrickarch3_705(5120, 624), 3);
    add_background_object(create_aquabrick1_676(5376, 432), 3);
    add_background_object(create_atsewerpipe1_671(5440, 464), 3);
    add_background_object(create_atsewerpipe1_671(5312, 432), 3);
    add_background_object(create_aquabrick10_677(5440, 608), 3);
    add_background_object(create_aquabrick2_706(5280, 744), 3);
    add_background_object(create_aquabrick5_682(6336, 432), 3);
    add_background_object(create_aquabrick5_682(6336, 368), 3);
    add_background_object(create_aquabrick5_682(6336, 704), 3);
    add_background_object(create_aquabrick3_691(6080, 944), 3);
    add_background_object(create_aquabrick1_676(5952, 912), 3);
    add_background_object(create_aquabrick1_676(6016, 912), 3);
    add_background_object(create_aquabrick5_682(4864, 432), 3);
    add_background_object(create_atsewerpipe6_672(3880, 824), 3);
    add_background_object(create_atsewerpipe6_672(3832, 824), 3);
    add_background_object(create_aquabrick11_688(3864, 616), 3);
    add_background_object(create_aquabrick14_693(3848, 584), 3);
    add_background_object(create_aquabrick11_688(3864, 584), 3);
    add_background_object(create_aquabrick4_707(3920, 584), 3);
    add_background_object(create_aquabrick3_691(3712, 1152), 3);
    add_background_object(create_aquabrick1_676(3200, 960), 3);
    add_background_object(create_aquabrick11_688(3264, 960), 3);
    add_background_object(create_aquabrick11_688(3200, 992), 3);
    add_background_object(create_aquabrick1_676(3264, 992), 3);
    add_background_object(create_aquabrick10_677(672, 992), 3);
    add_background_object(create_aquabrick3_691(768, 960), 3);
    add_background_object(create_atladder_708(-152, 968), 3);
    add_background_object(create_aquabrick11_688(4608, 896), 3);
    add_background_object(create_aquabrick2_706(896, 912), 3);
    add_background_object(create_aquabrick2_706(960, 912), 3);
    add_background_object(create_aquabrick6_709(4160, 784), 3);
    add_background_object(create_aquabrick3_691(4544, 960), 3);
    add_background_object(create_aquabrick3_691(4672, 960), 3);
    add_background_object(create_aquabrick2_706(4672, 880), 3);
    add_background_object(create_aquabrick2_706(4608, 880), 3);
    add_background_object(create_aquabrick14_693(-136, 1032), 3);
    add_background_object(create_aquabrick3_691(4800, 960), 3);
    add_background_object(create_aquabrick2_706(4864, 880), 3);
    add_background_object(create_aquabrick2_706(4800, 880), 3);
    add_background_object(create_aquabrick1_676(896, 928), 3);
    add_background_object(create_aquabrick1_676(4544, 896), 3);
    add_background_object(create_aquabrick1_676(4672, 896), 3);
    add_background_object(create_aquabrick1_676(4800, 896), 3);
    add_background_object(create_aquabrick3_691(4160, 960), 3);
    add_background_object(create_aquabrick3_691(896, 1088), 3);
    add_background_object(create_aquabrick3_691(4544, 1024), 3);
    add_background_object(create_aquabrick3_691(4672, 1024), 3);
    add_background_object(create_aquabrick3_691(4800, 1024), 3);
    add_background_object(create_aquabrick3_691(4160, 1024), 3);
    add_background_object(create_aquabrick3_691(896, 1152), 3);
    add_background_object(create_aquabrick11_688(4864, 896), 3);
    add_background_object(create_aquabrick11_688(960, 928), 3);
    add_background_object(create_aquabrick3_691(2432, 1088), 3);
    add_background_object(create_aquabrick3_691(2432, 1152), 3);
    add_background_object(create_aquabrick3_691(896, 1216), 3);
    add_background_object(create_aquabrick3_691(2432, 1216), 3);
    add_background_object(create_aquabrick1_676(4224, 560), 3);
    add_background_object(create_aquabrick1_676(4160, 560), 3);
    add_background_object(create_aquabrick1_676(4352, 560), 3);
    add_background_object(create_aquabrick1_676(4288, 560), 3);
    add_background_object(create_aquabrick3_691(4416, 496), 3);
    add_background_object(create_aquabrick3_691(4416, 432), 3);
    add_background_object(create_aquabrick1_676(4480, 560), 3);
    add_background_object(create_aquabrick1_676(4416, 560), 3);
    add_background_object(create_aquabrick3_691(4544, 496), 3);
    add_background_object(create_aquabrick3_691(4544, 432), 3);
    add_background_object(create_aquabrick1_676(4608, 560), 3);
    add_background_object(create_aquabrick1_676(4544, 560), 3);
    add_background_object(create_aquabrick1_676(4736, 560), 3);
    add_background_object(create_aquabrick1_676(4672, 560), 3);
    add_background_object(create_lightray1_659(3064, 656), 3);
    add_background_object(create_lightray1_659(3048, 688), 3);
    add_background_object(create_lightray1_659(3032, 720), 3);
    add_background_object(create_lightray1_659(4280, 592), 3);
    add_background_object(create_lightray1_659(4264, 624), 3);
    add_background_object(create_lightray2_666(4248, 656), 3);
    add_background_object(create_lightray2_666(3000, 784), 3);
    add_background_object(create_lightray1_659(4832, 592), 3);
    add_background_object(create_lightray1_659(4816, 624), 3);
    add_background_object(create_lightray2_666(4800, 656), 3);
    add_background_object(create_aquabrickarch1_669(3344, 528), 3);
    add_background_object(create_aquabrickarch2_690(3344, 400), 3);
    add_background_object(create_aquabrickslope3_710(640, 944), 3);
    add_background_object(create_aquabrick3_691(768, 1024), 3);
    add_background_object(create_aquabrick3_691(768, 1088), 3);
    add_background_object(create_aquabrick3_691(768, 1152), 3);
    add_background_object(create_aquabrick3_691(768, 1216), 3);
    add_background_object(create_aquabrick3_691(640, 1024), 3);
    add_background_object(create_aquabrick3_691(640, 1088), 3);
    add_background_object(create_aquabrick3_691(640, 1152), 3);
    add_background_object(create_aquabrick3_691(640, 1216), 3);
    add_background_object(create_aquabrick3_691(512, 1024), 3);
    add_background_object(create_aquabrick2_706(512, 976), 3);
    add_background_object(create_aquabrick2_706(576, 976), 3);
    add_background_object(create_aquabrick1_676(512, 992), 3);
    add_background_object(create_aquabrick3_691(512, 1088), 3);
    add_background_object(create_aquabrick3_691(512, 1152), 3);
    add_background_object(create_aquabrick3_691(512, 1216), 3);
    add_background_object(create_aquabrick11_688(576, 992), 3);
    add_background_object(create_aquabrickslope4_711(768, 736), 3);
    add_background_object(create_aquabrickslope3_710(640, 768), 3);
    add_background_object(create_aquabrick3_691(512, 752), 3);
    add_background_object(create_aquabrick3_691(512, 688), 3);
    add_background_object(create_aquabrick1_676(576, 816), 3);
    add_background_object(create_aquabrick1_676(512, 816), 3);
    add_background_object(create_aquabrick3_691(512, 624), 3);
    add_background_object(create_aquabrick3_691(768, 624), 3);
    add_background_object(create_aquabrick3_691(640, 624), 3);
    add_background_object(create_aquabrick3_691(768, 688), 3);
    add_background_object(create_aquabrick3_691(640, 688), 3);
    add_background_object(create_aquabrick3_691(640, 752), 3);
    add_background_object(create_aquabrick10_677(800, 752), 3);
    add_background_object(create_aquabrick10_677(736, 752), 3);
    add_background_object(create_aquabrick3_691(384, 1024), 3);
    add_background_object(create_aquabrick3_691(384, 1088), 3);
    add_background_object(create_aquabrick3_691(384, 1152), 3);
    add_background_object(create_aquabrick3_691(384, 1216), 3);
    add_background_object(create_aquabrick3_691(384, 688), 3);
    add_background_object(create_aquabrick3_691(384, 624), 3);
    add_background_object(create_aquabrick3_691(256, 1216), 3);
    add_background_object(create_aquabrick3_691(256, 624), 3);
    add_background_object(create_lightray1_659(952, 784), 3);
    add_background_object(create_lightray1_659(936, 816), 3);
    add_background_object(create_aquabrick2_706(2816, 1040), 3);
    add_background_object(create_aquabrick1_676(2816, 1056), 3);
    add_background_object(create_aquabrick3_691(2816, 1216), 3);
    add_background_object(create_aquabrick3_691(2816, 1280), 3);
    add_background_object(create_aquabrick2_706(2944, 976), 3);
    add_background_object(create_aquabrick2_706(3008, 976), 3);
    add_background_object(create_aquabrick1_676(2944, 992), 3);
    add_background_object(create_aquabrick1_676(3008, 992), 3);
    add_background_object(create_aquabrick1_676(3008, 1024), 3);
    add_background_object(create_aquabrick1_676(3008, 1056), 3);
    add_background_object(create_aquabrick3_691(2944, 1216), 3);
    add_background_object(create_aquabrick3_691(2944, 1280), 3);
    add_background_object(create_aquabrick13_712(2928, 976), 3);
    add_background_object(create_aquabrick4_707(3064, 992), 3);
    add_background_object(create_aquabrick6_709(3072, 976), 3);
    add_background_object(create_aquabrick14_693(2928, 992), 3);
    add_background_object(create_aquabrick1_676(2880, 688), 3);
    add_background_object(create_aquabrick2_706(3072, 1040), 3);
    add_background_object(create_aquabrick1_676(3072, 1056), 3);
    add_background_object(create_aquabrick1_676(3136, 1056), 3);
    add_background_object(create_aquabrick3_691(3072, 1088), 3);
    add_background_object(create_aquabrick3_691(3072, 1152), 3);
    add_background_object(create_aquabrick3_691(3072, 1216), 3);
    add_background_object(create_aquabrick3_691(3072, 1280), 3);
    add_background_object(create_aquabrick1_676(3200, 896), 3);
    add_background_object(create_aquabrick3_691(3200, 1088), 3);
    add_background_object(create_aquabrick3_691(3200, 1152), 3);
    add_background_object(create_aquabrick3_691(3200, 1216), 3);
    add_background_object(create_aquabrick11_688(3264, 896), 3);
    add_background_object(create_aquabrick3_691(3200, 1280), 3);
    add_background_object(create_aquabrick13_712(3184, 880), 3);
    add_background_object(create_aquabrick4_707(3320, 992), 3);
    add_background_object(create_aquabrick6_709(3328, 880), 3);
    add_background_object(create_aquabrick14_693(3184, 992), 3);
    add_background_object(create_aquabrick2_706(3328, 1040), 3);
    add_background_object(create_aquabrick1_676(3328, 1056), 3);
    add_background_object(create_aquabrick1_676(3392, 1056), 3);
    add_background_object(create_aquabrick3_691(3328, 1088), 3);
    add_background_object(create_aquabrick3_691(3328, 1152), 3);
    add_background_object(create_aquabrick3_691(3328, 1216), 3);
    add_background_object(create_aquabrick3_691(3328, 1280), 3);
    add_background_object(create_aquabrick2_706(3136, 1040), 3);
    add_background_object(create_aquabrick11_688(3200, 928), 3);
    add_background_object(create_aquabrick1_676(3264, 928), 3);
    add_background_object(create_aquabrick4_707(3320, 928), 3);
    add_background_object(create_aquabrick14_693(3184, 928), 3);
    add_background_object(create_aquabrick4_707(3320, 896), 3);
    add_background_object(create_aquabrick14_693(3184, 896), 3);
    add_background_object(create_aquabrick3_691(896, 144), 3);
    add_background_object(create_aquabrick3_691(512, 560), 3);
    add_background_object(create_aquabrick3_691(768, 560), 3);
    add_background_object(create_aquabrick3_691(640, 560), 3);
    add_background_object(create_aquabrick3_691(384, 560), 3);
    add_background_object(create_aquabrick3_691(320, 560), 3);
    add_background_object(create_aquabrick3_691(896, 80), 3);
    add_background_object(create_aquabrick3_691(768, 432), 3);
    add_background_object(create_aquabrick3_691(2880, 560), 3);
    add_background_object(create_aquabrick1_676(3008, 624), 3);
    add_background_object(create_aquabrick3_691(2880, 496), 3);
    add_background_object(create_aquabrick3_691(2880, 432), 3);
    add_background_object(create_aquabrick3_691(3008, 560), 3);
    add_background_object(create_aquabrick1_676(3136, 624), 3);
    add_background_object(create_aquabrick1_676(3072, 624), 3);
    add_background_object(create_aquabrick3_691(3008, 496), 3);
    add_background_object(create_aquabrick3_691(3008, 432), 3);
    add_background_object(create_aquabrick3_691(3136, 560), 3);
    add_background_object(create_aquabrick1_676(3264, 624), 3);
    add_background_object(create_aquabrick1_676(3200, 624), 3);
    add_background_object(create_aquabrick3_691(3136, 496), 3);
    add_background_object(create_aquabrick3_691(3136, 432), 3);
    add_background_object(create_lightray1_659(3016, 752), 3);
    add_background_object(create_lightray1_659(3256, 656), 3);
    add_background_object(create_lightray2_666(3224, 720), 3);
    add_background_object(create_lightray1_659(3240, 688), 3);
    add_background_object(create_aquabrick16_684(2936, 688), 3);
    add_background_object(create_aquabrick1_676(3456, 960), 3);
    add_background_object(create_aquabrick11_688(3520, 960), 3);
    add_background_object(create_aquabrick11_688(3456, 992), 3);
    add_background_object(create_aquabrick1_676(3520, 992), 3);
    add_background_object(create_aquabrick2_706(3456, 528), 3);
    add_background_object(create_aquabrick2_706(3520, 528), 3);
    add_background_object(create_aquabrick3_691(3456, 1088), 3);
    add_background_object(create_aquabrick3_691(3456, 1216), 3);
    add_background_object(create_aquabrick3_691(3456, 1280), 3);
    add_background_object(create_aquabrick13_712(3440, 528), 3);
    add_background_object(create_aquabrick14_693(3440, 992), 3);
    add_background_object(create_aquabrick2_706(3392, 1040), 3);
    add_background_object(create_aquabrick1_676(3520, 928), 3);
    add_background_object(create_aquabrick11_688(3456, 928), 3);
    add_background_object(create_aquabrick14_693(3440, 928), 3);
    add_background_object(create_aquabrick1_676(3456, 896), 3);
    add_background_object(create_aquabrick11_688(3520, 896), 3);
    add_background_object(create_aquabrick1_676(3520, 864), 3);
    add_background_object(create_aquabrick11_688(3456, 864), 3);
    add_background_object(create_aquabrick14_693(3440, 864), 3);
    add_background_object(create_aquabrick1_676(3456, 576), 3);
    add_background_object(create_aquabrick11_688(3520, 576), 3);
    add_background_object(create_aquabrick1_676(3520, 544), 3);
    add_background_object(create_aquabrick11_688(3456, 544), 3);
    add_background_object(create_aquabrick14_693(3440, 544), 3);
    add_background_object(create_aquabrick6_709(3584, 528), 3);
    add_background_object(create_aquabrick17_713(3584, 920), 3);
    add_background_object(create_aquabrick19_714(3840, 920), 3);
    add_background_object(create_aquabrick18_715(3584, 920), 3);
    add_background_object(create_aquabrick20_716(3840, 920), 3);
    add_background_object(create_aquabrick4_707(3576, 544), 3);
    add_background_object(create_aquabrick1_676(2816, 688), 3);
    add_background_object(create_aquabrick1_676(2880, 656), 3);
    add_background_object(create_aquabrick4_707(2936, 624), 3);
    add_background_object(create_aquabrick1_676(2880, 624), 3);
    add_background_object(create_aquabrick1_676(2944, 624), 3);
    add_background_object(create_aquabrick3_691(3136, 368), 3);
    add_background_object(create_aquabrick3_691(3136, 304), 3);
    add_background_object(create_aquabrick3_691(3008, 368), 3);
    add_background_object(create_aquabrick3_691(3008, 304), 3);
    add_background_object(create_aquabrick3_691(3392, 304), 3);
    add_background_object(create_aquabrick3_691(3264, 304), 3);
    add_background_object(create_aquabrick3_691(3136, 240), 3);
    add_background_object(create_aquabrick3_691(3008, 240), 3);
    add_background_object(create_aquabrick3_691(3392, 240), 3);
    add_background_object(create_aquabrick3_691(3264, 240), 3);
    add_background_object(create_aquabrick1_676(3456, 368), 3);
    add_background_object(create_aquabrick1_676(3392, 368), 3);
    add_background_object(create_aquabrick3_691(2880, 368), 3);
    add_background_object(create_aquabrick3_691(2752, 368), 3);
    add_background_object(create_aquabrick3_691(2880, 304), 3);
    add_background_object(create_aquabrick3_691(2752, 304), 3);
    add_background_object(create_aquabrick3_691(2880, 240), 3);
    add_background_object(create_aquabrick3_691(2752, 240), 3);
    add_background_object(create_aquabrick2_706(3776, 1104), 3);
    add_background_object(create_aquabrick3_691(3584, 1216), 3);
    add_background_object(create_aquabrick3_691(3712, 1216), 3);
    add_background_object(create_aquabrick3_691(3584, 1280), 3);
    add_background_object(create_aquabrick3_691(3712, 1280), 3);
    add_background_object(create_aquabrick1_676(3776, 1120), 3);
    add_background_object(create_aquabrick1_676(3712, 1120), 3);
    add_background_object(create_aquabrick3_691(3840, 1152), 3);
    add_background_object(create_aquabrick3_691(3840, 1280), 3);
    add_background_object(create_aquabrick1_676(3840, 1120), 3);
    add_background_object(create_aquabrick3_691(3904, 1216), 3);
    add_background_object(create_aquabrick3_691(3904, 1280), 3);
    add_background_object(create_aquabrick3_691(3840, 1216), 3);
    add_background_object(create_aquabrick3_691(4032, 1216), 3);
    add_background_object(create_aquabrick3_691(4032, 1280), 3);
    add_background_object(create_aquabrick3_691(4032, 1088), 3);
    add_background_object(create_aquabrick4_707(3576, 864), 3);
    add_background_object(create_aquabrick14_693(4016, 864), 3);
    add_background_object(create_aquabrick1_676(4096, 800), 3);
    add_background_object(create_aquabrick11_688(4032, 800), 3);
    add_background_object(create_aquabrick14_693(4016, 800), 3);
    add_background_object(create_aquabrick2_706(4096, 784), 3);
    add_background_object(create_aquabrick2_706(4032, 784), 3);
    add_background_object(create_aquabrick13_712(4016, 784), 3);
    add_background_object(create_aquabrick5_682(3200, 368), 3);
    add_background_object(create_aquabrick5_682(3200, 496), 3);
    add_background_object(create_aquabrick4_707(3320, 368), 3);
    add_background_object(create_aquabrick4_707(3320, 560), 3);
    add_background_object(create_aquabrick4_707(3320, 432), 3);
    add_background_object(create_aquabrick4_707(3320, 496), 3);
    add_background_object(create_aquabrick1_676(3328, 368), 3);
    add_background_object(create_aquabrick3_691(3136, 176), 3);
    add_background_object(create_aquabrick3_691(3008, 176), 3);
    add_background_object(create_aquabrick3_691(3392, 176), 3);
    add_background_object(create_aquabrick3_691(3264, 176), 3);
    add_background_object(create_aquabrick3_691(2880, 176), 3);
    add_background_object(create_aquabrick3_691(3136, 112), 3);
    add_background_object(create_aquabrick3_691(3008, 112), 3);
    add_background_object(create_aquabrick3_691(3392, 112), 3);
    add_background_object(create_aquabrick3_691(3264, 112), 3);
    add_background_object(create_aquabrick3_691(3520, 304), 3);
    add_background_object(create_aquabrick3_691(3520, 240), 3);
    add_background_object(create_aquabrick1_676(3584, 368), 3);
    add_background_object(create_aquabrick1_676(3520, 368), 3);
    add_background_object(create_aquabrick3_691(3520, 176), 3);
    add_background_object(create_aquabrick3_691(3520, 112), 3);
    add_background_object(create_aquaplant1_670(2992, 944), 3);
    add_background_object(create_aquaplant2_694(3216, 816), 3);
    add_background_object(create_aquaplant1_670(3264, 848), 3);
    add_background_object(create_aquaplant1_670(992, 880), 3);
    add_background_object(create_aquaplant2_694(928, 848), 3);
    add_background_object(create_lightray2_666(920, 848), 3);
    add_background_object(create_aquaplant1_670(32, 880), 3);
    add_background_object(create_aquaplant1_670(256, 880), 3);
    add_background_object(create_aquabrick2_706(3768, 840), 3);
    add_background_object(create_aquabrick2_706(3832, 840), 3);
    add_background_object(create_aquabrick13_712(3752, 840), 3);
    add_background_object(create_aquabrick1_676(3832, 856), 3);
    add_background_object(create_aquabrick11_688(3768, 856), 3);
    add_background_object(create_aquabrick6_709(3896, 840), 3);
    add_background_object(create_aquabrick16_684(3888, 856), 3);
    add_background_object(create_aquabrick15_685(3752, 856), 3);
    add_background_object(create_aquabrick1_676(4096, 560), 3);
    add_background_object(create_aquabrick21_683(4288, 432), 3);
    add_background_object(create_aquabrick13_712(4080, 544), 3);
    add_background_object(create_aquabrick15_685(4080, 560), 3);
    add_background_object(create_aquabrick14_693(4272, 432), 3);
    add_background_object(create_aquabrick14_693(4272, 496), 3);
    add_background_object(create_aquabrick2_706(4224, 544), 3);
    add_background_object(create_aquabrick21_683(4288, 368), 3);
    add_background_object(create_aquabrick14_693(4272, 368), 3);
    add_background_object(create_aquabrick3_691(3520, 48), 3);
    add_background_object(create_aquabrick3_691(3008, -16), 3);
    add_background_object(create_aquabrick3_691(3136, 48), 3);
    add_background_object(create_aquabrick3_691(3008, 48), 3);
    add_background_object(create_aquabrick3_691(3392, 48), 3);
    add_background_object(create_aquabrick3_691(3264, 48), 3);
    add_background_object(create_aquabrick3_691(2624, -16), 3);
    add_background_object(create_aquabrick3_691(2496, -16), 3);
    add_background_object(create_aquabrick3_691(2880, -16), 3);
    add_background_object(create_aquabrick3_691(2752, -16), 3);
    add_background_object(create_aquabrick3_691(4160, 1152), 3);
    add_background_object(create_aquabrick3_691(4160, 1216), 3);
    add_background_object(create_aquabrick3_691(4160, 1280), 3);
    add_background_object(create_aquabrick3_691(4160, 1088), 3);
    add_background_object(create_aquabrick3_691(4544, 1152), 3);
    add_background_object(create_aquabrick3_691(4672, 1152), 3);
    add_background_object(create_aquabrick3_691(4800, 1152), 3);
    add_background_object(create_aquabrick1_676(4800, 560), 3);
    add_background_object(create_aquabrick3_691(768, 496), 3);
    add_background_object(create_aquabrick2_706(3736, 568), 3);
    add_background_object(create_aquabrick2_706(3864, 568), 3);
    add_background_object(create_aquabrick13_712(3720, 568), 3);
    add_background_object(create_aquabrick1_676(3800, 584), 3);
    add_background_object(create_aquabrick11_688(3736, 584), 3);
    add_background_object(create_aquabrick6_709(3928, 568), 3);
    add_background_object(create_aquabrick15_685(3720, 584), 3);
    add_background_object(create_aquabrick2_706(3800, 568), 3);
    add_background_object(create_aquabrickarch1_669(3344, 592), 3);
    add_background_object(create_aquabrick1_676(4032, 832), 3);
    add_background_object(create_aquabrick11_688(4096, 832), 3);
    add_background_object(create_aquabrick1_676(4096, 864), 3);
    add_background_object(create_aquabrick11_688(4032, 864), 3);
    add_background_object(create_aquabrick1_676(4032, 896), 3);
    add_background_object(create_aquabrick11_688(4096, 896), 3);
    add_background_object(create_aquabrick1_676(4096, 928), 3);
    add_background_object(create_aquabrick11_688(4032, 928), 3);
    add_background_object(create_aquabrick4_707(4152, 800), 3);
    add_background_object(create_aquabrick1_676(4160, 896), 3);
    add_background_object(create_aquabrick11_688(4224, 896), 3);
    add_background_object(create_aquabrick1_676(4224, 928), 3);
    add_background_object(create_aquabrick11_688(4160, 928), 3);
    add_background_object(create_aquabrick1_676(4224, 864), 3);
    add_background_object(create_aquabrick11_688(4160, 864), 3);
    add_background_object(create_aquabrick2_706(4160, 848), 3);
    add_background_object(create_aquabrick2_706(4224, 848), 3);
    add_background_object(create_aquabrick3_691(4288, 960), 3);
    add_background_object(create_aquabrick3_691(4288, 1024), 3);
    add_background_object(create_aquabrick3_691(4288, 1152), 3);
    add_background_object(create_aquabrick3_691(4288, 1216), 3);
    add_background_object(create_aquabrick3_691(4288, 1280), 3);
    add_background_object(create_aquabrick3_691(4288, 1088), 3);
    add_background_object(create_aquabrick1_676(4288, 896), 3);
    add_background_object(create_aquabrick11_688(4352, 896), 3);
    add_background_object(create_aquabrick1_676(4352, 928), 3);
    add_background_object(create_aquabrick11_688(4288, 928), 3);
    add_background_object(create_aquabrick1_676(4352, 864), 3);
    add_background_object(create_aquabrick11_688(4288, 864), 3);
    add_background_object(create_aquabrick2_706(4288, 848), 3);
    add_background_object(create_aquabrick2_706(4352, 848), 3);
    add_background_object(create_aquabrick3_691(4416, 960), 3);
    add_background_object(create_aquabrick3_691(4416, 1024), 3);
    add_background_object(create_aquabrick3_691(4416, 1152), 3);
    add_background_object(create_aquabrick3_691(4416, 1216), 3);
    add_background_object(create_aquabrick3_691(4416, 1280), 3);
    add_background_object(create_aquabrick3_691(4416, 1088), 3);
    add_background_object(create_aquabrick1_676(4416, 896), 3);
    add_background_object(create_aquabrick11_688(4480, 896), 3);
    add_background_object(create_aquabrick1_676(4480, 928), 3);
    add_background_object(create_aquabrick11_688(4416, 928), 3);
    add_background_object(create_aquabrick1_676(4480, 864), 3);
    add_background_object(create_aquabrick11_688(4416, 864), 3);
    add_background_object(create_aquabrick2_706(4416, 848), 3);
    add_background_object(create_aquabrick2_706(4480, 848), 3);
    add_background_object(create_aquabrick2_706(4344, 712), 3);
    add_background_object(create_aquabrick2_706(4536, 712), 3);
    add_background_object(create_aquabrick13_712(4328, 712), 3);
    add_background_object(create_aquabrick1_676(4536, 728), 3);
    add_background_object(create_aquabrick11_688(4344, 728), 3);
    add_background_object(create_aquabrick6_709(4600, 712), 3);
    add_background_object(create_aquabrick16_684(4592, 728), 3);
    add_background_object(create_aquabrick15_685(4328, 728), 3);
    add_background_object(create_aquabrick2_706(4408, 712), 3);
    add_background_object(create_aquabrick1_676(4408, 728), 3);
    add_background_object(create_aquabrick2_706(4472, 712), 3);
    add_background_object(create_aquabrick11_688(4472, 728), 3);
    add_background_object(create_aquabrick1_676(4928, 592), 3);
    add_background_object(create_aquabrick1_676(4928, 656), 3);
    add_background_object(create_aquabrick1_676(4928, 720), 3);
    add_background_object(create_aquabrick11_688(4928, 624), 3);
    add_background_object(create_aquabrick11_688(4928, 688), 3);
    add_background_object(create_aquabrick4_707(4984, 624), 3);
    add_background_object(create_aquabrick4_707(4984, 688), 3);
    add_background_object(create_aquabrick1_676(4928, 752), 3);
    add_background_object(create_atsewerpipe1_671(6208, 560), 3);
    add_background_object(create_atsewerpipe2_717(4736, 784), 3);
    add_background_object(create_atsewerpipe4_700(4832, 784), 3);
    add_background_object(create_atsewerpipe3_718(4768, 800), 3);
    add_background_object(create_aquabrick16_684(4984, 752), 3);
    add_background_object(create_aquabrick1_676(4864, 752), 3);
    add_background_object(create_aquabrick1_676(4800, 752), 3);
    add_background_object(create_aquabrick1_676(4736, 752), 3);
    add_background_object(create_aquabrick2_706(4800, 736), 3);
    add_background_object(create_aquabrick2_706(4736, 736), 3);
    add_background_object(create_aquabrick13_712(4720, 736), 3);
    add_background_object(create_aquabrick15_685(4720, 752), 3);
    add_background_object(create_aquabrick6_709(4544, 848), 3);
    add_background_object(create_aquabrick14_693(4912, 624), 3);
    add_background_object(create_aquabrick14_693(4912, 688), 3);
    add_background_object(create_aquabrick14_693(4912, 560), 3);
    add_background_object(create_aquabrick1_676(4928, 560), 3);
    add_background_object(create_aquabrick1_676(4864, 560), 3);
    add_background_object(create_aquabrick4_707(4984, 560), 3);
    add_background_object(create_aquabrick2_706(4864, 736), 3);
    add_background_object(create_aquabrick3_691(4928, 960), 3);
    add_background_object(create_aquabrick2_706(4992, 880), 3);
    add_background_object(create_aquabrick2_706(4928, 880), 3);
    add_background_object(create_aquabrick1_676(4928, 896), 3);
    add_background_object(create_aquabrick3_691(4928, 1024), 3);
    add_background_object(create_aquabrick11_688(7552, 1136), 3);
    add_background_object(create_aquabrick3_691(4928, 1152), 3);
    add_background_object(create_atladder_708(4040, 544), 3);
    add_background_object(create_atladder_708(4040, 576), 3);
    add_background_object(create_atladder_708(4040, 608), 3);
    add_background_object(create_atladder_708(4040, 640), 3);
    add_background_object(create_atladder_708(4040, 672), 3);
    add_background_object(create_aquabrick3_691(3648, 304), 3);
    add_background_object(create_aquabrick3_691(3648, 240), 3);
    add_background_object(create_aquabrick1_676(3712, 368), 3);
    add_background_object(create_aquabrick1_676(3648, 368), 3);
    add_background_object(create_aquabrick3_691(3648, 176), 3);
    add_background_object(create_aquabrick3_691(3776, 304), 3);
    add_background_object(create_aquabrick3_691(3776, 240), 3);
    add_background_object(create_aquabrick1_676(3840, 368), 3);
    add_background_object(create_aquabrick1_676(3776, 368), 3);
    add_background_object(create_aquabrick3_691(3776, 176), 3);
    add_background_object(create_aquabrick3_691(3904, 304), 3);
    add_background_object(create_aquabrick3_691(3904, 240), 3);
    add_background_object(create_aquabrick1_676(3968, 368), 3);
    add_background_object(create_aquabrick1_676(3904, 368), 3);
    add_background_object(create_aquabrick3_691(3904, 176), 3);
    add_background_object(create_aquabrick3_691(4160, 304), 3);
    add_background_object(create_aquabrick3_691(4160, 240), 3);
    add_background_object(create_aquabrick1_676(4224, 368), 3);
    add_background_object(create_aquabrick1_676(4160, 368), 3);
    add_background_object(create_aquabrick3_691(4160, 176), 3);
    add_background_object(create_aquabrick3_691(4288, 304), 3);
    add_background_object(create_aquabrick3_691(4288, 240), 3);
    add_background_object(create_aquabrick3_691(4288, 176), 3);
    add_background_object(create_aquabrickarch1_669(4224, 480), 3);
    add_background_object(create_aquabrickarch3_705(4096, 400), 3);
    add_background_object(create_aquabrickarch2_690(4080, 592), 3);
    add_background_object(create_aquabrickarch1_669(4080, 720), 3);
    add_background_object(create_lightray1_659(3576, 400), 3);
    add_background_object(create_lightray2_666(3528, 496), 3);
    add_background_object(create_lightray1_659(3560, 432), 3);
    add_background_object(create_lightray2_666(3688, 432), 3);
    add_background_object(create_lightray1_659(3704, 400), 3);
    add_background_object(create_lightray1_659(3544, 464), 3);
    add_background_object(create_aquaplant2_694(4872, 672), 3);
    add_background_object(create_aquaplant1_670(4728, 704), 3);
    add_background_object(create_aquabrick11_688(4544, 928), 3);
    add_background_object(create_aquabrick1_676(4608, 928), 3);
    add_background_object(create_aquabrick1_676(4736, 928), 3);
    add_background_object(create_aquabrick11_688(4672, 928), 3);
    add_background_object(create_aquabrick11_688(4800, 928), 3);
    add_background_object(create_aquabrick1_676(4864, 928), 3);
    add_background_object(create_aquabrick11_688(4928, 928), 3);
    add_background_object(create_aquabrick1_676(4992, 928), 3);
    add_background_object(create_aquabrick16_684(4536, 864), 3);
    add_background_object(create_aquabrick2_706(4544, 880), 3);
    add_background_object(create_aquabrick6_709(4736, 880), 3);
    add_background_object(create_aquabrick16_684(4728, 896), 3);
    add_background_object(create_aquabrick13_712(4784, 880), 3);
    add_background_object(create_aquabrick15_685(4784, 896), 3);
    add_background_object(create_aquabrick2_706(4736, 912), 3);
    add_background_object(create_aquabrick16_684(3920, 616), 3);
    add_background_object(create_aquabrick21_683(6208, 704), 3);
    add_background_object(create_aquabrick14_693(6192, 736), 3);
    add_background_object(create_atsewerpipe3_718(4800, 800), 3);
    add_background_object(create_atsewerpipe2_717(3752, 616), 3);
    add_background_object(create_atsewerpipe3_718(3784, 632), 3);
    add_background_object(create_atsewerpipe7_719(3816, 632), 3);
    add_background_object(create_atsewerpipe6_672(3832, 664), 3);
    add_background_object(create_atsewerpipe6_672(3832, 696), 3);
    add_background_object(create_atsewerpipe6_672(3832, 728), 3);
    add_background_object(create_atsewerpipe6_672(3832, 792), 3);
    add_background_object(create_atsewerpipe4_700(3912, 648), 3);
    add_background_object(create_atsewerpipe5_720(3880, 664), 3);
    add_background_object(create_atsewerpipe6_672(3880, 696), 3);
    add_background_object(create_atsewerpipe6_672(3880, 728), 3);
    add_background_object(create_atsewerpipe6_672(3880, 792), 3);
    add_background_object(create_atsewerpipe5_720(4496, 816), 3);
    add_background_object(create_atsewerpipe3_718(4528, 816), 3);
    add_background_object(create_atsewerpipe7_719(4560, 816), 3);
    add_background_object(create_atsewerpipe6_672(4576, 848), 3);
    add_background_object(create_atsewerpipe4_700(4216, 768), 3);
    add_background_object(create_atsewerpipe3_718(4176, 784), 3);
    add_background_object(create_atsewerpipe5_720(4232, 736), 3);
    add_background_object(create_atsewerpipe3_718(4264, 736), 3);
    add_background_object(create_atsewerpipe3_718(4296, 736), 3);
    add_background_object(create_atsewerpipe3_718(4184, 784), 3);
    add_background_object(create_aquabrick13_712(6192, 688), 3);
    add_background_object(create_aquabrick2_706(6208, 688), 3);
    add_background_object(create_aquabrick2_706(6272, 688), 3);
    add_background_object(create_atsewerpipe1_671(6336, 560), 3);
    add_background_object(create_aquabrick2_706(6336, 688), 3);
    add_background_object(create_aquabrick2_706(6400, 688), 3);
    add_background_object(create_aquabrick1_676(6400, 560), 3);
    add_background_object(create_aquabrick1_676(6336, 560), 3);
    add_background_object(create_aquabrick1_676(6272, 560), 3);
    add_background_object(create_aquabrick1_676(6208, 560), 3);
    add_background_object(create_aquabrick15_685(6192, 560), 3);
    add_background_object(create_aquabrick21_683(6208, 432), 3);
    add_background_object(create_aquabrick14_693(6192, 496), 3);
    add_background_object(create_aquabrick14_693(6192, 432), 3);
    add_background_object(create_aquabrick1_676(6400, 704), 3);
    add_background_object(create_aquabrick1_676(6336, 704), 3);
    add_background_object(create_aquabrick1_676(6272, 704), 3);
    add_background_object(create_aquabrick1_676(6208, 704), 3);
    add_background_object(create_aquabrick14_693(6192, 704), 3);
    add_background_object(create_aquabrickslope1_697(5952, 864), 3);
    add_background_object(create_aquabrickslope2_698(6080, 896), 3);
    add_background_object(create_aquabrick3_691(4672, 496), 3);
    add_background_object(create_aquabrick3_691(4672, 432), 3);
    add_background_object(create_aquabrick3_691(4800, 496), 3);
    add_background_object(create_aquabrick3_691(4800, 432), 3);
    add_background_object(create_aquabrick4_707(4984, 432), 3);
    add_background_object(create_aquabrick4_707(4984, 496), 3);
    add_background_object(create_aquabrick1_676(4992, 400), 3);
    add_background_object(create_aquabrick1_676(6016, 400), 3);
    add_background_object(create_aquabrick1_676(6144, 400), 3);
    add_background_object(create_aquabrick21_683(6208, 304), 3);
    add_background_object(create_aquabrick3_691(6336, 304), 3);
    add_background_object(create_aquabrick3_691(6208, 304), 3);
    add_background_object(create_aquabrick3_691(6080, 304), 3);
    add_background_object(create_aquabrick11_688(6144, 368), 3);
    add_background_object(create_aquabrick1_676(6080, 368), 3);
    add_background_object(create_aquabrick11_688(6080, 400), 3);
    add_background_object(create_aquabrick11_688(6016, 368), 3);
    add_background_object(create_aquabrick11_688(5952, 400), 3);
    add_background_object(create_aquabrick11_688(4992, 368), 3);
    add_background_object(create_aquabrick1_676(5952, 368), 3);
    add_background_object(create_aquabrick5_682(4864, 304), 3);
    add_background_object(create_aquabrick3_691(5952, 304), 3);
    add_background_object(create_aquabrick3_691(4928, 304), 3);
    add_background_object(create_aquabrick3_691(4416, 368), 3);
    add_background_object(create_aquabrick3_691(4416, 304), 3);
    add_background_object(create_aquabrick3_691(4544, 368), 3);
    add_background_object(create_aquabrick3_691(4544, 304), 3);
    add_background_object(create_aquabrick3_691(4672, 368), 3);
    add_background_object(create_aquabrick3_691(4672, 304), 3);
    add_background_object(create_aquabrick3_691(4736, 368), 3);
    add_background_object(create_aquabrick3_691(4736, 304), 3);
    add_background_object(create_aquabrick3_691(4416, 176), 3);
    add_background_object(create_aquabrick3_691(4544, 176), 3);
    add_background_object(create_aquabrick3_691(4672, 176), 3);
    add_background_object(create_aquabrick3_691(4800, 176), 3);
    add_background_object(create_aquabrick3_691(4928, 176), 3);
    add_background_object(create_aquabrick3_691(5952, 176), 3);
    add_background_object(create_aquabrick3_691(6080, 176), 3);
    add_background_object(create_aquabrick3_691(6208, 176), 3);
    add_background_object(create_aquabrick3_691(6336, 176), 3);
    add_background_object(create_atsewerpipe1_671(6336, 800), 3);
    add_background_object(create_aquabrick2_706(6208, 928), 3);
    add_background_object(create_aquabrick2_706(6272, 928), 3);
    add_background_object(create_aquabrick2_706(6336, 928), 3);
    add_background_object(create_aquabrick2_706(6400, 928), 3);
    add_background_object(create_aquabrick1_676(6400, 944), 3);
    add_background_object(create_aquabrick1_676(6272, 944), 3);
    add_background_object(create_aquabrick1_676(4992, 896), 3);
    add_background_object(create_aquabrick11_688(6336, 944), 3);
    add_background_object(create_aquabrick3_691(5952, 944), 3);
    add_background_object(create_aquabrick3_691(5952, 1008), 3);
    add_background_object(create_aquabrick3_691(5952, 1072), 3);
    add_background_object(create_aquabrick3_691(6080, 1008), 3);
    add_background_object(create_aquabrick3_691(6080, 1072), 3);
    add_background_object(create_aquabrick3_691(6208, 976), 3);
    add_background_object(create_aquabrick3_691(6208, 1040), 3);
    add_background_object(create_aquabrick3_691(6208, 1104), 3);
    add_background_object(create_aquabrick3_691(6080, 1136), 3);
    add_background_object(create_aquabrick3_691(5952, 1136), 3);
    add_background_object(create_aquabrick3_691(4544, 1088), 3);
    add_background_object(create_aquabrick3_691(4672, 1088), 3);
    add_background_object(create_aquabrick3_691(4800, 1088), 3);
    add_background_object(create_aquabrick3_691(4928, 1088), 3);
    add_background_object(create_aquabrick6_709(6464, 688), 3);
    add_background_object(create_aquabrick4_707(6456, 704), 3);
    add_background_object(create_aquabrick4_707(6456, 736), 3);
    add_background_object(create_aquabrick16_684(6456, 560), 3);
    add_background_object(create_aquabrick4_707(6456, 496), 3);
    add_background_object(create_aquabrick4_707(6456, 432), 3);
    add_background_object(create_aquabrick3_691(6464, 304), 3);
    add_background_object(create_aquabrick3_691(6464, 176), 3);
    add_background_object(create_aquabrick3_691(4416, 240), 3);
    add_background_object(create_aquabrick3_691(4544, 240), 3);
    add_background_object(create_aquabrick3_691(4672, 240), 3);
    add_background_object(create_aquabrick3_691(4800, 240), 3);
    add_background_object(create_aquabrick3_691(4928, 240), 3);
    add_background_object(create_aquabrick3_691(5952, 240), 3);
    add_background_object(create_aquabrick3_691(6080, 240), 3);
    add_background_object(create_aquabrick3_691(6208, 240), 3);
    add_background_object(create_aquabrick3_691(6336, 240), 3);
    add_background_object(create_aquabrick3_691(6464, 240), 3);
    add_background_object(create_aquabrick3_691(6592, 304), 3);
    add_background_object(create_aquabrick3_691(6592, 176), 3);
    add_background_object(create_aquabrick3_691(6592, 240), 3);
    add_background_object(create_aquabrick3_691(6720, 176), 3);
    add_background_object(create_aquabrick3_691(6720, 240), 3);
    add_background_object(create_aquabrick1_676(5056, 928), 3);
    add_background_object(create_aquabrick6_709(5056, 880), 3);
    add_background_object(create_aquabrick16_684(5048, 896), 3);
    add_background_object(create_aquabrick2_706(5056, 912), 3);
    add_background_object(create_aquabrick11_688(5120, 928), 3);
    add_background_object(create_aquabrick2_706(5120, 912), 3);
    add_background_object(create_aquabrick3_691(5056, 960), 3);
    add_background_object(create_aquabrick3_691(5056, 1024), 3);
    add_background_object(create_aquabrick3_691(5056, 1152), 3);
    add_background_object(create_aquabrick3_691(5184, 960), 3);
    add_background_object(create_aquabrick3_691(5184, 1024), 3);
    add_background_object(create_aquabrick3_691(5184, 1152), 3);
    add_background_object(create_aquabrick3_691(5056, 1088), 3);
    add_background_object(create_aquabrick3_691(5184, 1088), 3);
    add_background_object(create_aquabrick3_691(5312, 960), 3);
    add_background_object(create_aquabrick3_691(5312, 1024), 3);
    add_background_object(create_aquabrick3_691(5312, 1152), 3);
    add_background_object(create_aquabrick3_691(5312, 1088), 3);
    add_background_object(create_aquabrick11_688(5248, 928), 3);
    add_background_object(create_aquabrick21_683(5312, 832), 3);
    add_background_object(create_aquabrick21_683(5312, 704), 3);
    add_background_object(create_aquabrick14_693(5296, 672), 3);
    add_background_object(create_aquabrick14_693(5296, 800), 3);
    add_background_object(create_aquabrick14_693(5296, 864), 3);
    add_background_object(create_aquabrick2_706(5248, 912), 3);
    add_background_object(create_aquabrick1_676(5056, 400), 3);
    add_background_object(create_aquabrick1_676(5056, 368), 3);
    add_background_object(create_aquabrick3_691(5056, 304), 3);
    add_background_object(create_aquabrick3_691(5056, 176), 3);
    add_background_object(create_aquabrick3_691(5056, 240), 3);
    add_background_object(create_aquabrick1_676(5120, 400), 3);
    add_background_object(create_aquabrick11_688(5120, 368), 3);
    add_background_object(create_aquabrick21_683(5312, 576), 3);
    add_background_object(create_aquabrick14_693(5296, 544), 3);
    add_background_object(create_aquabrick14_693(5296, 608), 3);
    add_background_object(create_aquabrick13_712(5264, 744), 3);
    add_background_object(create_aquabrickslope1_697(5312, 528), 3);
    add_background_object(create_aquabrickslope2_698(5440, 560), 3);
    add_background_object(create_aquabrick13_712(5296, 528), 3);
    add_background_object(create_aquabrick5_682(5440, 640), 3);
    add_background_object(create_aquabrickslope1_697(5312, 416), 3);
    add_background_object(create_aquabrickslope2_698(5440, 448), 3);
    add_background_object(create_aquabrick1_676(5184, 400), 3);
    add_background_object(create_aquabrick1_676(5184, 368), 3);
    add_background_object(create_aquabrick3_691(5184, 304), 3);
    add_background_object(create_aquabrick3_691(5184, 176), 3);
    add_background_object(create_aquabrick3_691(5184, 240), 3);
    add_background_object(create_aquabrick1_676(5248, 400), 3);
    add_background_object(create_aquabrick11_688(5248, 368), 3);
    add_background_object(create_aquabrick1_676(5312, 400), 3);
    add_background_object(create_aquabrick1_676(5312, 368), 3);
    add_background_object(create_aquabrick3_691(5312, 304), 3);
    add_background_object(create_aquabrick3_691(5312, 176), 3);
    add_background_object(create_aquabrick3_691(5312, 240), 3);
    add_background_object(create_aquabrick1_676(5376, 400), 3);
    add_background_object(create_aquabrick11_688(5376, 368), 3);
    add_background_object(create_aquabrick3_691(5440, 304), 3);
    add_background_object(create_aquabrick3_691(5440, 176), 3);
    add_background_object(create_aquabrick3_691(5440, 240), 3);
    add_background_object(create_atsewerpipe6_672(5304, 464), 3);
    add_background_object(create_atsewerpipe6_672(5304, 496), 3);
    add_background_object(create_aquabrick11_688(5824, 880), 3);
    add_background_object(create_aquabrick2_706(5824, 864), 3);
    add_background_object(create_aquabrick2_706(5888, 864), 3);
    add_background_object(create_aquabrick1_676(5888, 880), 3);
    add_background_object(create_aquabrick3_691(5824, 912), 3);
    add_background_object(create_aquabrick3_691(5824, 976), 3);
    add_background_object(create_aquabrick3_691(5824, 1040), 3);
    add_background_object(create_aquabrick4_707(5560, 672), 3);
    add_background_object(create_aquabrick1_676(5440, 400), 3);
    add_background_object(create_aquabrick1_676(5440, 368), 3);
    add_background_object(create_aquabrick1_676(5504, 368), 3);
    add_background_object(create_aquabrick11_688(5504, 400), 3);
    add_background_object(create_aquabrick16_684(5560, 496), 3);
    add_background_object(create_aquabrick4_707(5560, 432), 3);
    add_background_object(create_aquabrick1_676(5888, 400), 3);
    add_background_object(create_aquabrick11_688(5888, 368), 3);
    add_background_object(create_aquabrick11_688(5824, 400), 3);
    add_background_object(create_aquabrick1_676(5824, 368), 3);
    add_background_object(create_aquabrick3_691(5824, 304), 3);
    add_background_object(create_aquabrick3_691(5824, 176), 3);
    add_background_object(create_aquabrick3_691(5824, 240), 3);
    add_background_object(create_aquabrick1_676(5760, 400), 3);
    add_background_object(create_aquabrick11_688(5760, 368), 3);
    add_background_object(create_aquabrick11_688(5696, 400), 3);
    add_background_object(create_aquabrick1_676(5696, 368), 3);
    add_background_object(create_aquabrick3_691(5696, 304), 3);
    add_background_object(create_aquabrick3_691(5696, 176), 3);
    add_background_object(create_aquabrick3_691(5696, 240), 3);
    add_background_object(create_aquabrick1_676(5632, 400), 3);
    add_background_object(create_aquabrick11_688(5632, 368), 3);
    add_background_object(create_aquabrick11_688(5568, 400), 3);
    add_background_object(create_aquabrick1_676(5568, 368), 3);
    add_background_object(create_aquabrick3_691(5568, 304), 3);
    add_background_object(create_aquabrick3_691(5568, 176), 3);
    add_background_object(create_aquabrick3_691(5568, 240), 3);
    add_background_object(create_aquabrick3_691(5824, 1104), 3);
    add_background_object(create_aquabrick3_691(5824, 1168), 3);
    add_background_object(create_aquabrick11_688(5696, 880), 3);
    add_background_object(create_aquabrick2_706(5696, 864), 3);
    add_background_object(create_aquabrick9_721(5568, 600), 3);
    add_background_object(create_aquabrick2_706(5760, 864), 3);
    add_background_object(create_aquabrick1_676(5760, 880), 3);
    add_background_object(create_aquabrick3_691(5568, 1120), 3);
    add_background_object(create_aquabrick3_691(5440, 1120), 3);
    add_background_object(create_aquabrick3_691(5568, 1184), 3);
    add_background_object(create_aquabrick3_691(5440, 1184), 3);
    add_background_object(create_aquabrick15_685(5296, 432), 3);
    add_background_object(create_aquabrick5_682(5440, 768), 3);
    add_background_object(create_aquabrick4_707(5560, 736), 3);
    add_background_object(create_aquabrick4_707(5560, 800), 3);
    add_background_object(create_aquabrick5_682(5440, 896), 3);
    add_background_object(create_aquabrick5_682(5440, 992), 3);
    add_background_object(create_aquabrick3_691(5312, 1216), 3);
    add_background_object(create_aquabrick3_691(5440, 1248), 3);
    add_background_object(create_aquabrick3_691(5568, 1248), 3);
    add_background_object(create_aquabrick1_676(5568, 1088), 3);
    add_background_object(create_aquabrick1_676(5632, 1088), 3);
    add_background_object(create_aquabrick4_707(5560, 864), 3);
    add_background_object(create_aquabrick4_707(5560, 928), 3);
    add_background_object(create_aquabrick4_707(5560, 992), 3);
    add_background_object(create_aquabrick16_684(5560, 1056), 3);
    add_background_object(create_aquabrick2_706(5568, 1072), 3);
    add_background_object(create_aquabrick2_706(5632, 1072), 3);
    add_background_object(create_aquabrick13_712(5680, 864), 3);
    add_background_object(create_aquabrick14_693(5680, 880), 3);
    add_background_object(create_atsewerpipe3_718(4616, 720), 3);
    add_background_object(create_atsewerpipe4_700(4648, 704), 3);
    add_background_object(create_atsewerpipe6_672(4664, 672), 3);
    add_background_object(create_atsewerpipe6_672(4664, 640), 3);
    add_background_object(create_atsewerpipe5_720(4664, 608), 3);
    add_background_object(create_atsewerpipe3_718(4696, 608), 3);
    add_background_object(create_atsewerpipe4_700(4728, 592), 3);
    add_background_object(create_atsewerpipe2_717(4624, 736), 3);
    add_background_object(create_atsewerpipe3_718(4656, 752), 3);
    add_background_object(create_atsewerpipe3_718(4688, 752), 3);
    add_background_object(create_atsewerpipe6_672(4624, 688), 3);
    add_background_object(create_atsewerpipe6_672(4624, 672), 3);
    add_background_object(create_atsewerpipe7_719(4608, 640), 3);
    add_background_object(create_atsewerpipe3_718(4576, 640), 3);
    add_background_object(create_atsewerpipe3_718(4544, 640), 3);
    add_background_object(create_atsewerpipe2_717(4512, 624), 3);
    add_background_object(create_atsewerpipe2_717(4408, 760), 3);
    add_background_object(create_atsewerpipe3_718(4440, 776), 3);
    add_background_object(create_atsewerpipe3_718(4472, 776), 3);
    add_background_object(create_atsewerpipe4_700(4504, 760), 3);
    add_background_object(create_aquabrick9_721(5592, 608), 3);
    add_background_object(create_atsewerpipe3_718(5584, 504), 3);
    add_background_object(create_atsewerpipe3_718(5616, 504), 3);
    add_background_object(create_atsewerpipe4_700(5648, 488), 3);
    add_background_object(create_atsewerpipe6_672(5664, 456), 3);
    add_background_object(create_atsewerpipe2_717(5632, 432), 3);
    add_background_object(create_atsewerpipe3_718(5680, 448), 3);
    add_background_object(create_atsewerpipe3_718(5712, 448), 3);
    add_background_object(create_atsewerpipe3_718(5744, 448), 3);
    add_background_object(create_atsewerpipe4_700(5776, 432), 3);
    add_background_object(create_atsewerpipe3_718(6160, 704), 3);
    add_background_object(create_atsewerpipe3_718(6128, 704), 3);
    add_background_object(create_atsewerpipe2_717(6096, 688), 3);
    add_background_object(create_atsewerpipe6_672(6096, 656), 3);
    add_background_object(create_atsewerpipe6_672(6096, 624), 3);
    add_background_object(create_atsewerpipe6_672(6096, 592), 3);
    add_background_object(create_atsewerpipe6_672(6096, 560), 3);
    add_background_object(create_atsewerpipe7_719(6080, 528), 3);
    add_background_object(create_atsewerpipe3_718(6048, 528), 3);
    add_background_object(create_atsewerpipe2_717(5984, 512), 3);
    add_background_object(create_atsewerpipe6_672(5984, 480), 3);
    add_background_object(create_atsewerpipe6_672(5984, 448), 3);
    add_background_object(create_atsewerpipe3_718(6160, 568), 3);
    add_background_object(create_atsewerpipe3_718(6128, 568), 3);
    add_background_object(create_atsewerpipe3_718(6096, 568), 3);
    add_background_object(create_atsewerpipe3_718(6064, 568), 3);
    add_background_object(create_atsewerpipe2_717(6032, 552), 3);
    add_background_object(create_atsewerpipe6_672(6032, 520), 3);
    add_background_object(create_atsewerpipe3_718(6016, 528), 3);
    add_background_object(create_atsewerpipe5_720(6032, 488), 3);
    add_background_object(create_atsewerpipe3_718(6064, 488), 3);
    add_background_object(create_atsewerpipe3_718(6096, 488), 3);
    add_background_object(create_atsewerpipe4_700(6128, 472), 3);
    add_background_object(create_atsewerpipe6_672(6144, 440), 3);
    add_background_object(create_aquabrick3_691(512, 496), 3);
    add_background_object(create_aquabrick3_691(640, 496), 3);
    add_background_object(create_aquabrick3_691(384, 496), 3);
    add_background_object(create_aquabrick3_691(256, 496), 3);
    add_background_object(create_aquabrick3_691(768, 496), 3);
    add_background_object(create_aquabrick3_691(640, 432), 3);
    add_background_object(create_aquabrick3_691(768, 368), 3);
    add_background_object(create_atcolumn_704(6592, 432), 3);
    add_background_object(create_atcolumn_704(6592, 528), 3);
    add_background_object(create_atcolumn_704(6592, 624), 3);
    add_background_object(create_atcolumn_704(6592, 720), 3);
    add_background_object(create_atcolumn_704(6592, 816), 3);
    add_background_object(create_atcolumn_704(6592, 912), 3);
    add_background_object(create_atcolumn_704(6592, 1008), 3);
    add_background_object(create_atcolumn_704(6592, 1104), 3);
    add_background_object(create_atcolumn_704(6592, 1200), 3);
    add_background_object(create_atcolumn_704(6592, 1296), 3);
    add_background_object(create_aquabrick21_683(6912, 432), 3);
    add_background_object(create_aquabrick14_693(6896, 496), 3);
    add_background_object(create_aquabrick21_683(6784, 304), 3);
    add_background_object(create_aquabrick3_691(6848, 176), 3);
    add_background_object(create_aquabrick3_691(6848, 240), 3);
    add_background_object(create_aquabrick14_693(6896, 432), 3);
    add_background_object(create_aquabrick21_683(6784, 560), 3);
    add_background_object(create_aquabrick14_693(6768, 624), 3);
    add_background_object(create_aquabrick14_693(6768, 560), 3);
    add_background_object(create_aquabrick21_683(6784, 688), 3);
    add_background_object(create_aquabrick14_693(6768, 752), 3);
    add_background_object(create_aquabrick14_693(6768, 688), 3);
    add_background_object(create_aquabrick21_683(6784, 816), 3);
    add_background_object(create_aquabrick14_693(6768, 880), 3);
    add_background_object(create_aquabrick14_693(6768, 816), 3);
    add_background_object(create_aquabrick21_683(6784, 944), 3);
    add_background_object(create_aquabrick14_693(6768, 1008), 3);
    add_background_object(create_aquabrick14_693(6768, 944), 3);
    add_background_object(create_aquabrick5_682(6336, 976), 3);
    add_background_object(create_aquabrick3_691(6208, 1168), 3);
    add_background_object(create_aquabrick6_709(6464, 928), 3);
    add_background_object(create_aquabrick4_707(6456, 944), 3);
    add_background_object(create_aquabrick4_707(6456, 1008), 3);
    add_background_object(create_aquabrick4_707(6456, 1072), 3);
    add_background_object(create_aquabrick4_707(6456, 1136), 3);
    add_background_object(create_aquabrick1_676(6208, 800), 3);
    add_background_object(create_aquabrick15_685(6192, 800), 3);
    add_background_object(create_aquabrick1_676(6272, 800), 3);
    add_background_object(create_aquabrick1_676(6336, 800), 3);
    add_background_object(create_aquabrick1_676(6400, 800), 3);
    add_background_object(create_aquabrick16_684(6456, 800), 3);
    add_background_object(create_aquabrick1_676(6400, 1232), 3);
    add_background_object(create_aquabrick1_676(6336, 1232), 3);
    add_background_object(create_aquabrick1_676(6272, 1232), 3);
    add_background_object(create_aquabrick1_676(6208, 1232), 3);
    add_background_object(create_aquabrick4_707(6456, 1200), 3);
    add_background_object(create_aquabrick16_684(6456, 1232), 3);
    add_background_object(create_aquabrick21_683(6784, 1072), 3);
    add_background_object(create_aquabrick14_693(6768, 1072), 3);
    add_background_object(create_aquabrick5_682(6080, 1232), 3);
    add_background_object(create_aquabrick3_691(6080, 1168), 3);
    add_background_object(create_aquabrick3_691(5952, 1200), 3);
    add_background_object(create_aquabrick3_691(5824, 1232), 3);
    add_background_object(create_aquabrick3_691(5952, 1264), 3);
    add_background_object(create_aquabrick3_691(5952, 1328), 3);
    add_background_object(create_aquabrick3_691(5952, 1392), 3);
    add_background_object(create_aquabrick4_707(6200, 1264), 3);
    add_background_object(create_aquabrick4_707(6200, 1328), 3);
    add_background_object(create_aquabrick4_707(6200, 1392), 3);
    add_background_object(create_aquabrick2_706(6336, 1440), 3);
    add_background_object(create_aquabrick2_706(6272, 1440), 3);
    add_background_object(create_aquabrick2_706(6208, 1440), 3);
    add_background_object(create_aquabrick2_706(6400, 1440), 3);
    add_background_object(create_aquabrick6_709(6464, 1440), 3);
    add_background_object(create_aquabrick5_682(6848, 1072), 3);
    add_background_object(create_aquabrick5_682(6848, 944), 3);
    add_background_object(create_aquabrick5_682(6848, 816), 3);
    add_background_object(create_aquabrick5_682(6848, 688), 3);
    add_background_object(create_aquabrick3_691(6912, 368), 3);
    add_background_object(create_aquabrick3_691(6912, 624), 3);
    add_background_object(create_aquabrick3_691(6912, 560), 3);
    add_background_object(create_aquabrick3_691(7040, 496), 3);
    add_background_object(create_aquabrick3_691(7040, 432), 3);
    add_background_object(create_aquabrick3_691(7040, 368), 3);
    add_background_object(create_aquabrick3_691(7040, 624), 3);
    add_background_object(create_aquabrick3_691(7040, 560), 3);
    add_background_object(create_aquabrick3_691(6848, 304), 3);
    add_background_object(create_aquabrick3_691(6720, 304), 3);
    add_background_object(create_aquabrick13_712(6768, 544), 3);
    add_background_object(create_aquabrick2_706(6784, 544), 3);
    add_background_object(create_aquabrick2_706(6848, 544), 3);
    add_background_object(create_aquabrick1_676(7104, 1360), 3);
    add_background_object(create_aquabrick1_676(7040, 1360), 3);
    add_background_object(create_aquabrick13_712(7024, 1344), 3);
    add_background_object(create_aquabrick2_706(7040, 1344), 3);
    add_background_object(create_aquabrick15_685(7024, 1360), 3);
    add_background_object(create_aquabrick2_706(7104, 1344), 3);
    add_background_object(create_aquabrick4_707(6968, 1072), 3);
    add_background_object(create_aquabrick4_707(6968, 1008), 3);
    add_background_object(create_aquabrick4_707(6968, 944), 3);
    add_background_object(create_aquabrick4_707(6968, 880), 3);
    add_background_object(create_aquabrick4_707(6968, 816), 3);
    add_background_object(create_aquabrick4_707(6968, 752), 3);
    add_background_object(create_aquabrick4_707(6968, 688), 3);
    add_background_object(create_atcolumn_704(7136, 1104), 3);
    add_background_object(create_atcolumn_704(7136, 1200), 3);
    add_background_object(create_aquabrick3_691(7168, 1392), 3);
    add_background_object(create_aquabrick1_676(7232, 1360), 3);
    add_background_object(create_aquabrick1_676(7168, 1360), 3);
    add_background_object(create_aquabrick2_706(7168, 1344), 3);
    add_background_object(create_aquabrick2_706(7232, 1344), 3);
    add_background_object(create_atcolumn_704(7136, 1008), 3);
    add_background_object(create_atcolumn_704(7136, 912), 3);
    add_background_object(create_atcolumn_704(7136, 816), 3);
    add_background_object(create_atcolumn_704(7136, 720), 3);
    add_background_object(create_aquabrick1_676(6976, 688), 3);
    add_background_object(create_aquabrick3_691(7168, 496), 3);
    add_background_object(create_aquabrick3_691(7168, 432), 3);
    add_background_object(create_aquabrick3_691(7168, 368), 3);
    add_background_object(create_aquabrick3_691(7168, 624), 3);
    add_background_object(create_aquabrick3_691(7168, 560), 3);
    add_background_object(create_lightray1_659(5880, 432), 3);
    add_background_object(create_lightray1_659(5864, 464), 3);
    add_background_object(create_lightray2_666(5832, 528), 3);
    add_background_object(create_lightray1_659(5848, 496), 3);
    add_background_object(create_lightray1_659(6776, 432), 3);
    add_background_object(create_lightray1_659(6760, 464), 3);
    add_background_object(create_lightray2_666(6744, 496), 3);
    add_background_object(create_aquaplant1_670(6776, 512), 3);
    add_background_object(create_aquabrick3_691(5696, 1104), 3);
    add_background_object(create_aquabrick3_691(5696, 1168), 3);
    add_background_object(create_aquabrick3_691(5696, 1232), 3);
    add_background_object(create_aquabrick14_693(5680, 944), 3);
    add_background_object(create_aquabrick14_693(5680, 1008), 3);
    add_background_object(create_aquabrick1_676(6848, 1168), 3);
    add_background_object(create_aquabrick1_676(6784, 1168), 3);
    add_background_object(create_aquabrick1_676(6912, 1168), 3);
    add_background_object(create_aquabrick4_707(6968, 1136), 3);
    add_background_object(create_aquabrick14_693(6768, 1136), 3);
    add_background_object(create_lightray1_659(6048, 432), 3);
    add_background_object(create_lightray1_659(6032, 464), 3);
    add_background_object(create_lightray2_666(6016, 496), 3);
    add_background_object(create_aquabrick3_691(7296, 1392), 3);
    add_background_object(create_aquabrick14_693(7280, 1296), 3);
    add_background_object(create_aquabrick14_693(7280, 1232), 3);
    add_background_object(create_aquabrick3_691(7424, 1648), 3);
    add_background_object(create_aquabrick3_691(7424, 1584), 3);
    add_background_object(create_aquabrick14_693(7280, 1168), 3);
    add_background_object(create_aquabrick14_693(7280, 1104), 3);
    add_background_object(create_aquabrick1_676(7296, 688), 3);
    add_background_object(create_aquabrick1_676(7360, 688), 3);
    add_background_object(create_aquabrick3_691(7296, 496), 3);
    add_background_object(create_aquabrick3_691(7296, 432), 3);
    add_background_object(create_aquabrick3_691(7296, 368), 3);
    add_background_object(create_aquabrick3_691(7296, 624), 3);
    add_background_object(create_aquabrick3_691(7296, 560), 3);
    add_background_object(create_aquabrick3_691(6976, 176), 3);
    add_background_object(create_aquabrick3_691(6976, 240), 3);
    add_background_object(create_aquabrick3_691(6976, 304), 3);
    add_background_object(create_aquabrick3_691(7104, 176), 3);
    add_background_object(create_aquabrick3_691(7104, 240), 3);
    add_background_object(create_aquabrick3_691(7104, 304), 3);
    add_background_object(create_aquabrick3_691(7232, 176), 3);
    add_background_object(create_aquabrick3_691(7232, 240), 3);
    add_background_object(create_aquabrick3_691(7232, 304), 3);
    add_background_object(create_aquabrick3_691(3648, 112), 3);
    add_background_object(create_aquabrick3_691(3776, 112), 3);
    add_background_object(create_aquabrick3_691(3904, 112), 3);
    add_background_object(create_aquabrick3_691(4160, 112), 3);
    add_background_object(create_aquabrick3_691(4288, 112), 3);
    add_background_object(create_aquabrick3_691(4416, 112), 3);
    add_background_object(create_aquabrick3_691(4544, 112), 3);
    add_background_object(create_aquabrick3_691(4672, 112), 3);
    add_background_object(create_aquabrick3_691(4800, 112), 3);
    add_background_object(create_aquabrick3_691(4928, 112), 3);
    add_background_object(create_aquabrick3_691(5952, 112), 3);
    add_background_object(create_aquabrick3_691(6080, 112), 3);
    add_background_object(create_aquabrick3_691(6208, 112), 3);
    add_background_object(create_aquabrick3_691(6336, 112), 3);
    add_background_object(create_aquabrick3_691(6464, 112), 3);
    add_background_object(create_aquabrick3_691(6592, 112), 3);
    add_background_object(create_aquabrick3_691(6720, 112), 3);
    add_background_object(create_aquabrick3_691(5056, 112), 3);
    add_background_object(create_aquabrick3_691(5184, 112), 3);
    add_background_object(create_aquabrick3_691(5312, 112), 3);
    add_background_object(create_aquabrick3_691(5440, 112), 3);
    add_background_object(create_aquabrick3_691(5824, 112), 3);
    add_background_object(create_aquabrick3_691(5696, 112), 3);
    add_background_object(create_aquabrick3_691(5568, 112), 3);
    add_background_object(create_aquabrick3_691(6848, 112), 3);
    add_background_object(create_aquabrick3_691(6976, 112), 3);
    add_background_object(create_aquabrick3_691(7104, 112), 3);
    add_background_object(create_aquabrick3_691(7232, 112), 3);
    add_background_object(create_aquabrickslope1_697(7296, 1056), 3);
    add_background_object(create_aquabrickslope2_698(7424, 1088), 3);
    add_background_object(create_aquabrick14_693(7280, 1072), 3);
    add_background_object(create_aquabrick13_712(7280, 1056), 3);
    add_background_object(create_aquabrick3_691(7424, 1712), 3);
    add_background_object(create_aquabrick3_691(5824, 1296), 3);
    add_background_object(create_aquabrick3_691(5824, 1360), 3);
    add_background_object(create_aquabrick3_691(5696, 1296), 3);
    add_background_object(create_aquabrick3_691(7424, 1776), 3);
    add_background_object(create_aquabrick3_691(7424, 1808), 3);
    add_background_object(create_aquabrick3_691(4544, 1216), 3);
    add_background_object(create_aquabrick3_691(4672, 1216), 3);
    add_background_object(create_aquabrick3_691(4800, 1216), 3);
    add_background_object(create_aquabrick3_691(4928, 1216), 3);
    add_background_object(create_aquabrick3_691(5056, 1216), 3);
    add_background_object(create_aquabrick3_691(5184, 1216), 3);
    add_background_object(create_aquabrick3_691(4544, 1280), 3);
    add_background_object(create_aquabrick3_691(4672, 1280), 3);
    add_background_object(create_aquabrick3_691(4800, 1280), 3);
    add_background_object(create_aquabrick3_691(4928, 1280), 3);
    add_background_object(create_aquabrick3_691(5056, 1280), 3);
    add_background_object(create_aquabrick3_691(5184, 1280), 3);
    add_background_object(create_aquabrick3_691(5312, 1280), 3);
    add_background_object(create_aquabrick3_691(5440, 1312), 3);
    add_background_object(create_aquabrick3_691(5568, 1312), 3);
    add_background_object(create_aquabrick3_691(5696, 1360), 3);
    add_background_object(create_aquabrick2_706(7552, 1120), 3);
    add_background_object(create_aquabrick1_676(7616, 1136), 3);
    add_background_object(create_aquabrick2_706(7616, 1120), 3);
    add_background_object(create_aquabrick11_688(7680, 1136), 3);
    add_background_object(create_aquabrick2_706(7680, 1120), 3);
    add_background_object(create_aquabrick11_688(7808, 1136), 3);
    add_background_object(create_aquabrick2_706(7808, 1120), 3);
    add_background_object(create_aquabrick1_676(7872, 1136), 3);
    add_background_object(create_aquabrick2_706(7872, 1120), 3);
    add_background_object(create_atwaterfaucet_722(7760, 856), 3);
    add_background_object(create_atwaterfaucet4_723(1040, 1000), 3);
    add_background_object(create_atwaterfaucet2_724(7808, 856), 3);
    add_background_object(create_atwaterfaucet3_681(7904, 784), 3);
    add_background_object(create_aquabrick13_712(7792, 1120), 3);
    add_background_object(create_aquabrick6_709(7744, 1120), 3);
    add_background_object(create_aquabrick15_685(7792, 1136), 3);
    add_background_object(create_aquabrick16_684(7736, 1136), 3);
    add_background_object(create_aquabrick2_706(7744, 1168), 3);
    add_background_object(create_watervent_725(7744, 1168), 3);
    add_background_object(create_aquabrick2_706(7872, 848), 3);
    add_background_object(create_aquabrick13_712(7856, 848), 3);
    add_background_object(create_aquabrick11_688(7872, 864), 3);
    add_background_object(create_aquabrick15_685(7856, 864), 3);
    add_background_object(create_aquabrick1_676(7424, 688), 3);
    add_background_object(create_aquabrick1_676(7488, 688), 3);
    add_background_object(create_aquabrick3_691(7424, 496), 3);
    add_background_object(create_aquabrick3_691(7424, 432), 3);
    add_background_object(create_aquabrick3_691(7424, 368), 3);
    add_background_object(create_aquabrick3_691(7424, 624), 3);
    add_background_object(create_aquabrick3_691(7424, 560), 3);
    add_background_object(create_aquabrick3_691(7424, 624), 3);
    add_background_object(create_aquabrick1_676(7552, 688), 3);
    add_background_object(create_aquabrick1_676(7616, 688), 3);
    add_background_object(create_aquabrick3_691(7552, 496), 3);
    add_background_object(create_aquabrick3_691(7552, 432), 3);
    add_background_object(create_aquabrick3_691(7552, 368), 3);
    add_background_object(create_aquabrick3_691(7552, 624), 3);
    add_background_object(create_aquabrick3_691(7552, 560), 3);
    add_background_object(create_aquabrick1_676(7680, 688), 3);
    add_background_object(create_aquabrick1_676(7744, 688), 3);
    add_background_object(create_aquabrick3_691(7680, 496), 3);
    add_background_object(create_aquabrick3_691(7680, 432), 3);
    add_background_object(create_aquabrick3_691(7680, 368), 3);
    add_background_object(create_aquabrick3_691(7680, 624), 3);
    add_background_object(create_aquabrick3_691(7680, 560), 3);
    add_background_object(create_aquabrick3_691(7680, 624), 3);
    add_background_object(create_aquabrick3_691(7552, 624), 3);
    add_background_object(create_atwaterfaucet3_681(7904, 720), 3);
    add_background_object(create_aquabrick1_676(7808, 688), 3);
    add_background_object(create_aquabrick1_676(7872, 688), 3);
    add_background_object(create_aquabrick3_691(7808, 496), 3);
    add_background_object(create_aquabrick3_691(7808, 432), 3);
    add_background_object(create_aquabrick3_691(7808, 368), 3);
    add_background_object(create_aquabrick3_691(7808, 624), 3);
    add_background_object(create_aquabrick3_691(7808, 560), 3);
    add_background_object(create_aquabrick3_691(7936, 496), 3);
    add_background_object(create_aquabrick3_691(7936, 432), 3);
    add_background_object(create_aquabrick3_691(7936, 368), 3);
    add_background_object(create_aquabrick3_691(7936, 624), 3);
    add_background_object(create_aquabrick3_691(7936, 560), 3);
    add_background_object(create_aquabrick3_691(7808, 624), 3);
    add_background_object(create_aquabrick11_688(7936, 1136), 3);
    add_background_object(create_aquabrick2_706(7936, 1120), 3);
    add_background_object(create_aquabrick1_676(8000, 1136), 3);
    add_background_object(create_aquabrick2_706(8000, 1120), 3);
    add_background_object(create_aquabrickslope1_697(7936, 848), 3);
    add_background_object(create_aquabrickslope2_698(8064, 880), 3);
    add_background_object(create_aquabrick2_706(8192, 912), 3);
    add_background_object(create_aquabrick11_688(8256, 928), 3);
    add_background_object(create_aquabrick2_706(8256, 912), 3);
    add_background_object(create_aquabrick11_688(8384, 928), 3);
    add_background_object(create_aquabrick21_683(8192, 1088), 3);
    add_background_object(create_aquabrick2_706(7872, 1328), 3);
    add_background_object(create_aquabrick1_676(7808, 1344), 3);
    add_background_object(create_aquabrick2_706(7808, 1328), 3);
    add_background_object(create_aquabrick1_676(7936, 1344), 3);
    add_background_object(create_aquabrick2_706(7936, 1328), 3);
    add_background_object(create_aquabrick14_693(8176, 1120), 3);
    add_background_object(create_aquabrick11_688(8000, 1344), 3);
    add_background_object(create_aquabrick1_676(8000, 1168), 3);
    add_background_object(create_aquabrick1_676(7936, 1168), 3);
    add_background_object(create_aquabrick6_709(8064, 1120), 3);
    add_background_object(create_aquabrick4_707(8056, 1136), 3);
    add_background_object(create_aquabrick1_676(7872, 1168), 3);
    add_background_object(create_aquabrick1_676(7808, 1168), 3);
    add_background_object(create_aquabrick5_682(7680, 1296), 3);
    add_background_object(create_aquabrick4_707(7800, 1200), 3);
    add_background_object(create_aquabrick4_707(7800, 1264), 3);
    add_background_object(create_aquabrick4_707(8696, 1248), 3);
    add_background_object(create_aquabrick11_688(7872, 1344), 3);
    add_background_object(create_aquabrickslope3_710(8896, 1456), 3);
    add_background_object(create_aquabrickslope1_697(9152, 1424), 3);
    add_background_object(create_aquabrickslope4_711(9024, 1424), 3);
    add_background_object(create_aquabrickslope2_698(9280, 1456), 3);
    add_background_object(create_aquabrick11_688(8832, 1504), 3);
    add_background_object(create_aquabrick3_691(8704, 1504), 3);
    add_background_object(create_aquabrick3_691(8704, 1568), 3);
    add_background_object(create_aquabrick3_691(8832, 1536), 3);
    add_background_object(create_aquabrick3_691(8832, 1600), 3);
    add_background_object(create_aquabrick3_691(8704, 1632), 3);
    add_background_object(create_aquabrick3_691(8960, 1664), 3);
    add_background_object(create_aquabrick3_691(8960, 1536), 3);
    add_background_object(create_aquabrick3_691(8960, 1600), 3);
    add_background_object(create_aquabrick3_691(9024, 1536), 3);
    add_background_object(create_aquabrick3_691(9152, 1536), 3);
    add_background_object(create_aquabrick3_691(9088, 1600), 3);
    add_background_object(create_aquabrick3_691(9216, 1600), 3);
    add_background_object(create_aquabrick3_691(9088, 1664), 3);
    add_background_object(create_aquabrick3_691(9216, 1664), 3);
    add_background_object(create_aquabrick3_691(9216, 1536), 3);
    add_background_object(create_aquabrick3_691(8832, 1664), 3);
    add_background_object(create_aquabrick3_691(9344, 1600), 3);
    add_background_object(create_aquabrick3_691(9344, 1664), 3);
    add_background_object(create_aquabrick11_688(9216, 1504), 3);
    add_background_object(create_aquabrick11_688(9088, 1504), 3);
    add_background_object(create_aquabrick3_691(7936, 1376), 3);
    add_background_object(create_aquabrick3_691(7808, 1376), 3);
    add_background_object(create_aquabrick3_691(8064, 1376), 3);
    add_background_object(create_aquabrick3_691(8192, 1376), 3);
    add_background_object(create_aquabrick3_691(8192, 1344), 3);
    add_background_object(create_aquabrick19_714(9408, 1304), 3);
    add_background_object(create_aquabrick20_716(9408, 1304), 3);
    add_background_object(create_aquabrick1_676(9408, 1504), 3);
    add_background_object(create_aquabrick3_691(9600, 1504), 3);
    add_background_object(create_aquabrick3_691(9472, 1504), 3);
    add_background_object(create_aquabrick3_691(9472, 1568), 3);
    add_background_object(create_aquabrick3_691(9472, 1632), 3);
    add_background_object(create_aquabrick3_691(9600, 1568), 3);
    add_background_object(create_aquabrick3_691(9600, 1632), 3);
    add_background_object(create_aquabrick14_693(9584, 1248), 3);
    add_background_object(create_aquabrick2_706(8320, 912), 3);
    add_background_object(create_aquabrick2_706(8384, 912), 3);
    add_background_object(create_aquabrick1_676(8192, 928), 3);
    add_background_object(create_aquabrick1_676(8320, 928), 3);
    add_background_object(create_aquabrick11_688(6208, 944), 3);
    add_background_object(create_aquabrickslope1_697(7936, 672), 3);
    add_background_object(create_aquabrickslope2_698(8064, 704), 3);
    add_background_object(create_aquabrick3_691(7936, 624), 3);
    add_background_object(create_atsewerpipe1_671(8192, 784), 3);
    add_background_object(create_aquabrick1_676(8256, 752), 3);
    add_background_object(create_aquabrick11_688(8192, 752), 3);
    add_background_object(create_aquabrick3_691(8192, 496), 3);
    add_background_object(create_aquabrick3_691(8192, 560), 3);
    add_background_object(create_aquabrick3_691(8192, 624), 3);
    add_background_object(create_aquabrick3_691(8064, 688), 3);
    add_background_object(create_aquabrick3_691(8192, 688), 3);
    add_background_object(create_aquabrick1_676(8384, 752), 3);
    add_background_object(create_aquabrick11_688(8320, 752), 3);
    add_background_object(create_aquabrick10_677(7968, 688), 3);
    add_background_object(create_aquabrick3_691(8064, 496), 3);
    add_background_object(create_aquabrick3_691(8064, 560), 3);
    add_background_object(create_aquabrick3_691(8064, 624), 3);
    add_background_object(create_aquabrick5_682(8320, 624), 3);
    add_background_object(create_aquabrick5_682(8320, 496), 3);
    add_background_object(create_aquabrick5_682(8064, 368), 3);
    add_background_object(create_aquabrick16_684(8440, 752), 3);
    add_background_object(create_aquabrick4_707(8440, 688), 3);
    add_background_object(create_aquabrick4_707(8440, 624), 3);
    add_background_object(create_aquabrick4_707(8440, 560), 3);
    add_background_object(create_aquabrick4_707(8440, 496), 3);
    add_background_object(create_lightray1_659(7800, 720), 3);
    add_background_object(create_lightray1_659(7784, 752), 3);
    add_background_object(create_lightray2_666(7768, 784), 3);
    add_background_object(create_aquabrick3_691(8576, 960), 3);
    add_background_object(create_aquabrick11_688(8768, 864), 3);
    add_background_object(create_aquabrick2_706(8704, 848), 3);
    add_background_object(create_aquabrick1_676(8704, 864), 3);
    add_background_object(create_aquabrick3_691(8704, 960), 3);
    add_background_object(create_aquabrickslope3_710(8448, 880), 3);
    add_background_object(create_aquabrickslope4_711(8576, 848), 3);
    add_background_object(create_aquabrick3_691(8704, 896), 3);
    add_background_object(create_aquabrick21_683(8832, 768), 3);
    add_background_object(create_aquabrick14_693(8816, 768), 3);
    add_background_object(create_aquabrick15_685(8816, 832), 3);
    add_background_object(create_aquabrick2_706(8768, 848), 3);
    add_background_object(create_aquaplant1_670(7816, 824), 3);
    add_background_object(create_atsewerpipe6_672(5560, 528), 3);
    add_background_object(create_atsewerpipe6_672(5560, 560), 3);
    add_background_object(create_atsewerpipe6_672(6200, 592), 3);
    add_background_object(create_atsewerpipe6_672(6200, 624), 3);
    add_background_object(create_atsewerpipe6_672(6200, 656), 3);
    add_background_object(create_atsewerpipe6_672(6456, 592), 3);
    add_background_object(create_atsewerpipe6_672(6456, 624), 3);
    add_background_object(create_atsewerpipe6_672(6456, 656), 3);
    add_background_object(create_atsewerpipe6_672(6200, 832), 3);
    add_background_object(create_atsewerpipe6_672(6200, 864), 3);
    add_background_object(create_atsewerpipe6_672(6200, 896), 3);
    add_background_object(create_atsewerpipe6_672(6456, 832), 3);
    add_background_object(create_atsewerpipe6_672(6456, 864), 3);
    add_background_object(create_atsewerpipe6_672(6456, 896), 3);
    add_background_object(create_atsewerpipe6_672(8184, 816), 3);
    add_background_object(create_atsewerpipe6_672(8184, 848), 3);
    add_background_object(create_atsewerpipe6_672(8184, 880), 3);
    add_background_object(create_atsewerpipe6_672(8440, 816), 3);
    add_background_object(create_atsewerpipe6_672(8440, 848), 3);
    add_background_object(create_atsewerpipe6_672(8440, 880), 3);
    add_background_object(create_atsewerpipe6_672(8440, 784), 3);
    add_background_object(create_atsewerpipe6_672(8184, 784), 3);
    add_background_object(create_aquabrick13_712(8816, 752), 3);
    add_background_object(create_atsewerpipe8_680(8720, 592), 3);
    add_background_object(create_atsewerpipe11_679(8720, 432), 3);
    add_background_object(create_atsewerpipe9_668(8592, 432), 3);
    add_background_object(create_atsewerpipe9_668(8464, 432), 3);
    add_background_object(create_aquabrick3_691(8960, 800), 3);
    add_background_object(create_aquabrick3_691(8960, 832), 3);
    add_background_object(create_aquabrick3_691(9088, 800), 3);
    add_background_object(create_aquadirt_689(8832, 752), 3);
    add_background_object(create_aquadirt2_692(8848, 744), 3);
    add_background_object(create_aquabrick3_691(9088, 832), 3);
    add_background_object(create_aquatree1_702(8992, 608), 3);
    add_background_object(create_aquabrick3_691(320, 688), 3);
    add_background_object(create_aquabrick10_677(384, 992), 3);
    add_background_object(create_aquabrickslope1_697(256, 912), 3);
    add_background_object(create_aquabrickslope2_698(384, 944), 3);
    add_background_object(create_aquabrick3_691(192, 688), 3);
    add_background_object(create_aquabrick3_691(192, 624), 3);
    add_background_object(create_aquabrick1_676(192, 752), 3);
    add_background_object(create_aquabrick3_691(192, 560), 3);
    add_background_object(create_aquabrick3_691(192, 496), 3);
    add_background_object(create_aquabrick3_691(0, 688), 3);
    add_background_object(create_aquabrick3_691(0, 624), 3);
    add_background_object(create_aquabrick1_676(64, 752), 3);
    add_background_object(create_aquabrick1_676(0, 752), 3);
    add_background_object(create_aquabrick3_691(0, 560), 3);
    add_background_object(create_aquabrick3_691(0, 496), 3);
    add_background_object(create_aquabrick1_676(128, 1184), 3);
    add_background_object(create_aquabrick3_691(128, 1216), 3);
    add_background_object(create_aquabrick2_706(-64, 912), 3);
    add_background_object(create_aquabrick2_706(0, 912), 3);
    add_background_object(create_aquabrick1_676(-64, 928), 3);
    add_background_object(create_aquabrick11_688(0, 928), 3);
    add_background_object(create_aquabrick3_691(0, 1216), 3);
    add_background_object(create_lightray1_659(56, 784), 3);
    add_background_object(create_lightray2_666(40, 816), 3);
    add_background_object(create_aquabrick16_684(120, 752), 3);
    add_background_object(create_aquabrick15_685(176, 752), 3);
    add_background_object(create_aquabrick14_693(176, 688), 3);
    add_background_object(create_aquabrick4_707(120, 688), 3);
    add_background_object(create_aquabrick4_707(120, 624), 3);
    add_background_object(create_aquabrick14_693(176, 624), 3);
    add_background_object(create_aquabrick4_707(120, 560), 3);
    add_background_object(create_aquabrick14_693(176, 560), 3);
    add_background_object(create_aquabrick4_707(120, 496), 3);
    add_background_object(create_aquabrick14_693(176, 496), 3);
    add_background_object(create_aquabrick3_691(384, 432), 3);
    add_background_object(create_aquabrick3_691(320, 432), 3);
    add_background_object(create_aquabrick3_691(384, 368), 3);
    add_background_object(create_aquabrick3_691(256, 368), 3);
    add_background_object(create_aquabrick3_691(192, 432), 3);
    add_background_object(create_aquabrick3_691(192, 368), 3);
    add_background_object(create_aquabrick3_691(0, 432), 3);
    add_background_object(create_aquabrick3_691(0, 368), 3);
    add_background_object(create_aquabrick4_707(120, 432), 3);
    add_background_object(create_aquabrick14_693(176, 432), 3);
    add_background_object(create_aquabrick4_707(120, 368), 3);
    add_background_object(create_aquabrick14_693(176, 368), 3);
    add_background_object(create_aquabrick3_691(384, 304), 3);
    add_background_object(create_aquabrick3_691(320, 304), 3);
    add_background_object(create_aquabrick3_691(192, 304), 3);
    add_background_object(create_aquabrick3_691(0, 304), 3);
    add_background_object(create_aquabrick4_707(120, 304), 3);
    add_background_object(create_aquabrick14_693(176, 304), 3);
    add_background_object(create_aquabrick3_691(384, 240), 3);
    add_background_object(create_aquabrick3_691(256, 240), 3);
    add_background_object(create_aquabrick3_691(192, 240), 3);
    add_background_object(create_aquabrick3_691(0, 240), 3);
    add_background_object(create_aquabrick4_707(120, 240), 3);
    add_background_object(create_aquabrick14_693(176, 240), 3);
    add_background_object(create_aquabrick3_691(384, 176), 3);
    add_background_object(create_aquabrick3_691(320, 176), 3);
    add_background_object(create_aquabrick3_691(384, 112), 3);
    add_background_object(create_aquabrick3_691(256, 112), 3);
    add_background_object(create_aquabrick3_691(192, 176), 3);
    add_background_object(create_aquabrick3_691(192, 112), 3);
    add_background_object(create_aquabrick3_691(0, 176), 3);
    add_background_object(create_aquabrick3_691(0, 112), 3);
    add_background_object(create_aquabrick4_707(120, 176), 3);
    add_background_object(create_aquabrick14_693(176, 176), 3);
    add_background_object(create_aquabrick4_707(120, 112), 3);
    add_background_object(create_aquabrick14_693(176, 112), 3);
    add_background_object(create_aquabrick3_691(384, 48), 3);
    add_background_object(create_aquabrick3_691(256, 48), 3);
    add_background_object(create_aquabrick3_691(192, 48), 3);
    add_background_object(create_aquabrick3_691(0, 48), 3);
    add_background_object(create_aquabrick4_707(120, 48), 3);
    add_background_object(create_aquabrick14_693(176, 48), 3);
    add_background_object(create_aquabrick3_691(384, -16), 3);
    add_background_object(create_aquabrick3_691(256, -16), 3);
    add_background_object(create_aquabrick3_691(192, -16), 3);
    add_background_object(create_aquabrick3_691(0, -16), 3);
    add_background_object(create_aquabrick4_707(120, -16), 3);
    add_background_object(create_aquabrick14_693(176, -16), 3);
    add_background_object(create_aquabrick6_709(64, 912), 3);
    add_background_object(create_aquabrick4_707(56, 928), 3);
    add_background_object(create_aquabrick4_707(56, 992), 3);
    add_background_object(create_aquabrick4_707(56, 1120), 3);
    add_background_object(create_aquabrick2_706(128, 1168), 3);
    add_background_object(create_aquabrick13_712(240, 912), 3);
    add_background_object(create_aquabrick14_693(240, 928), 3);
    add_background_object(create_aquabrick14_693(240, 992), 3);
    add_background_object(create_aquabrick14_693(240, 1120), 3);
    add_background_object(create_aquabrick2_706(192, 1168), 3);
    add_background_object(create_aquabrick3_691(896, 1280), 3);
    add_background_object(create_aquabrick3_691(2432, 1280), 3);
    add_background_object(create_aquabrick3_691(896, 1344), 3);
    add_background_object(create_aquabrick3_691(2432, 1344), 3);
    add_background_object(create_aquabrick3_691(768, 1280), 3);
    add_background_object(create_aquabrick3_691(768, 1344), 3);
    add_background_object(create_aquabrick3_691(640, 1280), 3);
    add_background_object(create_aquabrick3_691(640, 1344), 3);
    add_background_object(create_aquabrick3_691(512, 1280), 3);
    add_background_object(create_aquabrick3_691(512, 1344), 3);
    add_background_object(create_aquabrick3_691(384, 1280), 3);
    add_background_object(create_aquabrick3_691(384, 1344), 3);
    add_background_object(create_aquabrick3_691(256, 1280), 3);
    add_background_object(create_aquabrick3_691(256, 1344), 3);
    add_background_object(create_aquabrick3_691(128, 1280), 3);
    add_background_object(create_aquabrick3_691(128, 1344), 3);
    add_background_object(create_aquabrick3_691(0, 1280), 3);
    add_background_object(create_aquabrick3_691(0, 1344), 3);
    add_background_object(create_aquabrick4_707(56, 1056), 3);
    add_background_object(create_aquabrick14_693(240, 1056), 3);
    add_background_object(create_aquabrick1_676(64, 1184), 3);
    add_background_object(create_aquabrick2_706(64, 1168), 3);
    add_background_object(create_aquabrick3_691(2688, 1088), 3);
    add_background_object(create_aquabrick3_691(2688, 1152), 3);
    add_background_object(create_aquabrick3_691(2688, 1216), 3);
    add_background_object(create_aquabrick3_691(2688, 1280), 3);
    add_background_object(create_aquabrick11_688(2752, 1056), 3);
    add_background_object(create_aquabrick3_691(2560, 1088), 3);
    add_background_object(create_aquabrick3_691(2560, 1152), 3);
    add_background_object(create_aquabrick3_691(2560, 1216), 3);
    add_background_object(create_aquabrick3_691(2560, 1280), 3);
    add_background_object(create_aquabrick1_676(2752, 688), 3);
    add_background_object(create_lightray1_659(2800, 720), 3);
    add_background_object(create_lightray1_659(2784, 752), 3);
    add_background_object(create_lightray1_659(2768, 784), 3);
    add_background_object(create_lightray2_666(2736, 848), 3);
    add_background_object(create_lightray1_659(2752, 816), 3);
    add_background_object(create_aquaplant1_670(1216, 608), 3);
    add_background_object(create_aquabrick1_676(3456, 640), 3);
    add_background_object(create_aquabrick11_688(3520, 640), 3);
    add_background_object(create_aquabrick1_676(3520, 608), 3);
    add_background_object(create_aquabrick11_688(3456, 608), 3);
    add_background_object(create_aquabrick14_693(3440, 608), 3);
    add_background_object(create_aquabrick4_707(3576, 608), 3);
    add_background_object(create_aquabrick1_676(3456, 704), 3);
    add_background_object(create_aquabrick11_688(3520, 704), 3);
    add_background_object(create_aquabrick1_676(3520, 672), 3);
    add_background_object(create_aquabrick11_688(3456, 672), 3);
    add_background_object(create_aquabrick14_693(3440, 672), 3);
    add_background_object(create_aquabrick4_707(3576, 672), 3);
    add_background_object(create_aquabrick16_684(3320, 624), 3);
    add_background_object(create_aquabrickarch1_669(3344, 656), 3);
    add_background_object(create_aquabrickarch1_669(3344, 720), 3);
    add_background_object(create_aquabrickarch1_669(3344, 784), 3);
    add_background_object(create_aquabrickarch1_669(3344, 848), 3);
    add_background_object(create_aquabrickarch1_669(3344, 912), 3);
    add_background_object(create_aquabrickarch1_669(3344, 976), 3);
    add_background_object(create_aquabrick1_676(7488, 720), 3);
    add_background_object(create_aquabrick1_676(7488, 752), 3);
    add_background_object(create_aquabrick1_676(7488, 816), 3);
    add_background_object(create_aquabrick1_676(7488, 848), 3);
    add_background_object(create_aquabrick1_676(7488, 880), 3);
    add_background_object(create_aquabrick1_676(7488, 912), 3);
    add_background_object(create_aquabrick1_676(7424, 912), 3);
    add_background_object(create_aquabrick1_676(7360, 912), 3);
    add_background_object(create_aquabrick13_712(7344, 896), 3);
    add_background_object(create_aquabrick2_706(7360, 896), 3);
    add_background_object(create_aquabrick14_693(7472, 720), 3);
    add_background_object(create_aquabrick15_685(7344, 912), 3);
    add_background_object(create_aquabrick4_707(7544, 720), 3);
    add_background_object(create_aquabrick4_707(7544, 848), 3);
    add_background_object(create_aquabrick6_709(3584, 848), 3);
    add_background_object(create_aquabrick13_712(3440, 848), 3);
    add_background_object(create_aquabrick2_706(3456, 848), 3);
    add_background_object(create_aquabrick2_706(3520, 848), 3);
    add_background_object(create_aquabrick2_706(1088, 1040), 3);
    add_background_object(create_aquabrick1_676(1024, 1056), 3);
    add_background_object(create_aquabrick11_688(1088, 1056), 3);
    add_background_object(create_aquabrick2_706(1152, 1040), 3);
    add_background_object(create_aquabrick2_706(1216, 1040), 3);
    add_background_object(create_aquabrick1_676(1152, 1056), 3);
    add_background_object(create_aquabrick11_688(1216, 1056), 3);
    add_background_object(create_aquabrick2_706(1280, 1040), 3);
    add_background_object(create_aquabrick2_706(1344, 1040), 3);
    add_background_object(create_aquabrick1_676(1280, 1056), 3);
    add_background_object(create_aquabrick11_688(1344, 1056), 3);
    add_background_object(create_aquabrick2_706(1408, 1040), 3);
    add_background_object(create_aquabrick2_706(1472, 1040), 3);
    add_background_object(create_aquabrick1_676(1408, 1056), 3);
    add_background_object(create_aquabrick11_688(1472, 1056), 3);
    add_background_object(create_aquabrick2_706(1536, 1040), 3);
    add_background_object(create_aquabrick2_706(1600, 1040), 3);
    add_background_object(create_aquabrick1_676(1536, 1056), 3);
    add_background_object(create_aquabrick11_688(1600, 1056), 3);
    add_background_object(create_aquabrick3_691(1024, 1088), 3);
    add_background_object(create_aquabrick3_691(1024, 1152), 3);
    add_background_object(create_aquabrick3_691(1024, 1216), 3);
    add_background_object(create_aquabrick3_691(1024, 1280), 3);
    add_background_object(create_aquabrick3_691(1024, 1344), 3);
    add_background_object(create_aquabrick3_691(1152, 1088), 3);
    add_background_object(create_aquabrick3_691(1152, 1152), 3);
    add_background_object(create_aquabrick3_691(1152, 1216), 3);
    add_background_object(create_aquabrick3_691(1152, 1280), 3);
    add_background_object(create_aquabrick3_691(1152, 1344), 3);
    add_background_object(create_aquabrick3_691(1280, 1088), 3);
    add_background_object(create_aquabrick3_691(1280, 1152), 3);
    add_background_object(create_aquabrick3_691(1280, 1216), 3);
    add_background_object(create_aquabrick3_691(1280, 1280), 3);
    add_background_object(create_aquabrick3_691(1280, 1344), 3);
    add_background_object(create_aquabrick3_691(1408, 1088), 3);
    add_background_object(create_aquabrick3_691(1408, 1152), 3);
    add_background_object(create_aquabrick3_691(1408, 1216), 3);
    add_background_object(create_aquabrick3_691(1408, 1280), 3);
    add_background_object(create_aquabrick3_691(1408, 1344), 3);
    add_background_object(create_aquabrick3_691(1536, 1088), 3);
    add_background_object(create_aquabrick3_691(1536, 1152), 3);
    add_background_object(create_aquabrick3_691(1536, 1216), 3);
    add_background_object(create_aquabrick3_691(1536, 1280), 3);
    add_background_object(create_aquabrick3_691(1536, 1344), 3);
    add_background_object(create_aquabrick3_691(2176, 1088), 3);
    add_background_object(create_aquabrick3_691(2176, 1152), 3);
    add_background_object(create_aquabrick3_691(2176, 1216), 3);
    add_background_object(create_aquabrick3_691(2176, 1280), 3);
    add_background_object(create_aquabrick3_691(2176, 1344), 3);
    add_background_object(create_aquabrick3_691(2304, 1088), 3);
    add_background_object(create_aquabrick3_691(2304, 1152), 3);
    add_background_object(create_aquabrick3_691(2304, 1216), 3);
    add_background_object(create_aquabrick3_691(2304, 1280), 3);
    add_background_object(create_aquabrick3_691(2304, 1344), 3);
    add_background_object(create_aquabrick3_691(1024, 80), 3);
    add_background_object(create_aquabrick3_691(1024, 208), 3);
    add_background_object(create_aquabrick1_676(1088, 272), 3);
    add_background_object(create_aquabrick1_676(1024, 272), 3);
    add_background_object(create_aquabrick3_691(1024, 144), 3);
    add_background_object(create_aquabrick3_691(1152, 80), 3);
    add_background_object(create_aquabrick3_691(1152, 208), 3);
    add_background_object(create_aquabrick1_676(1216, 272), 3);
    add_background_object(create_aquabrick1_676(1152, 272), 3);
    add_background_object(create_aquabrick3_691(1152, 144), 3);
    add_background_object(create_aquabrick21_683(1792, 816), 3);
    add_background_object(create_aquabrick6_709(1024, 912), 3);
    add_background_object(create_aquabrick5_682(2496, 704), 3);
    add_background_object(create_aquabrick4_707(2616, 704), 3);
    add_background_object(create_aquabrick5_682(2496, 832), 3);
    add_background_object(create_aquabrick4_707(2616, 768), 3);
    add_background_object(create_aquabrick1_676(1856, 944), 3);
    add_background_object(create_aquabrick3_691(1280, 208), 3);
    add_background_object(create_aquabrick1_676(1344, 272), 3);
    add_background_object(create_aquabrick1_676(1280, 272), 3);
    add_background_object(create_aquabrick3_691(1280, 144), 3);
    add_background_object(create_aquabrick21_683(1792, 688), 3);
    add_background_object(create_aquabrick5_682(896, 656), 3);
    add_background_object(create_aquabrick3_691(896, 208), 3);
    add_background_object(create_aquabrick5_682(896, 960), 3);
    add_background_object(create_aquabrickslope4_711(768, 912), 3);
    add_background_object(create_aquabrick4_707(1016, 992), 3);
    add_background_object(create_aquabrick16_684(1016, 928), 3);
    add_background_object(create_aquabrick4_707(1016, 960), 3);
    add_background_object(create_atwaterfaucet4_723(1040, 968), 3);
    add_background_object(create_aquabrick2_706(1024, 1040), 3);
    add_background_object(create_aquabrick2_706(1664, 1040), 3);
    add_background_object(create_aquabrick2_706(1728, 1040), 3);
    add_background_object(create_aquabrick1_676(1664, 1056), 3);
    add_background_object(create_aquabrick11_688(1728, 1056), 3);
    add_background_object(create_aquabrick3_691(1664, 1088), 3);
    add_background_object(create_aquabrick3_691(1664, 1152), 3);
    add_background_object(create_aquabrick3_691(1664, 1216), 3);
    add_background_object(create_aquabrick3_691(1664, 1280), 3);
    add_background_object(create_aquabrick3_691(1664, 1344), 3);
    add_background_object(create_aquabrick2_706(1792, 1040), 3);
    add_background_object(create_aquabrick2_706(1856, 1040), 3);
    add_background_object(create_aquabrick1_676(1792, 1056), 3);
    add_background_object(create_aquabrick11_688(1856, 1056), 3);
    add_background_object(create_aquabrick3_691(1792, 1088), 3);
    add_background_object(create_aquabrick3_691(1792, 1152), 3);
    add_background_object(create_aquabrick3_691(1792, 1216), 3);
    add_background_object(create_aquabrick3_691(1792, 1280), 3);
    add_background_object(create_aquabrick3_691(1792, 1344), 3);
    add_background_object(create_aquabrick2_706(1920, 1040), 3);
    add_background_object(create_aquabrick2_706(1984, 1040), 3);
    add_background_object(create_aquabrick1_676(1920, 1056), 3);
    add_background_object(create_aquabrick11_688(1984, 1056), 3);
    add_background_object(create_aquabrick3_691(1920, 1088), 3);
    add_background_object(create_aquabrick3_691(1920, 1152), 3);
    add_background_object(create_aquabrick3_691(1920, 1216), 3);
    add_background_object(create_aquabrick3_691(1920, 1280), 3);
    add_background_object(create_aquabrick3_691(1920, 1344), 3);
    add_background_object(create_aquabrick3_691(1920, 624), 3);
    add_background_object(create_aquabrick3_691(1920, 560), 3);
    add_background_object(create_aquabrick3_691(1920, 752), 3);
    add_background_object(create_aquabrick3_691(1920, 688), 3);
    add_background_object(create_aquabrick3_691(1920, 816), 3);
    add_background_object(create_aquabrick1_676(1920, 944), 3);
    add_background_object(create_aquabrick1_676(1984, 944), 3);
    add_background_object(create_aquabrick2_706(2048, 1040), 3);
    add_background_object(create_aquabrick2_706(2112, 1040), 3);
    add_background_object(create_aquabrick1_676(2048, 1056), 3);
    add_background_object(create_aquabrick11_688(2112, 1056), 3);
    add_background_object(create_aquabrick11_688(2176, 1056), 3);
    add_background_object(create_aquabrick3_691(2048, 1088), 3);
    add_background_object(create_aquabrick3_691(2048, 1152), 3);
    add_background_object(create_aquabrick3_691(2048, 1216), 3);
    add_background_object(create_aquabrick3_691(2048, 1280), 3);
    add_background_object(create_aquabrick3_691(2048, 1344), 3);
    add_background_object(create_aquabrick1_676(2048, 944), 3);
    add_background_object(create_aquabrick1_676(2112, 944), 3);
    add_background_object(create_aquabrick5_682(896, 272), 3);
    add_background_object(create_aquabrick5_682(896, 400), 3);
    add_background_object(create_aquabrick5_682(896, 528), 3);
    add_background_object(create_aquabrick4_707(1016, 304), 3);
    add_background_object(create_aquabrick4_707(1016, 368), 3);
    add_background_object(create_aquabrick4_707(1016, 432), 3);
    add_background_object(create_aquabrick4_707(1016, 496), 3);
    add_background_object(create_aquabrick4_707(1016, 560), 3);
    add_background_object(create_aquabrick4_707(1016, 688), 3);
    add_background_object(create_aquabrick16_684(1016, 752), 3);
    add_background_object(create_aquabrick3_691(1280, 80), 3);
    add_background_object(create_aquabrick3_691(1408, 208), 3);
    add_background_object(create_aquabrick1_676(1472, 272), 3);
    add_background_object(create_aquabrick1_676(1408, 272), 3);
    add_background_object(create_aquabrick3_691(1408, 144), 3);
    add_background_object(create_aquabrick3_691(1408, 80), 3);
    add_background_object(create_aquabrick3_691(1664, 208), 3);
    add_background_object(create_aquabrick1_676(1728, 272), 3);
    add_background_object(create_aquabrick1_676(1664, 272), 3);
    add_background_object(create_aquabrick3_691(1664, 144), 3);
    add_background_object(create_aquabrick3_691(1664, 80), 3);
    add_background_object(create_aquabrick21_683(1792, 304), 3);
    add_background_object(create_aquabrick14_693(1776, 304), 3);
    add_background_object(create_aquabrick14_693(1776, 688), 3);
    add_background_object(create_aquabrick14_693(1776, 368), 3);
    add_background_object(create_aquabrick3_691(1792, 240), 3);
    add_background_object(create_aquabrick3_691(1920, 496), 3);
    add_background_object(create_aquabrick3_691(1792, 176), 3);
    add_background_object(create_aquabrick3_691(1920, 432), 3);
    add_background_object(create_aquabrick3_691(1792, 112), 3);
    add_background_object(create_aquabrick3_691(1920, 368), 3);
    add_background_object(create_aquabrick14_693(1776, 752), 3);
    add_background_object(create_aquabrick14_693(1776, 816), 3);
    add_background_object(create_aquabrick2_706(1344, 864), 3);
    add_background_object(create_aquabrick1_676(1344, 944), 3);
    add_background_object(create_aquabrick11_688(1408, 944), 3);
    add_background_object(create_aquabrick13_712(1328, 864), 3);
    add_background_object(create_aquabrick15_685(1328, 944), 3);
    add_background_object(create_aquabrick2_706(1408, 864), 3);
    add_background_object(create_aquabrick2_706(1216, 640), 3);
    add_background_object(create_aquabrick1_676(1024, 656), 3);
    add_background_object(create_aquabrick1_676(1216, 656), 3);
    add_background_object(create_aquabrick11_688(1152, 656), 3);
    add_background_object(create_aquabrick6_709(1280, 640), 3);
    add_background_object(create_aquabrick16_684(1272, 656), 3);
    add_background_object(create_aquabrick2_706(1152, 640), 3);
    add_background_object(create_aquabrick3_691(2048, 368), 3);
    add_background_object(create_aquabrick3_691(2176, 368), 3);
    add_background_object(create_aquabrick3_691(1536, 208), 3);
    add_background_object(create_aquabrick1_676(1600, 272), 3);
    add_background_object(create_aquabrick1_676(1536, 272), 3);
    add_background_object(create_aquabrick3_691(1536, 144), 3);
    add_background_object(create_aquabrick3_691(1536, 80), 3);
    add_background_object(create_aquabrick1_676(1792, 944), 3);
    add_background_object(create_aquabrick1_676(1664, 944), 3);
    add_background_object(create_aquabrick2_706(1664, 864), 3);
    add_background_object(create_aquabrick2_706(1728, 864), 3);
    add_background_object(create_aquabrick1_676(1464, 656), 3);
    add_background_object(create_aquabrick1_676(1656, 656), 3);
    add_background_object(create_aquabrick11_688(1592, 656), 3);
    add_background_object(create_aquabrick13_712(1448, 640), 3);
    add_background_object(create_aquabrick6_709(1720, 640), 3);
    add_background_object(create_aquabrick16_684(1712, 656), 3);
    add_background_object(create_aquabrick15_685(1448, 656), 3);
    add_background_object(create_aquabrick3_691(512, 432), 3);
    add_background_object(create_aquabrick3_691(640, 368), 3);
    add_background_object(create_aquabrick3_691(512, 368), 3);
    add_background_object(create_aquabrick3_691(768, 240), 3);
    add_background_object(create_aquabrick3_691(512, 304), 3);
    add_background_object(create_aquabrick3_691(640, 304), 3);
    add_background_object(create_aquabrick3_691(768, 304), 3);
    add_background_object(create_aquabrick3_691(640, 240), 3);
    add_background_object(create_aquabrick3_691(768, 176), 3);
    add_background_object(create_aquabrick3_691(512, 240), 3);
    add_background_object(create_aquabrick3_691(640, 176), 3);
    add_background_object(create_aquabrick3_691(512, 176), 3);
    add_background_object(create_aquabrick3_691(768, 112), 3);
    add_background_object(create_aquabrick3_691(640, 112), 3);
    add_background_object(create_aquabrick3_691(768, 48), 3);
    add_background_object(create_aquabrick3_691(512, 112), 3);
    add_background_object(create_aquabrick3_691(640, 48), 3);
    add_background_object(create_aquabrick3_691(512, 48), 3);
    add_background_object(create_aquabrick21_683(1792, 432), 3);
    add_background_object(create_aquabrick14_693(1776, 496), 3);
    add_background_object(create_aquabrick21_683(1792, 560), 3);
    add_background_object(create_aquabrick14_693(1776, 560), 3);
    add_background_object(create_aquabrick14_693(1776, 624), 3);
    add_background_object(create_aquabrick3_691(2176, 304), 3);
    add_background_object(create_aquabrick3_691(1920, 304), 3);
    add_background_object(create_aquabrick3_691(2048, 304), 3);
    add_background_object(create_aquabrick3_691(1920, 240), 3);
    add_background_object(create_aquabrick3_691(1920, 176), 3);
    add_background_object(create_aquabrick3_691(1920, 112), 3);
    add_background_object(create_aquabrick3_691(2048, 240), 3);
    add_background_object(create_aquabrick3_691(2048, 176), 3);
    add_background_object(create_aquabrick3_691(2048, 112), 3);
    add_background_object(create_aquabrick3_691(2176, 240), 3);
    add_background_object(create_aquabrick3_691(2176, 176), 3);
    add_background_object(create_aquabrick3_691(2176, 112), 3);
    add_background_object(create_aquabrick3_691(896, 16), 3);
    add_background_object(create_aquabrick3_691(1024, 16), 3);
    add_background_object(create_aquabrick3_691(1152, 16), 3);
    add_background_object(create_aquabrick3_691(1280, 16), 3);
    add_background_object(create_aquabrick3_691(1408, 16), 3);
    add_background_object(create_aquabrick3_691(1664, 16), 3);
    add_background_object(create_aquabrick3_691(1792, 48), 3);
    add_background_object(create_aquabrick3_691(1536, 16), 3);
    add_background_object(create_aquabrick3_691(1920, 48), 3);
    add_background_object(create_aquabrick3_691(2048, 48), 3);
    add_background_object(create_aquabrick3_691(2176, 48), 3);
    add_background_object(create_aquabrick16_684(1016, 624), 3);
    add_background_object(create_aquabrick2_706(1024, 640), 3);
    add_background_object(create_atladder_708(1736, 640), 3);
    add_background_object(create_atladder_708(1736, 672), 3);
    add_background_object(create_atladder_708(1736, 704), 3);
    add_background_object(create_atladder_708(1736, 736), 3);
    add_background_object(create_atladder_708(1736, 768), 3);
    add_background_object(create_atladder_708(1736, 784), 3);
    add_background_object(create_aquabrick11_688(1728, 944), 3);
    add_background_object(create_aquabrick11_688(1088, 656), 3);
    add_background_object(create_aquabrick2_706(1088, 640), 3);
    add_background_object(create_aquabrick2_706(1536, 448), 3);
    add_background_object(create_aquabrick1_676(1536, 464), 3);
    add_background_object(create_aquabrick11_688(1728, 464), 3);
    add_background_object(create_aquabrick13_712(1520, 448), 3);
    add_background_object(create_aquabrick15_685(1520, 464), 3);
    add_background_object(create_aquabrick15_685(1776, 432), 3);
    add_background_object(create_aquabrick2_706(1728, 448), 3);
    add_background_object(create_aquabrick11_688(1600, 464), 3);
    add_background_object(create_aquabrick2_706(1600, 448), 3);
    add_background_object(create_aquabrick2_706(1664, 448), 3);
    add_background_object(create_aquabrick1_676(1664, 464), 3);
    add_background_object(create_lightray1_659(1464, 304), 3);
    add_background_object(create_lightray1_659(1448, 336), 3);
    add_background_object(create_lightray2_666(1432, 368), 3);
    add_background_object(create_lightray1_659(1272, 304), 3);
    add_background_object(create_lightray1_659(1224, 400), 3);
    add_background_object(create_lightray2_666(1208, 432), 3);
    add_background_object(create_lightray1_659(1256, 336), 3);
    add_background_object(create_lightray1_659(1240, 368), 3);
    add_background_object(create_aquabrick11_688(1528, 656), 3);
    add_background_object(create_aquabrick21_683(2368, 832), 3);
    add_background_object(create_aquabrick21_683(2368, 704), 3);
    add_background_object(create_aquabrick16_684(2616, 832), 3);
    add_background_object(create_aquabrick17_713(2624, 856), 3);
    add_background_object(create_aquabrick18_715(2624, 856), 3);
    add_background_object(create_aquabrick15_685(2352, 832), 3);
    add_background_object(create_aquabrick20_716(2176, 856), 3);
    add_background_object(create_aquabrick19_714(2176, 856), 3);
    add_background_object(create_aquabrick14_693(2352, 768), 3);
    add_background_object(create_aquabrick14_693(2352, 704), 3);
    add_background_object(create_aquabrick22_726(2368, 576), 3);
    add_background_object(create_aquabrick23_727(2496, 576), 3);
    add_background_object(create_aquabrick21_683(2752, 560), 3);
    add_background_object(create_aquabrick21_683(2752, 432), 3);
    add_background_object(create_aquabrick5_682(2048, 816), 3);
    add_background_object(create_aquabrick5_682(2048, 688), 3);
    add_background_object(create_aquabrick5_682(2048, 560), 3);
    add_background_object(create_aquabrick3_691(2624, 368), 3);
    add_background_object(create_aquabrick3_691(2624, 304), 3);
    add_background_object(create_aquabrick3_691(2624, 240), 3);
    add_background_object(create_aquabrick3_691(2752, 176), 3);
    add_background_object(create_aquabrick3_691(2624, 176), 3);
    add_background_object(create_aquabrick3_691(2496, 368), 3);
    add_background_object(create_aquabrick3_691(2496, 304), 3);
    add_background_object(create_aquabrick3_691(2496, 240), 3);
    add_background_object(create_aquabrick3_691(2368, 368), 3);
    add_background_object(create_aquabrick3_691(2368, 304), 3);
    add_background_object(create_aquabrick3_691(2368, 240), 3);
    add_background_object(create_aquabrick3_691(2496, 176), 3);
    add_background_object(create_aquabrick3_691(2368, 176), 3);
    add_background_object(create_aquabrick3_691(2304, 368), 3);
    add_background_object(create_aquabrick3_691(2304, 304), 3);
    add_background_object(create_aquabrick3_691(2304, 240), 3);
    add_background_object(create_aquabrick3_691(2304, 176), 3);
    add_background_object(create_aquabrick1_676(2688, 432), 3);
    add_background_object(create_aquabrick1_676(2624, 432), 3);
    add_background_object(create_aquabrick1_676(2560, 432), 3);
    add_background_object(create_aquabrick1_676(2496, 432), 3);
    add_background_object(create_aquabrick1_676(2432, 432), 3);
    add_background_object(create_aquabrick1_676(2368, 432), 3);
    add_background_object(create_aquabrick1_676(2304, 432), 3);
    add_background_object(create_aquabrick1_676(2240, 432), 3);
    add_background_object(create_aquabrick1_676(2176, 432), 3);
    add_background_object(create_aquabrick5_682(2048, 432), 3);
    add_background_object(create_aquabrick16_684(2168, 944), 3);
    add_background_object(create_aquabrick4_707(2168, 752), 3);
    add_background_object(create_aquabrick4_707(2168, 816), 3);
    add_background_object(create_aquabrick4_707(2168, 624), 3);
    add_background_object(create_aquabrick4_707(2168, 688), 3);
    add_background_object(create_aquabrick4_707(2168, 496), 3);
    add_background_object(create_aquabrick4_707(2168, 560), 3);
    add_background_object(create_aquabrick7_728(2352, 560), 3);
    add_background_object(create_aquabrick8_729(2496, 560), 3);
    add_background_object(create_aquabrick4_707(2168, 464), 3);
    add_background_object(create_aquabrick5_682(2752, 1088), 3);
    add_background_object(create_aquabrick3_691(2944, 1152), 3);
    add_background_object(create_aquabrick3_691(2816, 1152), 3);
    add_background_object(create_aquabrick14_693(2928, 1056), 3);
    add_background_object(create_aquabrick1_676(2880, 1120), 3);
    add_background_object(create_aquabrick6_709(2880, 1040), 3);
    add_background_object(create_aquabrick4_707(2872, 1056), 3);
    add_background_object(create_aquabrick2_706(2880, 1104), 3);
    add_background_object(create_aquabrick15_685(2736, 688), 3);
    add_background_object(create_aquabrick14_693(2736, 624), 3);
    add_background_object(create_aquabrick14_693(2736, 560), 3);
    add_background_object(create_aquabrick14_693(2736, 496), 3);
    add_background_object(create_aquabrick14_693(2736, 464), 3);
    add_background_object(create_aquabrick4_707(2168, 880), 3);
    add_background_object(create_aquabrick3_691(1920, 880), 3);
    add_background_object(create_aquabrick1_676(1408, 912), 3);
    add_background_object(create_aquabrick11_688(1344, 912), 3);
    add_background_object(create_aquabrick1_676(1664, 912), 3);
    add_background_object(create_aquabrick11_688(1408, 880), 3);
    add_background_object(create_aquabrick1_676(1728, 880), 3);
    add_background_object(create_aquabrick11_688(1664, 880), 3);
    add_background_object(create_aquabrick11_688(1728, 912), 3);
    add_background_object(create_aquabrick1_676(1344, 880), 3);
    add_background_object(create_aquabrick14_693(1328, 880), 3);
    add_background_object(create_aquabrick3_691(5824, 1424), 3);
    add_background_object(create_aquabrick3_691(5952, 1456), 3);
    add_background_object(create_aquabrick3_691(6080, 1488), 3);
    add_background_object(create_aquabrick3_691(5824, 1488), 3);
    add_background_object(create_aquabrick3_691(5952, 1520), 3);
    add_background_object(create_aquabrick3_691(6208, 1488), 3);
    add_background_object(create_aquabrick3_691(6080, 1552), 3);
    add_background_object(create_aquabrick3_691(6208, 1552), 3);
    add_background_object(create_aquabrick1_676(6400, 1456), 3);
    add_background_object(create_aquabrick1_676(6336, 1456), 3);
    add_background_object(create_aquabrick1_676(6272, 1456), 3);
    add_background_object(create_aquabrick1_676(6208, 1456), 3);
    add_background_object(create_aquabrick5_682(6336, 1488), 3);
    add_background_object(create_aquabrick4_707(6456, 1456), 3);
    add_background_object(create_aquabrick4_707(6456, 1520), 3);
    add_background_object(create_aquabrick21_683(7040, 1392), 3);
    add_background_object(create_aquabrick14_693(7024, 1456), 3);
    add_background_object(create_aquabrick14_693(7024, 1392), 3);
    add_background_object(create_aquabrick21_683(7360, 1456), 3);
    add_background_object(create_aquabrick21_683(7360, 1584), 3);
    add_background_object(create_aquabrick1_676(7168, 1456), 3);
    add_background_object(create_aquabrick1_676(7232, 1456), 3);
    add_background_object(create_aquabrick1_676(7296, 1456), 3);
    add_background_object(create_aquabrick3_691(5952, 1584), 3);
    add_background_object(create_aquabrick3_691(6080, 1616), 3);
    add_background_object(create_aquabrick3_691(6208, 1616), 3);
    add_background_object(create_aquabrick3_691(6080, 1680), 3);
    add_background_object(create_aquabrick3_691(6208, 1680), 3);
    add_background_object(create_aquabrick5_682(6336, 1616), 3);
    add_background_object(create_aquabrick4_707(6456, 1584), 3);
    add_background_object(create_aquabrick1_676(6464, 1648), 3);
    add_background_object(create_aquabrick1_676(6464, 1712), 3);
    add_background_object(create_aquabrick1_676(6528, 1712), 3);
    add_background_object(create_aquabrick1_676(6528, 1680), 3);
    add_background_object(create_aquabrick2_706(6464, 1632), 3);
    add_background_object(create_aquabrick2_706(6528, 1632), 3);
    add_background_object(create_aquabrick1_676(6592, 1648), 3);
    add_background_object(create_aquabrick1_676(6592, 1712), 3);
    add_background_object(create_aquabrick1_676(6656, 1680), 3);
    add_background_object(create_aquabrick2_706(6592, 1632), 3);
    add_background_object(create_aquabrick2_706(6656, 1632), 3);
    add_background_object(create_aquabrick11_688(6464, 1680), 3);
    add_background_object(create_aquabrick11_688(6528, 1648), 3);
    add_background_object(create_aquabrick11_688(6592, 1680), 3);
    add_background_object(create_aquabrick11_688(6656, 1648), 3);
    add_background_object(create_aquabrick1_676(6656, 1712), 3);
    add_background_object(create_aquabrick1_676(6720, 1648), 3);
    add_background_object(create_aquabrick1_676(6720, 1712), 3);
    add_background_object(create_aquabrick1_676(6784, 1680), 3);
    add_background_object(create_aquabrick2_706(6720, 1632), 3);
    add_background_object(create_aquabrick2_706(6784, 1632), 3);
    add_background_object(create_aquabrick11_688(6720, 1680), 3);
    add_background_object(create_aquabrick11_688(6784, 1648), 3);
    add_background_object(create_aquabrick1_676(6784, 1712), 3);
    add_background_object(create_aquabrick3_691(6208, 1744), 3);
    add_background_object(create_aquabrick3_691(6208, 1808), 3);
    add_background_object(create_aquabrick3_691(6336, 1744), 3);
    add_background_object(create_aquabrick3_691(6336, 1808), 3);
    add_background_object(create_aquabrick3_691(6464, 1744), 3);
    add_background_object(create_aquabrick3_691(6464, 1808), 3);
    add_background_object(create_aquabrick3_691(6592, 1744), 3);
    add_background_object(create_aquabrick3_691(6592, 1808), 3);
    add_background_object(create_aquabrick3_691(6720, 1744), 3);
    add_background_object(create_aquabrick3_691(6720, 1808), 3);
    add_background_object(create_aquabrick3_691(6848, 1744), 3);
    add_background_object(create_aquabrick3_691(6848, 1808), 3);
    add_background_object(create_aquabrick1_676(6848, 1712), 3);
    add_background_object(create_aquabrick11_688(6848, 1680), 3);
    add_background_object(create_aquabrick1_676(6912, 1680), 3);
    add_background_object(create_aquabrick1_676(6912, 1712), 3);
    add_background_object(create_aquabrickslope1_697(6848, 1632), 3);
    add_background_object(create_aquabrickslope2_698(6976, 1664), 3);
    add_background_object(create_aquabrick3_691(6976, 1744), 3);
    add_background_object(create_aquabrick3_691(6976, 1808), 3);
    add_background_object(create_aquabrick3_691(7104, 1744), 3);
    add_background_object(create_aquabrick3_691(7104, 1808), 3);
    add_background_object(create_aquabrick3_691(7232, 1744), 3);
    add_background_object(create_aquabrick3_691(7232, 1808), 3);
    add_background_object(create_aquabrick1_676(7040, 1584), 3);
    add_background_object(create_aquabrick1_676(7104, 1584), 3);
    add_background_object(create_aquabrick15_685(7024, 1584), 3);
    add_background_object(create_aquabrick14_693(7024, 1520), 3);
    add_background_object(create_aquabrick1_676(7168, 1584), 3);
    add_background_object(create_aquabrick3_691(7360, 1808), 3);
    add_background_object(create_aquabrick3_691(7360, 1744), 3);
    add_background_object(create_aquabrick1_676(7104, 1712), 3);
    add_background_object(create_aquabrick2_706(7104, 1696), 3);
    add_background_object(create_aquabrick1_676(7168, 1712), 3);
    add_background_object(create_aquabrick2_706(7168, 1696), 3);
    add_background_object(create_aquabrick1_676(7232, 1712), 3);
    add_background_object(create_aquabrick2_706(7232, 1696), 3);
    add_background_object(create_aquabrick1_676(7296, 1712), 3);
    add_background_object(create_aquabrick21_683(7360, 1616), 3);
    add_background_object(create_aquabrick6_709(7232, 1568), 3);
    add_background_object(create_aquabrick16_684(7224, 1584), 3);
    add_background_object(create_aquabrick14_693(7344, 1616), 3);
    add_background_object(create_aquabrick14_693(7344, 1552), 3);
    add_background_object(create_aquabrick14_693(7344, 1488), 3);
    add_background_object(create_aquabrick15_685(7344, 1680), 3);
    add_background_object(create_aquabrick2_706(7296, 1696), 3);
    add_background_object(create_aquabrick4_707(7160, 1488), 3);
    add_background_object(create_aquabrick16_684(7160, 1552), 3);
    add_background_object(create_aquabrick2_706(7168, 1568), 3);
    add_background_object(create_atcolumn_704(6592, 1392), 3);
    add_background_object(create_atcolumn_704(6592, 1488), 3);
    add_background_object(create_atsewerpipe9_668(6896, 1392), 3);
    add_background_object(create_atsewerpipe9_668(6768, 1392), 3);
    add_background_object(create_aquabrick3_691(4032, 304), 3);
    add_background_object(create_aquabrick3_691(4032, 240), 3);
    add_background_object(create_aquabrick1_676(4096, 368), 3);
    add_background_object(create_aquabrick1_676(4032, 368), 3);
    add_background_object(create_aquabrick3_691(4032, 176), 3);
    add_background_object(create_aquabrick3_691(4032, 112), 3);
    add_background_object(create_aquabrick2_706(4160, 544), 3);
    add_background_object(create_aquabrick2_706(4096, 544), 3);
    add_background_object(create_lightray2_666(4120, 464), 3);
    add_background_object(create_lightray1_659(4152, 400), 3);
    add_background_object(create_aquaplant1_670(3480, 496), 3);
    add_background_object(create_aquaplant1_670(4104, 512), 3);
    add_background_object(create_lightray1_659(4136, 432), 3);
    add_background_object(create_aquaplant2_694(1152, 576), 3);
    add_background_object(create_aquaplant1_670(1112, 608), 3);
    add_background_object(create_aquaplant1_670(1408, 832), 3);
    add_background_object(create_aquaplant1_670(1704, 832), 3);
    add_background_object(create_aquaplant1_670(1480, 608), 3);
    add_background_object(create_aquabrickarch2_690(2192, 464), 3);
    add_background_object(create_aquabrickarch1_669(2192, 592), 3);
    add_background_object(create_aquabrickarch1_669(2192, 656), 3);
    add_background_object(create_aquabrickarch1_669(2192, 720), 3);
    add_background_object(create_aquabrickarch1_669(2192, 784), 3);
    add_background_object(create_aquabrickarch1_669(2192, 848), 3);
    add_background_object(create_aquabrickarch1_669(2192, 912), 3);
    add_background_object(create_atwaterfaucet2_724(5248, 760), 3);
    add_background_object(create_atwaterfaucet_722(5200, 760), 3);
    add_background_object(create_aquabrick14_693(5296, 736), 3);
    add_background_object(create_aquabrick1_676(5184, 960), 3);
    add_background_object(create_aquabrick11_688(5120, 960), 3);
    add_background_object(create_aquabrick11_688(5248, 960), 3);
    add_background_object(create_aquabrick6_709(5184, 912), 3);
    add_background_object(create_aquabrick16_684(5176, 928), 3);
    add_background_object(create_aquabrick15_685(5232, 928), 3);
    add_background_object(create_aquabrick13_712(5232, 912), 3);
    add_background_object(create_aquabrick2_706(5184, 944), 3);
    add_background_object(create_watervent_725(5184, 944), 3);
    add_background_object(create_aquabrick14_693(3536, 880), 3);
    add_background_object(create_aquabrick4_707(3480, 880), 3);
    add_background_object(create_watervent_725(3488, 944), 3);
    add_background_object(create_aquabrick14_693(3536, 640), 3);
    add_background_object(create_aquabrick4_707(3480, 640), 3);
    add_background_object(create_watervent_725(3488, 704), 3);
    add_background_object(create_aquabrick14_693(3024, 1008), 3);
    add_background_object(create_aquabrick4_707(2968, 1008), 3);
    add_background_object(create_watervent_725(2976, 1072), 3);
    add_background_object(create_aquabrick14_693(4112, 816), 3);
    add_background_object(create_aquabrick4_707(4056, 816), 3);
    add_background_object(create_watervent_725(4064, 880), 3);
    add_background_object(create_aquabrick14_693(4368, 448), 3);
    add_background_object(create_aquabrick4_707(4312, 448), 3);
    add_background_object(create_watervent_725(4320, 512), 3);
    add_background_object(create_aquabrick14_693(4368, 384), 3);
    add_background_object(create_aquabrick4_707(4312, 384), 3);
    add_background_object(create_aquabrick14_693(6352, 960), 3);
    add_background_object(create_aquabrick4_707(6296, 960), 3);
    add_background_object(create_watervent_725(6304, 1024), 3);
    add_background_object(create_aquabrick14_693(6352, 736), 3);
    add_background_object(create_aquabrick4_707(6296, 736), 3);
    add_background_object(create_watervent_725(6304, 800), 3);
    add_background_object(create_aquabrick14_693(6352, 496), 3);
    add_background_object(create_aquabrick4_707(6296, 496), 3);
    add_background_object(create_watervent_725(6304, 560), 3);
    add_background_object(create_aquabrick14_693(6352, 432), 3);
    add_background_object(create_aquabrick4_707(6296, 432), 3);
    add_background_object(create_aquabrick24_730(1472, 880), 3);
    add_background_object(create_aquabrick25_731(1472, 864), 3);
    add_background_object(create_aquabrick13_712(1648, 864), 3);
    add_background_object(create_aquabrick14_693(1648, 880), 3);
    add_background_object(create_aquabrick15_685(1648, 944), 3);
    add_background_object(create_aquabrick3_691(2240, 1056), 3);
    add_background_object(create_aquabrick3_691(2368, 1056), 3);
    add_background_object(create_aquabrick3_691(2496, 1056), 3);
    add_background_object(create_aquabrick3_691(2624, 1056), 3);
    add_background_object(create_aquabrick11_688(3200, 1056), 3);
    add_background_object(create_aquabrick1_676(3264, 1056), 3);
    add_background_object(create_aquabrick6_709(8832, 752), 3);
    add_background_object(create_aquadirt_689(8896, 752), 3);
    add_background_object(create_aquadirt2_692(8920, 744), 3);
    add_background_object(create_aquabrick3_691(9216, 768), 3);
    add_background_object(create_aquabrick3_691(9216, 832), 3);
    add_background_object(create_aquabrick14_693(9200, 704), 3);
    add_background_object(create_aquabrick13_712(9200, 688), 3);
    add_background_object(create_aquabrick3_691(9344, 704), 3);
    add_background_object(create_aquabrick3_691(9344, 768), 3);
    add_background_object(create_aquabrick3_691(9344, 832), 3);
    add_background_object(create_aquadirt_689(9216, 688), 3);
    add_background_object(create_aquadirt2_692(9232, 680), 3);
    add_background_object(create_aquadirt_689(9280, 688), 3);
    add_background_object(create_aquadirt2_692(9304, 680), 3);
    add_background_object(create_aquabrick5_682(8064, 240), 3);
    add_background_object(create_aquabrick4_707(8184, 304), 3);
    add_background_object(create_aquabrick4_707(8184, 240), 3);
    add_background_object(create_aquabrick3_691(7936, 304), 3);
    add_background_object(create_aquabrick3_691(7936, 240), 3);
    add_background_object(create_aquabrick5_682(8064, 112), 3);
    add_background_object(create_aquabrick4_707(8184, 176), 3);
    add_background_object(create_aquabrick4_707(8184, 112), 3);
    add_background_object(create_aquabrick3_691(7936, 176), 3);
    add_background_object(create_aquabrick3_691(7936, 112), 3);
    add_background_object(create_aquabrick5_682(8064, -16), 3);
    add_background_object(create_aquabrick4_707(8184, 48), 3);
    add_background_object(create_aquabrick4_707(8184, -16), 3);
    add_background_object(create_aquabrick3_691(7936, 48), 3);
    add_background_object(create_aquabrick3_691(7936, -16), 3);
    add_background_object(create_aquabrick1_676(8384, 496), 3);
    add_background_object(create_aquabrick1_676(8320, 496), 3);
    add_background_object(create_aquabrick1_676(8256, 496), 3);
    add_background_object(create_aquabrick1_676(8192, 496), 3);
    add_background_object(create_aquabrick5_682(8064, 400), 3);
    add_background_object(create_aquabrick4_707(8184, 368), 3);
    add_background_object(create_aquabrick6_709(8448, 480), 3);
    add_background_object(create_aquabrick6_709(9216, 688), 3);
    add_background_object(create_aquadirt_689(8384, 480), 3);
    add_background_object(create_aquadirt_689(8320, 480), 3);
    add_background_object(create_aquadirt_689(8256, 480), 3);
    add_background_object(create_aquadirt_689(8192, 480), 3);
    add_background_object(create_aquabrick4_707(8184, 432), 3);
    add_background_object(create_aquabrick13_712(8432, 480), 3);
    add_background_object(create_aquadirt2_692(8368, 472), 3);
    add_background_object(create_aquadirt2_692(8304, 472), 3);
    add_background_object(create_aquadirt2_692(8224, 472), 3);
    add_background_object(create_aquabrick3_691(9472, 704), 3);
    add_background_object(create_aquabrick3_691(9472, 768), 3);
    add_background_object(create_aquabrick3_691(9472, 832), 3);
    add_background_object(create_aquadirt2_692(9432, 680), 3);
    add_background_object(create_atsewerpipe6_672(2416, 464), 3);
    add_background_object(create_atsewerpipe2_717(2416, 496), 3);
    add_background_object(create_atsewerpipe3_718(2448, 512), 3);
    add_background_object(create_atsewerpipe3_718(2480, 512), 3);
    add_background_object(create_atsewerpipe3_718(2512, 512), 3);
    add_background_object(create_atsewerpipe3_718(2544, 512), 3);
    add_background_object(create_atsewerpipe4_700(2576, 496), 3);
    add_background_object(create_atsewerpipe5_720(2592, 464), 3);
    add_background_object(create_atsewerpipe7_719(2624, 464), 3);
    add_background_object(create_atsewerpipe6_672(2640, 496), 3);
    add_background_object(create_atsewerpipe6_672(2640, 528), 3);
    add_background_object(create_atsewerpipe2_717(2640, 560), 3);
    add_background_object(create_atsewerpipe3_718(2704, 576), 3);
    add_background_object(create_atsewerpipe3_718(2704, 536), 3);
    add_background_object(create_atsewerpipe5_720(2672, 536), 3);
    add_background_object(create_atsewerpipe6_672(2672, 568), 3);
    add_background_object(create_atsewerpipe6_672(2672, 600), 3);
    add_background_object(create_atsewerpipe6_672(2672, 632), 3);
    add_background_object(create_atsewerpipe2_717(2672, 664), 3);
    add_background_object(create_atsewerpipe3_718(2704, 680), 3);
    add_background_object(create_atsewerpipe3_718(2672, 576), 3);
    add_background_object(create_aquadirt_689(1464, 640), 3);
    add_background_object(create_aquadirt_689(1528, 640), 3);
    add_background_object(create_aquadirt_689(1592, 640), 3);
    add_background_object(create_aquadirt_689(1656, 640), 3);
    add_background_object(create_aquaplant1_670(1664, 608), 3);
    add_background_object(create_aquaplant2_694(1624, 576), 3);
    add_background_object(create_aquadirt_689(3200, 880), 3);
    add_background_object(create_aquadirt_689(3264, 880), 3);
    add_background_object(create_aquadirt2_692(3200, 872), 3);
    add_background_object(create_aquadirt2_692(3264, 872), 3);
    add_background_object(create_aquabrick1_676(7488, 784), 3);
    add_background_object(create_aquabrick4_707(7544, 784), 3);
    add_background_object(create_aquabrick14_693(7472, 784), 3);
    add_background_object(create_aquabrick14_693(7472, 848), 3);
    add_background_object(create_aquabrick2_706(7424, 896), 3);
    add_background_object(create_aquabrick16_684(7544, 912), 3);
    add_background_object(create_aquadirt3_703(9344, 680), 3);
    add_background_object(create_aquadirt4_699(9472, 672), 3);
    add_background_object(create_aquadirt5_695(9728, 656), 3);
    add_background_object(create_aquadirt4_699(9600, 656), 3);
    add_background_object(create_aquadirt6_678(9600, 688), 3);
    add_background_object(create_aquadirt4_699(8960, 736), 3);
    add_background_object(create_aquabrick3_691(9600, 704), 3);
    add_background_object(create_aquabrick3_691(9728, 704), 3);
    add_background_object(create_aquabrick3_691(9600, 768), 3);
    add_background_object(create_aquabrick2_706(9632, 536), 3);
    add_background_object(create_aquabrick13_712(9616, 536), 3);
    add_background_object(create_aquabrick2_706(9696, 536), 3);
    add_background_object(create_aquabrick2_706(9760, 536), 3);
    add_background_object(create_aquabrick3_691(9728, 768), 3);
    add_background_object(create_aquabrick3_691(9600, 832), 3);
    add_background_object(create_aquabrick3_691(9728, 832), 3);
    add_background_object(create_aquadirt3_703(9856, 664), 3);
    add_background_object(create_aquabrick3_691(9856, 704), 3);
    add_background_object(create_aquabrick3_691(9856, 768), 3);
    add_background_object(create_aquabrick3_691(9856, 832), 3);
    add_background_object(create_aquabrick1_676(9888, 520), 3);
    add_background_object(create_aquabrick1_676(9952, 520), 3);
    add_background_object(create_aquabrick14_693(9872, 488), 3);
    add_background_object(create_aquabrick2_706(9824, 536), 3);
    add_background_object(create_aquadirt5_695(9984, 672), 3);
    add_background_object(create_aquabrick2_706(9888, 408), 3);
    add_background_object(create_aquabrick13_712(9872, 408), 3);
    add_background_object(create_aquabrick2_706(9952, 408), 3);
    add_background_object(create_aquabrick1_676(9952, 424), 3);
    add_background_object(create_aquabrick1_676(9888, 424), 3);
    add_background_object(create_aquabrick14_693(9872, 424), 3);
    add_background_object(create_aquabrick3_691(10016, 456), 3);
    add_background_object(create_aquabrick1_676(10016, 520), 3);
    add_background_object(create_aquabrick1_676(10080, 520), 3);
    add_background_object(create_aquabrick1_676(10016, 424), 3);
    add_background_object(create_aquabrick1_676(10080, 424), 3);
    add_background_object(create_aquabrick2_706(10016, 408), 3);
    add_background_object(create_aquabrick2_706(10080, 408), 3);
    add_background_object(create_atsewerpipe6_672(10016, 584), 3);
    add_background_object(create_atsewerpipe6_672(10016, 616), 3);
    add_background_object(create_atsewerpipe6_672(10016, 552), 3);
    add_background_object(create_aquabrick3_691(9984, 704), 3);
    add_background_object(create_aquabrick3_691(9984, 768), 3);
    add_background_object(create_aquadirt_689(10112, 688), 3);
    add_background_object(create_aquabrick6_709(10240, 688), 3);
    add_background_object(create_aquabrick13_712(10224, 688), 3);
    add_background_object(create_aquadirt2_692(10160, 680), 3);
    add_background_object(create_aquabrick5_682(10112, 704), 3);
    add_background_object(create_aquabrick4_707(10232, 704), 3);
    add_background_object(create_aquabrick6_709(10144, 408), 3);
    add_background_object(create_aquabrick4_707(10136, 424), 3);
    add_background_object(create_aquabrick4_707(10136, 488), 3);
    add_background_object(create_atsewerpipe2_717(10024, 552), 3);
    add_background_object(create_atsewerpipe3_718(10088, 568), 3);
    add_background_object(create_atsewerpipe3_718(10056, 568), 3);
    add_background_object(create_aquabrick13_712(9408, 240), 3);
    add_background_object(create_aquabrick6_709(9424, 240), 3);
    add_background_object(create_aquadirt5_695(9552, 224), 3);
    add_background_object(create_aquabrick6_709(9680, 240), 3);
    add_background_object(create_aquabrick13_712(9664, 240), 3);
    add_background_object(create_aquabrick1_676(9424, 256), 3);
    add_background_object(create_aquabrick1_676(9488, 256), 3);
    add_background_object(create_aquabrick1_676(9552, 256), 3);
    add_background_object(create_aquabrick1_676(9616, 256), 3);
    add_background_object(create_aquabrick16_684(9672, 256), 3);
    add_background_object(create_aquabrick15_685(9408, 256), 3);
    add_background_object(create_aquabrick5_682(9024, 896), 3);
    add_background_object(create_aquabrick1_676(9152, 896), 3);
    add_background_object(create_aquabrick1_676(9216, 896), 3);
    add_background_object(create_aquabrick1_676(9280, 896), 3);
    add_background_object(create_aquabrick1_676(9344, 896), 3);
    add_background_object(create_aquabrick1_676(9408, 896), 3);
    add_background_object(create_aquabrick1_676(9088, 992), 3);
    add_background_object(create_aquabrick1_676(8768, 992), 3);
    add_background_object(create_aquabrick1_676(8704, 992), 3);
    add_background_object(create_aquabrick4_707(9144, 928), 3);
    add_background_object(create_aquabrick1_676(8640, 992), 3);
    add_background_object(create_aquabrick1_676(8576, 992), 3);
    add_background_object(create_aquabrick1_676(8512, 992), 3);
    add_background_object(create_aquabrick2_706(8192, 1040), 3);
    add_background_object(create_aquabrick1_676(8192, 1056), 3);
    add_background_object(create_aquabrick13_712(8176, 1040), 3);
    add_background_object(create_aquabrickslope1_697(8256, 1040), 3);
    add_background_object(create_aquabrickslope2_698(8384, 1072), 3);
    add_background_object(create_aquabrick10_677(8480, 960), 3);
    add_background_object(create_aquabrick3_691(7424, 1520), 3);
    add_background_object(create_aquabrick3_691(7424, 1456), 3);
    add_background_object(create_aquabrick3_691(7424, 1392), 3);
    add_background_object(create_aquabrick23_727(8576, 1120), 3);
    add_background_object(create_aquabrick11_688(8512, 1120), 3);
    add_background_object(create_aquabrick2_706(8512, 1104), 3);
    add_background_object(create_aquabrick11_688(8576, 1120), 3);
    add_background_object(create_aquabrick8_729(8576, 1104), 3);
    add_background_object(create_aquabrick3_691(8320, 1184), 3);
    add_background_object(create_aquabrick3_691(8576, 1504), 3);
    add_background_object(create_aquabrick3_691(8320, 1248), 3);
    add_background_object(create_aquabrick3_691(8320, 1312), 3);
    add_background_object(create_aquabrick3_691(8320, 1376), 3);
    add_background_object(create_aquabrick3_691(8448, 1248), 3);
    add_background_object(create_aquabrick3_691(8448, 1312), 3);
    add_background_object(create_aquabrick3_691(8448, 1376), 3);
    add_background_object(create_aquabrick3_691(8576, 1568), 3);
    add_background_object(create_aquabrick3_691(8576, 1632), 3);
    add_background_object(create_aquabrick3_691(8448, 1440), 3);
    add_background_object(create_aquabrick3_691(8448, 1504), 3);
    add_background_object(create_aquabrick3_691(8448, 1568), 3);
    add_background_object(create_aquabrick3_691(8448, 1632), 3);
    add_background_object(create_aquabrickslope3_710(8896, 1296), 3);
    add_background_object(create_aquabrickslope4_711(9024, 1264), 3);
    add_background_object(create_aquabrickslope2_698(9280, 1296), 3);
    add_background_object(create_aquabrick16_684(9400, 1344), 3);
    add_background_object(create_aquabrick15_685(8880, 1344), 3);
    add_background_object(create_aquabrick1_676(8960, 1312), 3);
    add_background_object(create_aquabrick1_676(8896, 1312), 3);
    add_background_object(create_aquabrick11_688(8896, 1280), 3);
    add_background_object(create_aquabrick1_676(8960, 1280), 3);
    add_background_object(create_aquabrick14_693(8880, 1280), 3);
    add_background_object(create_aquabrick14_693(8880, 1216), 3);
    add_background_object(create_aquabrick14_693(8880, 1152), 3);
    add_background_object(create_aquabrick14_693(8880, 1088), 3);
    add_background_object(create_aquabrick14_693(8880, 1024), 3);
    add_background_object(create_aquabrick5_682(9024, 1024), 3);
    add_background_object(create_aquabrick5_682(9024, 1152), 3);
    add_background_object(create_aquabrick1_676(9024, 1280), 3);
    add_background_object(create_aquabrick1_676(9088, 1280), 3);
    add_background_object(create_aquabrick3_691(8896, 960), 3);
    add_background_object(create_aquabrick3_691(8896, 896), 3);
    add_background_object(create_aquabrick1_676(8832, 992), 3);
    add_background_object(create_aquabrick4_707(9144, 992), 3);
    add_background_object(create_aquabrick4_707(9144, 1056), 3);
    add_background_object(create_aquabrick4_707(9144, 1120), 3);
    add_background_object(create_aquabrick4_707(9144, 1184), 3);
    add_background_object(create_aquabrick16_684(9144, 1248), 3);
    add_background_object(create_aquabrickslope1_697(9152, 1264), 3);
    add_background_object(create_aquabrick6_709(9408, 1328), 3);
    add_background_object(create_aquabrick21_683(9600, 1152), 3);
    add_background_object(create_aquabrick14_693(9584, 1120), 3);
    add_background_object(create_aquabrick14_693(9584, 1184), 3);
    add_background_object(create_aquabrick3_691(9728, 1408), 3);
    add_background_object(create_aquabrick3_691(9728, 1472), 3);
    add_background_object(create_aquabrick3_691(9728, 1344), 3);
    add_background_object(create_aquabrick3_691(9728, 1600), 3);
    add_background_object(create_aquabrick3_691(9728, 1664), 3);
    add_background_object(create_aquabrick3_691(9728, 1536), 3);
    add_background_object(create_aquabrick1_676(9472, 896), 3);
    add_background_object(create_aquabrick1_676(9536, 896), 3);
    add_background_object(create_aquabrick1_676(9600, 896), 3);
    add_background_object(create_aquabrick1_676(9664, 896), 3);
    add_background_object(create_aquabrick1_676(9728, 896), 3);
    add_background_object(create_aquabrick1_676(9792, 896), 3);
    add_background_object(create_aquabrick1_676(9856, 896), 3);
    add_background_object(create_aquabrick1_676(9920, 896), 3);
    add_background_object(create_aquabrick1_676(9600, 1120), 3);
    add_background_object(create_aquabrick1_676(9664, 1120), 3);
    add_background_object(create_aquabrick2_706(9600, 1104), 3);
    add_background_object(create_aquabrick13_712(9584, 1104), 3);
    add_background_object(create_aquabrick2_706(9664, 1104), 3);
    add_background_object(create_aquabrick3_691(9728, 1216), 3);
    add_background_object(create_aquabrick3_691(9728, 1152), 3);
    add_background_object(create_aquabrick1_676(9728, 1120), 3);
    add_background_object(create_aquabrick2_706(9728, 1104), 3);
    add_background_object(create_aquabrick1_676(9368, 1152), 3);
    add_background_object(create_aquabrick1_676(9304, 1152), 3);
    add_background_object(create_aquabrick13_712(9288, 1136), 3);
    add_background_object(create_aquabrick2_706(9304, 1136), 3);
    add_background_object(create_aquabrick15_685(9288, 1152), 3);
    add_background_object(create_aquabrick2_706(9368, 1136), 3);
    add_background_object(create_aquabrick16_684(9424, 1152), 3);
    add_background_object(create_aquabrick6_709(9432, 1136), 3);
    add_background_object(create_aquabrick3_691(10624, 0), 3);
    add_background_object(create_aquabrick3_691(10624, 64), 3);
    add_background_object(create_aquabrick21_683(10496, 0), 3);
    add_background_object(create_aquabrick3_691(10624, 128), 3);
    add_background_object(create_aquabrick3_691(10624, 192), 3);
    add_background_object(create_aquabrick21_683(10496, 128), 3);
    add_background_object(create_aquabrick1_676(10368, 224), 3);
    add_background_object(create_aquabrick1_676(10432, 224), 3);
    add_background_object(create_aquabrick14_693(10480, 0), 3);
    add_background_object(create_aquabrick14_693(10480, 64), 3);
    add_background_object(create_aquabrick14_693(10480, 128), 3);
    add_background_object(create_aquabrick15_685(10480, 192), 3);
    add_background_object(create_aquabrick15_685(10352, 224), 3);
    add_background_object(create_aquabrick13_712(10352, 208), 3);
    add_background_object(create_aquabrick5_682(10112, 768), 3);
    add_background_object(create_aquabrick4_707(10232, 768), 3);
    add_background_object(create_aquabrick4_707(10232, 832), 3);
    add_background_object(create_aquabrick1_676(9984, 896), 3);
    add_background_object(create_aquabrick1_676(10048, 896), 3);
    add_background_object(create_aquabrick1_676(10112, 896), 3);
    add_background_object(create_aquabrick1_676(10176, 896), 3);
    add_background_object(create_aquabrick16_684(10232, 896), 3);
    add_background_object(create_aquabrick3_691(9984, 832), 3);
    add_background_object(create_aquabrick3_691(9856, 1280), 3);
    add_background_object(create_aquabrick3_691(9856, 1216), 3);
    add_background_object(create_aquabrick3_691(9856, 1152), 3);
    add_background_object(create_aquabrick1_676(9856, 1120), 3);
    add_background_object(create_aquabrick1_676(9920, 1120), 3);
    add_background_object(create_aquabrick2_706(9856, 1104), 3);
    add_background_object(create_aquabrick2_706(9920, 1104), 3);
    add_background_object(create_aquabrick3_691(9984, 1280), 3);
    add_background_object(create_aquabrick3_691(9984, 1216), 3);
    add_background_object(create_aquabrick3_691(9984, 1152), 3);
    add_background_object(create_aquabrick1_676(10048, 1120), 3);
    add_background_object(create_aquabrick2_706(10048, 1104), 3);
    add_background_object(create_aquabrick3_691(10112, 1280), 3);
    add_background_object(create_aquabrick3_691(10112, 1216), 3);
    add_background_object(create_aquabrick3_691(10112, 1152), 3);
    add_background_object(create_aquabrick1_676(10112, 1120), 3);
    add_background_object(create_aquabrick2_706(10112, 1104), 3);
    add_background_object(create_aquabrick6_709(9792, 1104), 3);
    add_background_object(create_aquabrick13_712(9840, 1104), 3);
    add_background_object(create_aquabrick15_685(9840, 1120), 3);
    add_background_object(create_aquabrick16_684(9784, 1120), 3);
    add_background_object(create_aquabrick6_709(9984, 1104), 3);
    add_background_object(create_aquabrick13_712(10032, 1104), 3);
    add_background_object(create_aquabrick15_685(10032, 1120), 3);
    add_background_object(create_aquabrick16_684(9976, 1120), 3);
    add_background_object(create_aquabrick2_706(9984, 1136), 3);
    add_background_object(create_aquabrick2_706(9792, 1136), 3);
    add_background_object(create_watervent_725(9792, 1136), 3);
    add_background_object(create_watervent_725(9984, 1136), 3);
    add_background_object(create_atwaterfaucet2_724(10256, 776), 3);
    add_background_object(create_aquabrick6_709(10176, 1104), 3);
    add_background_object(create_aquabrick16_684(10168, 1120), 3);
    add_background_object(create_aquabrick3_691(10240, 1280), 3);
    add_background_object(create_aquabrick3_691(10240, 1216), 3);
    add_background_object(create_aquabrick3_691(10240, 1152), 3);
    add_background_object(create_aquadirt5_695(10192, 1104), 3);
    add_background_object(create_aquabrick13_712(10304, 1120), 3);
    add_background_object(create_aquabrick6_709(10320, 1120), 3);
    add_background_object(create_aquabrick13_712(10368, 1120), 3);
    add_background_object(create_aquabrick6_709(10384, 1120), 3);
    add_background_object(create_aquabrick3_691(10368, 1280), 3);
    add_background_object(create_aquabrick3_691(10368, 1216), 3);
    add_background_object(create_aquabrick3_691(10368, 1152), 3);
    add_background_object(create_aquadirt_689(10496, 1136), 3);
    add_background_object(create_aquabrick3_691(10496, 1280), 3);
    add_background_object(create_aquabrick3_691(10496, 1216), 3);
    add_background_object(create_aquabrick3_691(10496, 1152), 3);
    add_background_object(create_aquadirt2_692(10560, 1128), 3);
    add_background_object(create_aquaplant1_670(8904, 720), 3);
    add_background_object(create_aquaplant2_694(9712, 592), 3);
    add_background_object(create_aquaplant1_670(9896, 632), 3);
    add_background_object(create_aquabrick3_691(10624, 1280), 3);
    add_background_object(create_aquabrick3_691(10624, 1216), 3);
    add_background_object(create_aquabrick3_691(10624, 1152), 3);
    add_background_object(create_aquabrick3_691(10752, 1280), 3);
    add_background_object(create_aquabrick3_691(10752, 1216), 3);
    add_background_object(create_aquabrick3_691(10752, 1152), 3);
    add_background_object(create_aquabrick3_691(9856, 1408), 3);
    add_background_object(create_aquabrick3_691(9856, 1344), 3);
    add_background_object(create_aquabrick3_691(9984, 1408), 3);
    add_background_object(create_aquabrick3_691(9984, 1344), 3);
    add_background_object(create_aquabrick3_691(10112, 1408), 3);
    add_background_object(create_aquabrick3_691(10112, 1344), 3);
    add_background_object(create_aquabrick3_691(10240, 1408), 3);
    add_background_object(create_aquabrick3_691(10240, 1344), 3);
    add_background_object(create_aquabrick3_691(10368, 1408), 3);
    add_background_object(create_aquabrick3_691(10368, 1344), 3);
    add_background_object(create_aquabrick3_691(10496, 1408), 3);
    add_background_object(create_aquabrick3_691(10496, 1344), 3);
    add_background_object(create_aquabrick3_691(10624, 1408), 3);
    add_background_object(create_aquabrick3_691(10624, 1344), 3);
    add_background_object(create_aquabrick3_691(10752, 1408), 3);
    add_background_object(create_aquabrick3_691(10752, 1344), 3);
    add_background_object(create_aquabrick3_691(9856, 1472), 3);
    add_background_object(create_aquabrick3_691(9984, 1472), 3);
    add_background_object(create_aquabrick3_691(10112, 1472), 3);
    add_background_object(create_aquabrick3_691(10240, 1472), 3);
    add_background_object(create_aquabrick3_691(10368, 1472), 3);
    add_background_object(create_aquabrick3_691(10496, 1472), 3);
    add_background_object(create_aquabrick3_691(10624, 1472), 3);
    add_background_object(create_aquabrick3_691(10752, 1472), 3);
    add_background_object(create_aquabrick3_691(9856, 1600), 3);
    add_background_object(create_aquabrick3_691(9856, 1536), 3);
    add_background_object(create_aquabrick3_691(9984, 1600), 3);
    add_background_object(create_aquabrick3_691(9984, 1536), 3);
    add_background_object(create_aquabrick3_691(10112, 1600), 3);
    add_background_object(create_aquabrick3_691(10112, 1536), 3);
    add_background_object(create_aquabrick3_691(10240, 1600), 3);
    add_background_object(create_aquabrick3_691(10240, 1536), 3);
    add_background_object(create_aquabrick3_691(10368, 1600), 3);
    add_background_object(create_aquabrick3_691(10368, 1536), 3);
    add_background_object(create_aquabrick3_691(10496, 1600), 3);
    add_background_object(create_aquabrick3_691(10496, 1536), 3);
    add_background_object(create_aquabrick3_691(10624, 1600), 3);
    add_background_object(create_aquabrick3_691(10624, 1536), 3);
    add_background_object(create_aquabrick3_691(10752, 1600), 3);
    add_background_object(create_aquabrick3_691(10752, 1536), 3);
    add_background_object(create_aquabrick3_691(7936, 1440), 3);
    add_background_object(create_aquabrick3_691(7808, 1440), 3);
    add_background_object(create_aquabrick3_691(8064, 1440), 3);
    add_background_object(create_aquabrick3_691(8192, 1440), 3);
    add_background_object(create_aquabrick3_691(7680, 1424), 3);
    add_background_object(create_aquabrick3_691(7552, 1424), 3);
    add_background_object(create_aquabrick3_691(8320, 1440), 3);
    add_background_object(create_aquabrick3_691(7936, 1504), 3);
    add_background_object(create_aquabrick3_691(7808, 1504), 3);
    add_background_object(create_aquabrick3_691(8064, 1504), 3);
    add_background_object(create_aquabrick3_691(8192, 1504), 3);
    add_background_object(create_aquabrick3_691(7680, 1488), 3);
    add_background_object(create_aquabrick3_691(7552, 1488), 3);
    add_background_object(create_aquabrick3_691(8320, 1504), 3);
    add_background_object(create_aquabrick3_691(7936, 1568), 3);
    add_background_object(create_aquabrick3_691(7808, 1568), 3);
    add_background_object(create_aquabrick3_691(8064, 1568), 3);
    add_background_object(create_aquabrick3_691(8192, 1568), 3);
    add_background_object(create_aquabrick3_691(7680, 1552), 3);
    add_background_object(create_aquabrick3_691(7552, 1552), 3);
    add_background_object(create_aquabrick3_691(8320, 1568), 3);
    add_background_object(create_aquabrick3_691(7936, 1632), 3);
    add_background_object(create_aquabrick3_691(7808, 1632), 3);
    add_background_object(create_aquabrick3_691(8064, 1632), 3);
    add_background_object(create_aquabrick3_691(8192, 1632), 3);
    add_background_object(create_aquabrick3_691(7680, 1616), 3);
    add_background_object(create_aquabrick3_691(7552, 1616), 3);
    add_background_object(create_aquabrick3_691(8320, 1632), 3);
    add_background_object(create_aquabrick3_691(7936, 1696), 3);
    add_background_object(create_aquabrick3_691(7808, 1696), 3);
    add_background_object(create_aquabrick3_691(8064, 1696), 3);
    add_background_object(create_aquabrick3_691(8192, 1696), 3);
    add_background_object(create_aquabrick3_691(7680, 1680), 3);
    add_background_object(create_aquabrick3_691(7552, 1680), 3);
    add_background_object(create_aquabrick3_691(8320, 1696), 3);
    add_background_object(create_aquabrick3_691(7936, 1760), 3);
    add_background_object(create_aquabrick3_691(7808, 1760), 3);
    add_background_object(create_aquabrick3_691(8064, 1760), 3);
    add_background_object(create_aquabrick3_691(8192, 1760), 3);
    add_background_object(create_aquabrick3_691(7680, 1744), 3);
    add_background_object(create_aquabrick3_691(7552, 1744), 3);
    add_background_object(create_aquabrick3_691(8320, 1760), 3);
    add_background_object(create_aquabrick3_691(8704, 1696), 3);
    add_background_object(create_aquabrick3_691(8576, 1696), 3);
    add_background_object(create_aquabrick3_691(8448, 1696), 3);
    add_background_object(create_aquabrick3_691(8704, 1760), 3);
    add_background_object(create_aquabrick3_691(8576, 1760), 3);
    add_background_object(create_aquabrick3_691(8448, 1760), 3);
    add_background_object(create_aquabrick3_691(7424, 1328), 3);
    add_background_object(create_aquabrick3_691(7424, 1264), 3);
    add_background_object(create_aquabrick3_691(7424, 1200), 3);
    add_background_object(create_aquabrick6_709(10368, 208), 3);
    add_background_object(create_aquadirt_689(10384, 208), 3);
    add_background_object(create_aquadirt_689(10416, 208), 3);
    add_background_object(create_aquadirt2_692(10400, 200), 3);
    add_background_object(create_lightray1_659(10344, 0), 3);
    add_background_object(create_lightray1_659(10328, 32), 3);
    add_background_object(create_lightray1_659(10312, 64), 3);
    add_background_object(create_lightray2_666(10296, 96), 3);
    add_background_object(create_lightray1_659(10104, 0), 3);
    add_background_object(create_lightray1_659(10088, 32), 3);
    add_background_object(create_lightray1_659(10072, 64), 3);
    add_background_object(create_lightray2_666(10024, 160), 3);
    add_background_object(create_lightray1_659(10056, 96), 3);
    add_background_object(create_lightray1_659(10040, 128), 3);
    add_background_object(create_lightray2_666(9888, 64), 3);
    add_background_object(create_lightray1_659(9920, 0), 3);
    add_background_object(create_lightray1_659(9904, 32), 3);
    add_background_object(create_lightray1_659(9792, 0), 3);
    add_background_object(create_lightray1_659(9776, 32), 3);
    add_background_object(create_lightray2_666(9728, 128), 3);
    add_background_object(create_lightray1_659(9760, 64), 3);
    add_background_object(create_lightray1_659(9744, 96), 3);
    add_background_object(create_lightray2_666(9512, 64), 3);
    add_background_object(create_lightray1_659(9544, 0), 3);
    add_background_object(create_lightray1_659(9528, 32), 3);
    add_background_object(create_lightray1_659(9200, 0), 3);
    add_background_object(create_lightray1_659(9184, 32), 3);
    add_background_object(create_lightray1_659(9168, 64), 3);
    add_background_object(create_lightray2_666(9120, 160), 3);
    add_background_object(create_lightray1_659(9152, 96), 3);
    add_background_object(create_lightray1_659(9136, 128), 3);
    add_background_object(create_lightray2_666(8984, 64), 3);
    add_background_object(create_lightray1_659(9016, 0), 3);
    add_background_object(create_lightray1_659(9000, 32), 3);
    add_background_object(create_lightray1_659(8888, 0), 3);
    add_background_object(create_lightray1_659(8872, 32), 3);
    add_background_object(create_lightray2_666(8824, 128), 3);
    add_background_object(create_lightray1_659(8856, 64), 3);
    add_background_object(create_lightray1_659(8840, 96), 3);
    add_background_object(create_aquabrick21_683(10496, 256), 3);
    add_background_object(create_aquabrick3_691(10624, 256), 3);
    add_background_object(create_aquabrick3_691(10624, 320), 3);
    add_background_object(create_aquabrick14_693(10480, 256), 3);
    add_background_object(create_aquabrick14_693(10480, 320), 3);
    add_background_object(create_aquabrickarch2_690(9408, 288), 3);
    add_background_object(create_aquabrickarch3_705(9520, 288), 3);
    add_background_object(create_aquabrickarch1_669(9408, 416), 3);
    add_background_object(create_aquabrickarch1_669(9408, 480), 3);
    add_background_object(create_aquabrickarch1_669(9408, 544), 3);
    add_background_object(create_aquabrickarch1_669(9408, 608), 3);
    add_background_object(create_aquabrickarch1_669(9648, 416), 3);
    add_background_object(create_aquabrickarch3_705(10080, 928), 3);
    add_background_object(create_aquabrickarch2_690(9168, 928), 3);
    add_background_object(create_aquabrickarch1_669(9168, 1056), 3);
    add_background_object(create_aquabrickarch1_669(9168, 1120), 3);
    add_background_object(create_aquabrickarch1_669(9168, 1184), 3);
    add_background_object(create_lightray1_659(9400, 928), 3);
    add_background_object(create_lightray1_659(9384, 960), 3);
    add_background_object(create_lightray2_666(9368, 992), 3);
    add_background_object(create_lightray1_659(9720, 928), 3);
    add_background_object(create_lightray1_659(9704, 960), 3);
    add_background_object(create_lightray2_666(9688, 992), 3);
    add_background_object(create_lightray1_659(9912, 928), 3);
    add_background_object(create_lightray1_659(9896, 960), 3);
    add_background_object(create_lightray2_666(9880, 992), 3);
    add_background_object(create_aquadirt4_699(10752, 1120), 3);
    add_background_object(create_aquadirt4_699(10880, 1104), 3);
    add_background_object(create_aquadirt3_703(10624, 1128), 3);
    add_background_object(create_aquadirt6_678(10880, 1136), 3);
    add_background_object(create_aquabrick3_691(10880, 1280), 3);
    add_background_object(create_aquabrick3_691(10880, 1216), 3);
    add_background_object(create_aquabrick3_691(10880, 1152), 3);
    add_background_object(create_aquabrick3_691(10880, 1408), 3);
    add_background_object(create_aquabrick3_691(10880, 1344), 3);
    add_background_object(create_aquabrick3_691(10880, 1472), 3);
    add_background_object(create_aquabrick3_691(10880, 1600), 3);
    add_background_object(create_aquabrick3_691(10880, 1536), 3);
    add_background_object(create_aquadirt4_699(11008, 1088), 3);
    add_background_object(create_aquabrick3_691(11008, 1280), 3);
    add_background_object(create_aquabrick3_691(11008, 1216), 3);
    add_background_object(create_aquabrick3_691(11008, 1152), 3);
    add_background_object(create_aquabrick3_691(11008, 1408), 3);
    add_background_object(create_aquabrick3_691(11008, 1344), 3);
    add_background_object(create_aquabrick3_691(11008, 1472), 3);
    add_background_object(create_aquabrick3_691(11008, 1600), 3);
    add_background_object(create_aquabrick3_691(11008, 1536), 3);
    add_background_object(create_aquabrick3_691(7936, 1824), 3);
    add_background_object(create_aquabrick3_691(7808, 1824), 3);
    add_background_object(create_aquabrick3_691(8064, 1824), 3);
    add_background_object(create_aquabrick3_691(8192, 1824), 3);
    add_background_object(create_aquabrick3_691(7680, 1808), 3);
    add_background_object(create_aquabrick3_691(7552, 1808), 3);
    add_background_object(create_aquabrick3_691(8320, 1824), 3);
    add_background_object(create_aquabrick3_691(8704, 1824), 3);
    add_background_object(create_aquabrick3_691(8576, 1824), 3);
    add_background_object(create_aquabrick3_691(8448, 1824), 3);
    add_background_object(create_aquabrick3_691(8960, 1728), 3);
    add_background_object(create_aquabrick3_691(9088, 1728), 3);
    add_background_object(create_aquabrick3_691(9216, 1728), 3);
    add_background_object(create_aquabrick3_691(8832, 1728), 3);
    add_background_object(create_aquabrick3_691(9344, 1728), 3);
    add_background_object(create_aquabrick3_691(9472, 1696), 3);
    add_background_object(create_aquabrick3_691(9600, 1696), 3);
    add_background_object(create_aquabrick3_691(9728, 1728), 3);
    add_background_object(create_aquabrick3_691(8960, 1792), 3);
    add_background_object(create_aquabrick3_691(9088, 1792), 3);
    add_background_object(create_aquabrick3_691(9216, 1792), 3);
    add_background_object(create_aquabrick3_691(8832, 1792), 3);
    add_background_object(create_aquabrick3_691(9344, 1792), 3);
    add_background_object(create_aquabrick3_691(9472, 1760), 3);
    add_background_object(create_aquabrick3_691(9600, 1760), 3);
    add_background_object(create_aquabrick3_691(9728, 1792), 3);
    add_background_object(create_aquabrick3_691(8960, 1856), 3);
    add_background_object(create_aquabrick3_691(9088, 1856), 3);
    add_background_object(create_aquabrick3_691(9216, 1856), 3);
    add_background_object(create_aquabrick3_691(8832, 1856), 3);
    add_background_object(create_aquabrick3_691(9344, 1856), 3);
    add_background_object(create_aquabrick3_691(9472, 1824), 3);
    add_background_object(create_aquabrick3_691(9600, 1824), 3);
    add_background_object(create_aquabrick3_691(9728, 1856), 3);
    add_background_object(create_aquabrick3_691(9856, 1664), 3);
    add_background_object(create_aquabrick3_691(9984, 1664), 3);
    add_background_object(create_aquabrick3_691(10112, 1664), 3);
    add_background_object(create_aquabrick3_691(10240, 1664), 3);
    add_background_object(create_aquabrick3_691(10368, 1664), 3);
    add_background_object(create_aquabrick3_691(10496, 1664), 3);
    add_background_object(create_aquabrick3_691(10624, 1664), 3);
    add_background_object(create_aquabrick3_691(10752, 1664), 3);
    add_background_object(create_aquabrick3_691(9856, 1792), 3);
    add_background_object(create_aquabrick3_691(9856, 1728), 3);
    add_background_object(create_aquabrick3_691(9984, 1792), 3);
    add_background_object(create_aquabrick3_691(9984, 1728), 3);
    add_background_object(create_aquabrick3_691(10112, 1792), 3);
    add_background_object(create_aquabrick3_691(10112, 1728), 3);
    add_background_object(create_aquabrick3_691(10240, 1792), 3);
    add_background_object(create_aquabrick3_691(10240, 1728), 3);
    add_background_object(create_aquabrick3_691(10368, 1792), 3);
    add_background_object(create_aquabrick3_691(10368, 1728), 3);
    add_background_object(create_aquabrick3_691(10496, 1792), 3);
    add_background_object(create_aquabrick3_691(10496, 1728), 3);
    add_background_object(create_aquabrick3_691(10624, 1792), 3);
    add_background_object(create_aquabrick3_691(10624, 1728), 3);
    add_background_object(create_aquabrick3_691(10752, 1792), 3);
    add_background_object(create_aquabrick3_691(10752, 1728), 3);
    add_background_object(create_aquabrick3_691(10880, 1664), 3);
    add_background_object(create_aquabrick3_691(10880, 1792), 3);
    add_background_object(create_aquabrick3_691(10880, 1728), 3);
    add_background_object(create_aquabrick3_691(11008, 1664), 3);
    add_background_object(create_aquabrick3_691(11008, 1792), 3);
    add_background_object(create_aquabrick3_691(11008, 1728), 3);
    add_background_object(create_aquabrick3_691(9856, 1856), 3);
    add_background_object(create_aquabrick3_691(9984, 1856), 3);
    add_background_object(create_aquabrick3_691(10112, 1856), 3);
    add_background_object(create_aquabrick3_691(10240, 1856), 3);
    add_background_object(create_aquabrick3_691(10368, 1856), 3);
    add_background_object(create_aquabrick3_691(10496, 1856), 3);
    add_background_object(create_aquabrick3_691(10624, 1856), 3);
    add_background_object(create_aquabrick3_691(10752, 1856), 3);
    add_background_object(create_aquabrick3_691(10880, 1856), 3);
    add_background_object(create_aquabrick3_691(11008, 1856), 3);
    add_background_object(create_aquatree1_702(10472, 992), 3);
    add_background_object(create_aquadirt3_703(11136, 1080), 3);
    add_background_object(create_aquabrick3_691(11136, 1280), 3);
    add_background_object(create_aquabrick3_691(11136, 1216), 3);
    add_background_object(create_aquabrick3_691(11136, 1408), 3);
    add_background_object(create_aquabrick3_691(11136, 1344), 3);
    add_background_object(create_aquabrick3_691(11136, 1472), 3);
    add_background_object(create_aquabrick3_691(11136, 1600), 3);
    add_background_object(create_aquabrick3_691(11136, 1536), 3);
    add_background_object(create_aquabrick3_691(11136, 1664), 3);
    add_background_object(create_aquabrick3_691(11136, 1792), 3);
    add_background_object(create_aquabrick3_691(11136, 1728), 3);
    add_background_object(create_aquabrick3_691(11136, 1856), 3);
    add_background_object(create_aquabrick1_676(10496, 384), 3);
    add_background_object(create_aquabrick1_676(10560, 384), 3);
    add_background_object(create_aquabrick15_685(10480, 384), 3);
    add_background_object(create_aquabrick1_676(10624, 384), 3);
    add_background_object(create_aquabrick1_676(10688, 384), 3);
    add_background_object(create_aquabrick21_683(10752, 640), 3);
    add_background_object(create_aquabrick3_691(10752, 256), 3);
    add_background_object(create_aquabrick3_691(10752, 192), 3);
    add_background_object(create_aquabrick3_691(11008, 192), 3);
    add_background_object(create_aquabrick3_691(10752, 128), 3);
    add_background_object(create_aquabrick3_691(11008, 128), 3);
    add_background_object(create_aquabrick3_691(10752, 64), 3);
    add_background_object(create_aquabrick3_691(11008, 64), 3);
    add_background_object(create_aquabrick3_691(10752, 0), 3);
    add_background_object(create_aquabrick3_691(11008, 0), 3);
    add_background_object(create_aquabrick14_693(10736, 608), 3);
    add_background_object(create_aquabrick1_676(10688, 736), 3);
    add_background_object(create_aquabrick15_685(10736, 672), 3);
    add_background_object(create_aquabrick11_688(10688, 704), 3);
    add_background_object(create_aquabrick11_688(10624, 736), 3);
    add_background_object(create_aquabrick1_676(10624, 704), 3);
    add_background_object(create_aquabrick1_676(10560, 736), 3);
    add_background_object(create_aquabrick11_688(10560, 704), 3);
    add_background_object(create_aquabrick14_693(10480, 704), 3);
    add_background_object(create_aquabrick13_712(10480, 688), 3);
    add_background_object(create_aquabrick6_709(10496, 688), 3);
    add_background_object(create_aquadirt_689(10672, 688), 3);
    add_background_object(create_aquadirt_689(10624, 688), 3);
    add_background_object(create_aquadirt_689(10512, 688), 3);
    add_background_object(create_aquadirt2_692(10520, 680), 3);
    add_background_object(create_aquadirt2_692(10664, 680), 3);
    add_background_object(create_aquabrick1_676(10560, 768), 3);
    add_background_object(create_aquabrick1_676(10624, 768), 3);
    add_background_object(create_aquabrick1_676(10688, 768), 3);
    add_background_object(create_aquabrick15_685(10480, 768), 3);
    add_background_object(create_aquabrick1_676(10752, 768), 3);
    add_background_object(create_aquabrick1_676(10816, 768), 3);
    add_background_object(create_aquabrick1_676(11008, 768), 3);
    add_background_object(create_aquabrick1_676(11072, 768), 3);
    add_background_object(create_aquabrick3_691(11008, 640), 3);
    add_background_object(create_aquabrick3_691(11008, 704), 3);
    add_background_object(create_aquabrick1_676(11008, 608), 3);
    add_background_object(create_aquabrick1_676(11072, 608), 3);
    add_background_object(create_aquabrick1_676(11136, 768), 3);
    add_background_object(create_aquabrick1_676(11200, 768), 3);
    add_background_object(create_aquabrick3_691(11136, 192), 3);
    add_background_object(create_aquabrick3_691(11136, 128), 3);
    add_background_object(create_aquabrick3_691(11136, 64), 3);
    add_background_object(create_aquabrick3_691(11136, 0), 3);
    add_background_object(create_aquabrick21_683(11136, 512), 3);
    add_background_object(create_aquabrick14_693(11120, 512), 3);
    add_background_object(create_aquabrick2_706(11008, 592), 3);
    add_background_object(create_aquabrick2_706(10816, 592), 3);
    add_background_object(create_aquabrick2_706(10752, 592), 3);
    add_background_object(create_aquabrick3_691(10880, 160), 3);
    add_background_object(create_aquabrick3_691(10880, 128), 3);
    add_background_object(create_aquabrick3_691(10880, 64), 3);
    add_background_object(create_aquabrick3_691(10880, 0), 3);
    add_background_object(create_aquabrick1_676(10880, 768), 3);
    add_background_object(create_aquabrick1_676(10944, 768), 3);
    add_background_object(create_aquabrick3_691(10880, 640), 3);
    add_background_object(create_aquabrick3_691(10880, 704), 3);
    add_background_object(create_aquabrick1_676(10880, 512), 3);
    add_background_object(create_aquabrick1_676(10944, 512), 3);
    add_background_object(create_aquabrick1_676(10880, 608), 3);
    add_background_object(create_aquabrick1_676(10944, 608), 3);
    add_background_object(create_aquabrick2_706(10944, 592), 3);
    add_background_object(create_aquabrick2_706(10880, 592), 3);
    add_background_object(create_aquabrick1_676(11328, 640), 3);
    add_background_object(create_aquabrick3_691(11264, 576), 3);
    add_background_object(create_aquabrick3_691(11264, 512), 3);
    add_background_object(create_aquabrick3_691(11264, 448), 3);
    add_background_object(create_aquabrick3_691(11264, 384), 3);
    add_background_object(create_aquabrick3_691(11264, 160), 3);
    add_background_object(create_aquabrick3_691(11264, 128), 3);
    add_background_object(create_aquabrick3_691(11264, 64), 3);
    add_background_object(create_aquabrick3_691(11264, 0), 3);
    add_background_object(create_aquabrick21_683(11136, 384), 3);
    add_background_object(create_aquabrick14_693(11120, 448), 3);
    add_background_object(create_aquabrick1_676(11136, 384), 3);
    add_background_object(create_aquabrick1_676(11200, 384), 3);
    add_background_object(create_aquabrick14_693(11120, 384), 3);
    add_background_object(create_aquabrick13_712(11120, 368), 3);
    add_background_object(create_aquabrick2_706(11136, 368), 3);
    add_background_object(create_aquabrick21_683(11264, 288), 3);
    add_background_object(create_aquabrick14_693(11248, 256), 3);
    add_background_object(create_aquabrick14_693(11248, 320), 3);
    add_background_object(create_aquabrick2_706(11200, 368), 3);
    add_background_object(create_aquabrick1_676(11200, 224), 3);
    add_background_object(create_aquabrick1_676(11136, 224), 3);
    add_background_object(create_aquabrick1_676(11072, 224), 3);
    add_background_object(create_aquabrick1_676(11008, 224), 3);
    add_background_object(create_aquabrick5_682(10880, 384), 3);
    add_background_object(create_aquabrick5_682(10880, 256), 3);
    add_background_object(create_aquabrick4_707(11000, 256), 3);
    add_background_object(create_aquabrick4_707(11000, 320), 3);
    add_background_object(create_aquabrick4_707(11000, 384), 3);
    add_background_object(create_aquabrick4_707(11000, 448), 3);
    add_background_object(create_aquabrick16_684(11000, 512), 3);
    add_background_object(create_aquabrick15_685(11120, 576), 3);
    add_background_object(create_aquabrick2_706(11072, 592), 3);
    add_background_object(create_atladder_708(11080, 368), 3);
    add_background_object(create_atladder_708(11080, 400), 3);
    add_background_object(create_atladder_708(11080, 432), 3);
    add_background_object(create_atladder_708(11080, 464), 3);
    add_background_object(create_atladder_708(11080, 496), 3);
    add_background_object(create_atsewerpipe3_718(11024, 312), 3);
    add_background_object(create_atsewerpipe4_700(11056, 296), 3);
    add_background_object(create_atsewerpipe5_720(11072, 264), 3);
    add_background_object(create_atsewerpipe3_718(11104, 264), 3);
    add_background_object(create_atsewerpipe3_718(11136, 264), 3);
    add_background_object(create_atsewerpipe3_718(11168, 264), 3);
    add_background_object(create_atsewerpipe3_718(11200, 264), 3);
    add_background_object(create_atsewerpipe3_718(11216, 264), 3);
    add_background_object(create_atsewerpipe6_672(11184, 256), 3);
    add_background_object(create_atsewerpipe2_717(11184, 288), 3);
    add_background_object(create_atsewerpipe3_718(11216, 304), 3);
    add_background_object(create_aquadirt_689(10576, 688), 3);
    add_background_object(create_aquadirt2_692(10584, 680), 3);
    add_background_object(create_switchbase_687(10560, 672), 3);
    add_background_object(create_aquabrickarch3_705(10560, 416), 3);
    add_background_object(create_aquabrick13_712(10736, 592), 3);
    add_background_object(create_aquabrick1_676(11392, 640), 3);
    add_background_object(create_aquabrick1_676(11456, 640), 3);
    add_background_object(create_aquabrick14_693(6896, 1104), 3);
    add_background_object(create_aquabrick4_707(6840, 1104), 3);
    add_background_object(create_watervent_725(6848, 1168), 3);
    add_background_object(create_aquabrick14_693(6896, 1040), 3);
    add_background_object(create_aquabrick4_707(6840, 1040), 3);
    add_background_object(create_aquabrick14_693(6896, 880), 3);
    add_background_object(create_aquabrick4_707(6840, 880), 3);
    add_background_object(create_watervent_725(6848, 944), 3);
    add_background_object(create_aquabrick14_693(6896, 816), 3);
    add_background_object(create_aquabrick4_707(6840, 816), 3);
    add_background_object(create_aquabrick14_693(6896, 656), 3);
    add_background_object(create_aquabrick4_707(6840, 656), 3);
    add_background_object(create_watervent_725(6848, 720), 3);
    add_background_object(create_aquabrick14_693(6896, 592), 3);
    add_background_object(create_aquabrick4_707(6840, 592), 3);
    add_background_object(create_aquabrick3_691(11264, 1280), 3);
    add_background_object(create_aquabrick3_691(11264, 1216), 3);
    add_background_object(create_aquabrick3_691(11264, 1408), 3);
    add_background_object(create_aquabrick3_691(11264, 1344), 3);
    add_background_object(create_aquabrick3_691(11264, 1472), 3);
    add_background_object(create_aquabrick3_691(11264, 1600), 3);
    add_background_object(create_aquabrick3_691(11264, 1536), 3);
    add_background_object(create_aquabrick3_691(11264, 1664), 3);
    add_background_object(create_aquabrick3_691(11264, 1792), 3);
    add_background_object(create_aquabrick3_691(11264, 1728), 3);
    add_background_object(create_aquabrick3_691(11264, 1856), 3);
    add_background_object(create_aquabrick3_691(11520, 1280), 3);
    add_background_object(create_aquabrick3_691(11520, 1216), 3);
    add_background_object(create_aquabrick3_691(11520, 1344), 3);
    add_background_object(create_aquabrick3_691(11520, 1472), 3);
    add_background_object(create_aquabrick3_691(11520, 1408), 3);
    add_background_object(create_aquabrick3_691(11520, 1536), 3);
    add_background_object(create_aquabrick3_691(11520, 1664), 3);
    add_background_object(create_aquabrick3_691(11520, 1600), 3);
    add_background_object(create_aquabrick3_691(11520, 1728), 3);
    add_background_object(create_aquabrick1_676(11264, 1024), 3);
    add_background_object(create_aquabrick1_676(11328, 1024), 3);
    add_background_object(create_aquabrick2_706(11264, 1008), 3);
    add_background_object(create_aquabrick13_712(11248, 1008), 3);
    add_background_object(create_aquabrick14_693(11248, 1024), 3);
    add_background_object(create_aquabrick2_706(11512, 880), 3);
    add_background_object(create_aquabrick2_706(11576, 880), 3);
    add_background_object(create_aquabrick6_709(11640, 880), 3);
    add_background_object(create_aquadirt_689(11840, 880), 3);
    add_background_object(create_aquadirt_689(11968, 880), 3);
    add_background_object(create_aquabrick3_691(11904, 896), 3);
    add_background_object(create_aquabrick3_691(11904, 960), 3);
    add_background_object(create_aquadirt2_692(11992, 872), 3);
    add_background_object(create_aquadirt4_699(12032, 864), 3);
    add_background_object(create_aquabrick3_691(12032, 896), 3);
    add_background_object(create_aquabrick3_691(12032, 960), 3);
    add_background_object(create_aquadirt5_695(12160, 864), 3);
    add_background_object(create_aquabrick3_691(12160, 896), 3);
    add_background_object(create_aquabrick3_691(12160, 960), 3);
    add_background_object(create_aquabrickarch3_705(11096, 800), 3);
    add_background_object(create_aquabrick5_682(11392, 512), 3);
    add_background_object(create_aquabrick5_682(11392, 384), 3);
    add_background_object(create_aquabrick5_682(11392, 256), 3);
    add_background_object(create_aquabrick5_682(11392, 128), 3);
    add_background_object(create_aquabrick5_682(11392, 0), 3);
    add_background_object(create_aquabrick16_684(11512, 640), 3);
    add_background_object(create_aquabrick4_707(11512, 576), 3);
    add_background_object(create_aquabrick4_707(11512, 512), 3);
    add_background_object(create_aquabrick4_707(11512, 448), 3);
    add_background_object(create_aquabrick4_707(11512, 384), 3);
    add_background_object(create_aquabrick4_707(11512, 320), 3);
    add_background_object(create_aquabrick4_707(11512, 256), 3);
    add_background_object(create_aquabrick4_707(11512, 192), 3);
    add_background_object(create_aquabrick4_707(11512, 128), 3);
    add_background_object(create_aquabrick4_707(11512, 64), 3);
    add_background_object(create_aquabrick4_707(11512, 0), 3);
    add_background_object(create_aquabrick2_706(11384, 880), 3);
    add_background_object(create_aquabrick2_706(11448, 880), 3);
    add_background_object(create_aquabrick3_691(11392, 1280), 3);
    add_background_object(create_aquabrick3_691(11392, 1216), 3);
    add_background_object(create_aquabrick3_691(11392, 1408), 3);
    add_background_object(create_aquabrick3_691(11392, 1344), 3);
    add_background_object(create_aquabrick3_691(11392, 1472), 3);
    add_background_object(create_aquabrick3_691(11392, 1600), 3);
    add_background_object(create_aquabrick3_691(11392, 1536), 3);
    add_background_object(create_aquabrick3_691(11392, 1664), 3);
    add_background_object(create_aquabrick3_691(11392, 1792), 3);
    add_background_object(create_aquabrick3_691(11392, 1728), 3);
    add_background_object(create_aquabrick3_691(11392, 1856), 3);
    add_background_object(create_aquabrick21_683(12416, 768), 3);
    add_background_object(create_aquabrick14_693(12400, 768), 3);
    add_background_object(create_aquabrick21_683(12416, 640), 3);
    add_background_object(create_aquabrick14_693(12400, 640), 3);
    add_background_object(create_aquabrick14_693(12400, 704), 3);
    add_background_object(create_aquabrick21_683(12416, 512), 3);
    add_background_object(create_aquabrick14_693(12400, 512), 3);
    add_background_object(create_aquabrick14_693(12400, 576), 3);
    add_background_object(create_aquabrick3_691(12416, 896), 3);
    add_background_object(create_aquabrick3_691(12416, 960), 3);
    add_background_object(create_aquabrick3_691(12288, 352), 3);
    add_background_object(create_aquabrick3_691(12288, 416), 3);
    add_background_object(create_aquabrick1_676(12352, 480), 3);
    add_background_object(create_aquabrick1_676(12288, 480), 3);
    add_background_object(create_aquabrick3_691(12160, 352), 3);
    add_background_object(create_aquabrick3_691(12160, 416), 3);
    add_background_object(create_aquabrick1_676(12224, 480), 3);
    add_background_object(create_aquabrick1_676(12160, 480), 3);
    add_background_object(create_aquabrick21_683(12032, 352), 3);
    add_background_object(create_aquabrick1_676(12096, 480), 3);
    add_background_object(create_aquabrick1_676(12032, 480), 3);
    add_background_object(create_aquabrick15_685(12016, 480), 3);
    add_background_object(create_aquabrick14_693(12016, 416), 3);
    add_background_object(create_aquabrick14_693(12016, 352), 3);
    add_background_object(create_aquabrick3_691(12416, 224), 3);
    add_background_object(create_aquabrick3_691(12416, 288), 3);
    add_background_object(create_aquabrick3_691(12288, 224), 3);
    add_background_object(create_aquabrick3_691(12288, 288), 3);
    add_background_object(create_aquabrick3_691(12160, 224), 3);
    add_background_object(create_aquabrick3_691(12160, 288), 3);
    add_background_object(create_aquabrick21_683(12032, 224), 3);
    add_background_object(create_aquabrick14_693(12016, 288), 3);
    add_background_object(create_aquabrick14_693(12016, 224), 3);
    add_background_object(create_aquabrick3_691(12416, 96), 3);
    add_background_object(create_aquabrick3_691(12416, 160), 3);
    add_background_object(create_aquabrick3_691(12288, 96), 3);
    add_background_object(create_aquabrick3_691(12288, 160), 3);
    add_background_object(create_aquabrick3_691(12160, 96), 3);
    add_background_object(create_aquabrick3_691(12160, 160), 3);
    add_background_object(create_aquabrick21_683(12032, 96), 3);
    add_background_object(create_aquabrick14_693(12016, 160), 3);
    add_background_object(create_aquabrick14_693(12016, 96), 3);
    add_background_object(create_aquabrick3_691(12416, -32), 3);
    add_background_object(create_aquabrick3_691(12416, 32), 3);
    add_background_object(create_aquabrick3_691(12288, -32), 3);
    add_background_object(create_aquabrick3_691(12288, 32), 3);
    add_background_object(create_aquabrick3_691(12160, -32), 3);
    add_background_object(create_aquabrick3_691(12160, 32), 3);
    add_background_object(create_aquabrick21_683(12032, -32), 3);
    add_background_object(create_aquabrick14_693(12016, 32), 3);
    add_background_object(create_aquabrick14_693(12016, -32), 3);
    add_background_object(create_aquabrick3_691(11904, 1024), 3);
    add_background_object(create_aquabrick3_691(12032, 1024), 3);
    add_background_object(create_aquabrick3_691(12160, 1024), 3);
    add_background_object(create_aquabrick3_691(12416, 1024), 3);
    add_background_object(create_aquabrick5_682(11136, 640), 3);
    add_background_object(create_aquabrick4_707(11256, 704), 3);
    add_background_object(create_aquabrick4_707(11256, 640), 3);
    add_background_object(create_aquabrick1_676(11264, 640), 3);
    add_background_object(create_aquabrick16_684(11256, 768), 3);
    add_background_object(create_aquabrick3_691(12288, 896), 3);
    add_background_object(create_aquabrick3_691(12288, 960), 3);
    add_background_object(create_aquabrick3_691(12288, 1024), 3);
    add_background_object(create_aquabrick13_712(11368, 880), 3);
    add_background_object(create_aquabrick2_706(11328, 1008), 3);
    add_background_object(create_aquadirt_689(12288, 880), 3);
    add_background_object(create_aquadirt_689(12352, 880), 3);
    add_background_object(create_aquabrick14_693(12400, 832), 3);
    add_background_object(create_aquadirt2_692(12320, 872), 3);
    add_background_object(create_aquabrick3_691(11648, 896), 3);
    add_background_object(create_aquabrick3_691(11648, 960), 3);
    add_background_object(create_aquabrick3_691(11776, 896), 3);
    add_background_object(create_aquabrick3_691(11776, 960), 3);
    add_background_object(create_aquabrick3_691(11648, 1024), 3);
    add_background_object(create_aquabrick3_691(11776, 1024), 3);
    add_background_object(create_aquadirt_689(11712, 880), 3);
    add_background_object(create_aquadirt2_692(11664, 872), 3);
    add_background_object(create_aquadirt2_692(11744, 872), 3);
    add_background_object(create_aquadirt2_692(11816, 872), 3);
    add_background_object(create_aquabrick1_676(11392, 1024), 3);
    add_background_object(create_aquabrick2_706(11392, 1008), 3);
    add_background_object(create_aquabrick1_676(11456, 1024), 3);
    add_background_object(create_aquabrick2_706(11456, 1008), 3);
    add_background_object(create_aquabrick6_709(11520, 1008), 3);
    add_background_object(create_aquabrick4_707(11512, 1024), 3);
    add_background_object(create_aquabrick14_693(11640, 896), 3);
    add_background_object(create_aquabrick14_693(11640, 960), 3);
    add_background_object(create_aquabrick14_693(11640, 1024), 3);
    add_background_object(create_atwaterfaucet4_723(11408, 1120), 3);
    add_background_object(create_atwaterfaucet4_723(11408, 1144), 3);
    add_background_object(create_aquabrick2_706(10896, 1152), 3);
    add_background_object(create_aquabrick2_706(10832, 1152), 3);
    add_background_object(create_aquabrick2_706(10768, 1152), 3);
    add_background_object(create_aquabrick2_706(10704, 1152), 3);
    add_background_object(create_aquabrick2_706(10640, 1152), 3);
    add_background_object(create_aquabrick2_706(10576, 1152), 3);
    add_background_object(create_aquabrick2_706(10512, 1152), 3);
    add_background_object(create_aquabrick2_706(10448, 1152), 3);
    add_background_object(create_aquabrick2_706(10384, 1152), 3);
    add_background_object(create_aquabrick2_706(10320, 1152), 3);
    add_background_object(create_aquabrick2_706(10256, 1152), 3);
    add_background_object(create_aquabrick2_706(10192, 1152), 3);
    add_background_object(create_aquabrick3_691(11648, 1216), 3);
    add_background_object(create_aquabrick3_691(11776, 1216), 3);
    add_background_object(create_aquabrick3_691(11904, 1216), 3);
    add_background_object(create_aquabrick2_706(10960, 1152), 3);
    add_background_object(create_aquabrick1_676(11392, 1056), 3);
    add_background_object(create_aquabrick1_676(11328, 1088), 3);
    add_background_object(create_aquabrick11_688(11328, 1056), 3);
    add_background_object(create_aquabrick11_688(11392, 1088), 3);
    add_background_object(create_aquabrick16_684(11512, 1088), 3);
    add_background_object(create_aquabrick15_685(11640, 1088), 3);
    add_background_object(create_watervent_725(10320, 1152), 3);
    add_background_object(create_aquaplant1_670(10280, 744), 3);
    add_background_object(create_aquadirt_689(11904, 880), 3);
    add_background_object(create_aquabrick3_691(11648, 1280), 3);
    add_background_object(create_aquabrick3_691(11776, 1280), 3);
    add_background_object(create_aquabrick3_691(11904, 1280), 3);
    add_background_object(create_aquabrick3_691(11648, 1344), 3);
    add_background_object(create_aquabrick3_691(11776, 1344), 3);
    add_background_object(create_aquabrick3_691(11904, 1344), 3);
    add_background_object(create_aquabrick3_691(12032, 1216), 3);
    add_background_object(create_aquabrick3_691(12160, 1216), 3);
    add_background_object(create_aquabrick3_691(12288, 1216), 3);
    add_background_object(create_aquabrick3_691(12032, 1280), 3);
    add_background_object(create_aquabrick3_691(12160, 1280), 3);
    add_background_object(create_aquabrick3_691(12288, 1280), 3);
    add_background_object(create_aquabrick3_691(12032, 1344), 3);
    add_background_object(create_aquabrick3_691(12160, 1344), 3);
    add_background_object(create_aquabrick3_691(12288, 1344), 3);
    add_background_object(create_aquabrick3_691(12416, 1216), 3);
    add_background_object(create_aquabrick3_691(12416, 1280), 3);
    add_background_object(create_aquabrick3_691(12416, 1344), 3);
    add_background_object(create_aquabrick1_676(11712, 1088), 3);
    add_background_object(create_aquabrick1_676(11776, 1088), 3);
    add_background_object(create_aquabrick1_676(11840, 1088), 3);
    add_background_object(create_aquabrick1_676(11904, 1088), 3);
    add_background_object(create_aquabrick1_676(11968, 1088), 3);
    add_background_object(create_aquabrick1_676(12032, 1088), 3);
    add_background_object(create_aquabrick1_676(12096, 1088), 3);
    add_background_object(create_aquabrick1_676(12160, 1088), 3);
    add_background_object(create_aquabrick1_676(12224, 1088), 3);
    add_background_object(create_aquabrick1_676(12288, 1088), 3);
    add_background_object(create_aquabrick1_676(12352, 1088), 3);
    add_background_object(create_aquabrick1_676(12416, 1088), 3);
    add_background_object(create_aquabrick1_676(12480, 1088), 3);
    add_background_object(create_aquabrick1_676(11264, 1184), 3);
    add_background_object(create_aquabrick1_676(11328, 1184), 3);
    add_background_object(create_aquabrick1_676(11392, 1184), 3);
    add_background_object(create_aquabrick1_676(11456, 1184), 3);
    add_background_object(create_aquabrick1_676(11520, 1184), 3);
    add_background_object(create_aquabrick1_676(11584, 1184), 3);
    add_background_object(create_aquabrick1_676(11648, 1184), 3);
    add_background_object(create_aquabrick1_676(11712, 1184), 3);
    add_background_object(create_aquabrick1_676(11776, 1184), 3);
    add_background_object(create_aquabrick1_676(11840, 1184), 3);
    add_background_object(create_aquabrick1_676(11904, 1184), 3);
    add_background_object(create_aquabrick1_676(11968, 1184), 3);
    add_background_object(create_aquabrick1_676(12032, 1184), 3);
    add_background_object(create_aquabrick1_676(12096, 1184), 3);
    add_background_object(create_aquabrick1_676(12160, 1184), 3);
    add_background_object(create_aquabrick1_676(12224, 1184), 3);
    add_background_object(create_aquabrick1_676(12288, 1184), 3);
    add_background_object(create_aquabrick1_676(12352, 1184), 3);
    add_background_object(create_aquabrick1_676(12416, 1184), 3);
    add_background_object(create_aquabrick1_676(12480, 1184), 3);
    add_background_object(create_aquabrick1_676(448, 816), 3);
    add_background_object(create_aquabrick1_676(384, 816), 3);
    add_background_object(create_aquabrick1_676(256, 752), 3);
    add_background_object(create_aquabrick1_676(320, 752), 3);
    add_background_object(create_aquabrick14_693(368, 784), 3);
    add_background_object(create_aquabrick1_676(11328, 1152), 3);
    add_background_object(create_aquabrick11_688(11328, 1120), 3);
    add_background_object(create_aquabrick14_693(11248, 1088), 3);
    add_background_object(create_aquabrick4_707(11384, 1120), 3);
    add_background_object(create_aquabrick1_676(11264, 1120), 3);
    add_background_object(create_aquabrick2_706(11024, 1152), 3);
    add_background_object(create_aquabrick2_706(11088, 1152), 3);
    add_background_object(create_aquabrick2_706(11152, 1152), 3);
    add_background_object(create_aquabrick2_706(11216, 1152), 3);
    add_background_object(create_aquabrick11_688(11264, 1152), 3);
    add_background_object(create_aquabrick3_691(11104, 1168), 3);
    add_background_object(create_atsewerpipe6_672(3832, 760), 3);
    add_background_object(create_atsewerpipe6_672(3880, 760), 3);
    add_background_object(create_aquabrick3_691(7552, 1296), 3);
    add_background_object(create_aquabrick3_691(7552, 1360), 3);
    add_background_object(create_aquabrick3_691(7552, 1168), 3);
    add_background_object(create_aquabrick3_691(7552, 1232), 3);
    add_background_object(create_aquabrick21_683(8192, 1216), 3);
    add_background_object(create_aquabrick14_693(8176, 1184), 3);
    add_background_object(create_aquabrick14_693(8176, 1248), 3);
    add_background_object(create_aquabrick2_706(8000, 1328), 3);
    add_background_object(create_aquabrick14_693(8176, 1312), 3);
    add_background_object(create_aquabrick6_709(8064, 1328), 3);
    add_background_object(create_aquabrick16_684(8056, 1344), 3);
    add_background_object(create_aquabrick2_706(8064, 1376), 3);
    add_background_object(create_aquabrick2_706(8128, 1376), 3);
    add_background_object(create_atsewerpipe6_672(8272, 984), 3);
    add_background_object(create_atsewerpipe6_672(8544, 1048), 3);
    add_background_object(create_atsewerpipe5_720(7968, 1088), 3);
    add_background_object(create_atsewerpipe3_718(8000, 1088), 3);
    add_background_object(create_atsewerpipe3_718(8064, 1088), 3);
    add_background_object(create_atsewerpipe4_700(8096, 1072), 3);
    add_background_object(create_atsewerpipe5_720(8112, 1040), 3);
    add_background_object(create_atsewerpipe3_718(8144, 1040), 3);
    add_background_object(create_atsewerpipe6_672(8040, 1088), 3);
    add_background_object(create_atsewerpipe6_672(8040, 1056), 3);
    add_background_object(create_atsewerpipe6_672(8040, 1024), 3);
    add_background_object(create_atsewerpipe5_720(8040, 992), 3);
    add_background_object(create_atsewerpipe3_718(8072, 992), 3);
    add_background_object(create_atsewerpipe3_718(8104, 992), 3);
    add_background_object(create_atsewerpipe3_718(8136, 992), 3);
    add_background_object(create_atsewerpipe4_700(8168, 976), 3);
    add_background_object(create_atsewerpipe3_718(8032, 1088), 3);
    add_background_object(create_atsewerpipe3_718(8848, 1280), 3);
    add_background_object(create_atsewerpipe3_718(8816, 1280), 3);
    add_background_object(create_atsewerpipe2_717(8784, 1264), 3);
    add_background_object(create_atsewerpipe6_672(8784, 1232), 3);
    add_background_object(create_atsewerpipe6_672(8784, 1200), 3);
    add_background_object(create_atsewerpipe6_672(8784, 1168), 3);
    add_background_object(create_atsewerpipe6_672(8784, 1136), 3);
    add_background_object(create_atsewerpipe7_719(8768, 1104), 3);
    add_background_object(create_atsewerpipe3_718(8736, 1104), 3);
    add_background_object(create_atsewerpipe2_717(8672, 1088), 3);
    add_background_object(create_atsewerpipe6_672(8672, 1056), 3);
    add_background_object(create_atsewerpipe6_672(8672, 1024), 3);
    add_background_object(create_atsewerpipe3_718(8848, 1144), 3);
    add_background_object(create_atsewerpipe3_718(8816, 1144), 3);
    add_background_object(create_atsewerpipe3_718(8784, 1144), 3);
    add_background_object(create_atsewerpipe3_718(8752, 1144), 3);
    add_background_object(create_atsewerpipe2_717(8720, 1128), 3);
    add_background_object(create_atsewerpipe6_672(8720, 1096), 3);
    add_background_object(create_atsewerpipe3_718(8704, 1104), 3);
    add_background_object(create_atsewerpipe5_720(8720, 1064), 3);
    add_background_object(create_atsewerpipe3_718(8752, 1064), 3);
    add_background_object(create_atsewerpipe3_718(8784, 1064), 3);
    add_background_object(create_atsewerpipe4_700(8816, 1048), 3);
    add_background_object(create_lightray1_659(8720, 1040), 3);
    add_background_object(create_lightray2_666(8704, 1072), 3);
    add_background_object(create_aquadirt2_692(11888, 872), 3);
    add_background_object(create_aquabrick3_691(12416, 1800), 3);
    add_background_object(create_aquabrick21_683(2368, 960), 3);
    add_background_object(create_aquabrick5_682(2496, 960), 3);
    add_background_object(create_aquabrick1_676(2688, 1056), 3);
    add_background_object(create_aquabrick1_676(2624, 1056), 3);
    add_background_object(create_aquabrick1_676(2304, 1056), 3);
    add_background_object(create_aquabrick1_676(2240, 1056), 3);
    add_background_object(create_aquabrick21_683(9600, 1408), 3);
    add_background_object(create_aquabrick1_676(9472, 1504), 3);
    add_background_object(create_aquabrick1_676(9536, 1504), 3);
    add_background_object(create_aquabrick5_682(8576, 1376), 3);
    add_background_object(create_aquabrick5_682(8576, 1408), 3);
    add_background_object(create_aquabrick1_676(8768, 1504), 3);
    add_background_object(create_aquabrick11_688(8704, 1504), 3);
    add_background_object(create_aquabrick2_706(8832, 1488), 3);
    add_background_object(create_aquabrick2_706(8768, 1488), 3);
    add_background_object(create_aquabrick4_707(8696, 1312), 3);
    add_background_object(create_aquabrick4_707(8696, 1376), 3);
    add_background_object(create_aquabrick4_707(8696, 1440), 3);
    add_background_object(create_aquabrick2_706(8704, 1488), 3);
    add_background_object(create_aquabrick32_732(8720, 1424), 3);
    add_background_object(create_aquabrick3_691(7680, 1376), 3);
    add_background_object(create_aquabrick11_688(3520, 1024), 3);
    add_background_object(create_aquabrick11_688(3456, 1056), 3);
    add_background_object(create_aquabrick1_676(3520, 1056), 3);
    add_background_object(create_aquabrick21_683(4032, 960), 3);
    add_background_object(create_aquabrick21_683(3968, 1088), 3);
    add_background_object(create_aquabrick3_691(4032, 1152), 3);
    add_background_object(create_aquabrick3_691(3904, 1152), 3);
    add_background_object(create_aquabrick1_676(3904, 1120), 3);
    add_background_object(create_aquabrick1_676(3648, 1120), 3);
    add_background_object(create_aquabrick5_682(3520, 1088), 3);
    add_background_object(create_aquabrick3_691(3584, 1152), 3);
    add_background_object(create_aquabrick3_691(3456, 1152), 3);
    add_background_object(create_athandlebar_733(3104, 656), 3);
    add_background_object(create_athandlebar_733(3232, 656), 3);
    add_background_object(create_aquabrick3_691(5952, 48), 3);
    add_background_object(create_aquabrick3_691(6080, 48), 3);
    add_background_object(create_aquabrick3_691(6208, 48), 3);
    add_background_object(create_aquabrick3_691(6336, 48), 3);
    add_background_object(create_aquabrick3_691(6464, 48), 3);
    add_background_object(create_aquabrick3_691(6592, 48), 3);
    add_background_object(create_aquabrick3_691(6720, 48), 3);
    add_background_object(create_aquabrick3_691(5824, 48), 3);
    add_background_object(create_aquabrick3_691(5696, 48), 3);
    add_background_object(create_aquabrick3_691(6848, 48), 3);
    add_background_object(create_aquabrick3_691(6976, 48), 3);
    add_background_object(create_aquabrick3_691(7104, 48), 3);
    add_background_object(create_aquabrick3_691(7232, 48), 3);
    add_background_object(create_aquabrick3_691(5952, -16), 3);
    add_background_object(create_aquabrick3_691(6080, -16), 3);
    add_background_object(create_aquabrick3_691(6208, -16), 3);
    add_background_object(create_aquabrick3_691(6336, -16), 3);
    add_background_object(create_aquabrick3_691(6464, -16), 3);
    add_background_object(create_aquabrick3_691(6592, -16), 3);
    add_background_object(create_aquabrick3_691(6720, -16), 3);
    add_background_object(create_aquabrick3_691(5824, -16), 3);
    add_background_object(create_aquabrick3_691(5696, -16), 3);
    add_background_object(create_aquabrick3_691(6848, -16), 3);
    add_background_object(create_aquabrick3_691(6976, -16), 3);
    add_background_object(create_aquabrick3_691(7104, -16), 3);
    add_background_object(create_aquabrick3_691(7232, -16), 3);
    add_object(create_objectdigspot_734(10544, 1104), 3);
    add_object(create_objectdigspot_734(10688, 656), 3);
    add_object(create_objectdigspot_734(10424, 176), 3);
    add_object(create_objectdigspot_734(10144, 656), 3);
    add_object(create_objectdigspot_734(8328, 448), 3);
    add_object(create_objectdigspot_734(3248, 848), 3);
    add_object(create_switchdoor_735(10352, 688), 3);
    add_object(create_switchdoor_735(10256, 688), 3);
    add_object(create_monitorwoodshield_325(8256, 448), 3);
    add_object(create_monitorrings_407(9312, 552), 3);
    add_object(create_playerstartingpoint_358(157, 45), 3);
    add_object(create_laddertop_357(-132, 991), 3);
    add_object(create_gimmickhangingmovingbar2_736(3816, 40), 3);
    add_object(create_gimmickhangingmovingsensor_737(3841, 69), 3);
    add_object(create_gimmickhangingmovingchasis_738(3840, 32), 3);
    add_object(create_jellyspring_739(5624, 1071), 3);
    add_object(create_gimmickhangingidlesensor_740(3137, 680), 3);
    add_object(create_objectcrystal_279(861, 890), 3);
    add_object(create_objectcrystal_279(781, 914), 3);
    add_object(create_objectcrystal_279(3677, 514), 3);
    add_object(create_objectcrystal_279(3845, 514), 3);
    add_object(create_objectcrystal_279(3757, 514), 3);
    add_object(create_objectcrystal_279(3717, 514), 3);
    add_object(create_objectcrystal_279(3141, 858), 3);
    add_object(create_objectcrystal_279(3133, 818), 3);
    add_object(create_objectcrystal_279(3141, 778), 3);
    add_object(create_objectcrystal_279(3133, 738), 3);
    add_object(create_objectcrystal_279(701, 954), 3);
    add_object(create_enemylimiter_350(4213, 834), 3);
    add_object(create_enemylimiter_350(4533, 834), 3);
    add_object(create_enemylimiter_350(4565, 834), 3);
    add_object(create_enemylimiter_350(4245, 834), 3);
    add_object(create_enemyslime_741(4503, 701), 3);
    add_object(create_enemylimiter_350(4589, 698), 3);
    add_object(create_enemylimiter_350(4557, 698), 3);
    add_object(create_enemylimiter_350(4373, 698), 3);
    add_object(create_enemylimiter_350(4405, 698), 3);
    add_object(create_enemyslime_741(4223, 837), 3);
    add_object(create_enemyfirefly_742(3743, 746), 3);
    add_object(create_monitorrings_407(4800, 704), 3);
    add_object(create_objectcrystal_279(4773, 714), 3);
    add_object(create_objectcrystal_279(4797, 682), 3);
    add_object(create_objectcrystal_279(4837, 682), 3);
    add_object(create_objectcrystal_279(4861, 714), 3);
    add_object(create_enemylimiter_350(4581, 866), 3);
    add_object(create_enemylimiter_350(4613, 866), 3);
    add_object(create_enemylimiter_350(5021, 866), 3);
    add_object(create_enemylimiter_350(5053, 866), 3);
    add_object(create_enemyslime_741(4935, 869), 3);
    add_object(create_laddertop_357(4060, 567), 3);
    add_object(create_monitorbomb_563(4752, 880), 3);
    add_object(create_objectpetal_302(3681, 1049), 3);
    add_object(create_objectpetal_302(3937, 1049), 3);
    add_object(create_objectpetal_302(3761, 1081), 3);
    add_object(create_objectpetal_302(3857, 1081), 3);
    add_object(create_breakableaquabrick_743(3848, 648), 3);
    add_object(create_breakableaquabrick_743(3848, 776), 3);
    add_object(create_breakableaquabrick_743(3848, 712), 3);
    add_object(create_objectcrystal_279(4469, 658), 3);
    add_object(create_objectcrystal_279(4509, 658), 3);
    add_object(create_objectcrystal_279(4429, 658), 3);
    add_object(create_yellowspringupright_433(5072, 880), 3);
    add_object(create_yellowspringupleft_432(5264, 712), 3);
    add_object(create_aquabrickplatform_744(5072, 608), 3);
    add_object(create_aquabrickplatform_744(5136, 608), 3);
    add_object(create_aquabrickplatform_744(5200, 608), 3);
    add_object(create_aquabrickplatform_744(5008, 608), 3);
    add_object(create_yellowspringright_435(5008, 576), 3);
    add_object(create_aquabrickplatform_744(5232, 608), 3);
    add_object(create_collapsingplatform_745(5568, 671), 3);
    add_object(create_axelplatformmaker1_746(6624, 352), 3);
    add_object(create_axelplatformmaker2_747(7168, 1360), 3);
    add_object(create_monitorwatershield_327(6824, 512), 3);
    add_object(create_waterjet_748(7776, 1104), 3);
    add_object(create_waterjet_748(7776, 1040), 3);
    add_object(create_waterjet_748(7776, 976), 3);
    add_object(create_waterjet_748(7776, 912), 3);
    add_object(create_objectcrystal_279(5341, 506), 3);
    add_object(create_objectcrystal_279(5365, 498), 3);
    add_object(create_objectcrystal_279(5389, 514), 3);
    add_object(create_objectcrystal_279(5421, 514), 3);
    add_object(create_objectcrystal_279(5445, 538), 3);
    add_object(create_objectcrystal_279(5477, 538), 3);
    add_object(create_objectcrystal_279(5493, 562), 3);
    add_object(create_objectcrystal_279(5517, 554), 3);
    add_object(create_objectcrystal_279(5541, 570), 3);
    add_object(create_objectpetal_302(5273, 585), 3);
    add_object(create_objectpetal_302(5201, 585), 3);
    add_object(create_objectpetal_302(5129, 585), 3);
    add_object(create_enemyfirefly_742(3799, 514), 3);
    add_object(create_enemyfirefly_742(8943, 706), 3);
    add_object(create_enemyfirefly_742(9063, 666), 3);
    add_object(create_enemyfirefly_742(9191, 626), 3);
    add_object(create_enemyfirefly_742(5119, 498), 3);
    add_object(create_jellyspring_739(152, 1167), 3);
    add_object(create_jellyspring_739(3128, 1039), 3);
    add_object(create_enemyfirefly_742(3399, 794), 3);
    add_object(create_objectpetal_302(2977, 953), 3);
    add_object(create_objectpetal_302(3041, 953), 3);
    add_object(create_enemyfirefly_742(5191, 482), 3);
    add_object(create_objectcrystal_279(3885, 514), 3);
    add_object(create_objectcrystal_279(3925, 514), 3);
    add_object(create_monitorcrystals_324(7440, 864), 3);
    add_object(create_breakableaquabrick_743(2160, 976), 3);
    add_object(create_breakableaquabrick_743(2096, 976), 3);
    add_object(create_breakableaquabrick_743(2032, 976), 3);
    add_object(create_breakableaquabrick_743(1968, 976), 3);
    add_object(create_enemyfirefly_742(1431, 778), 3);
    add_object(create_laddertop_357(1756, 663), 3);
    add_object(create_redspringupright_438(1040, 608), 3);
    add_object(create_breakableaquabrick_743(1904, 976), 3);
    add_object(create_breakableaquabrick_743(1840, 976), 3);
    add_object(create_yellowspringup_434(2896, 1088), 3);
    add_object(create_objectcrystal_279(7197, 1514), 3);
    add_object(create_objectcrystal_279(7197, 1554), 3);
    add_object(create_objectcrystal_279(7229, 1514), 3);
    add_object(create_objectcrystal_279(7229, 1554), 3);
    add_object(create_objectcrystal_279(7261, 1514), 3);
    add_object(create_objectcrystal_279(7261, 1554), 3);
    add_object(create_objectcrystal_279(7293, 1514), 3);
    add_object(create_objectcrystal_279(7293, 1554), 3);
    add_object(create_objectcrystal_279(7325, 1514), 3);
    add_object(create_objectcrystal_279(7325, 1554), 3);
    add_object(create_objectcrystal_279(7261, 1594), 3);
    add_object(create_objectcrystal_279(7261, 1634), 3);
    add_object(create_objectcrystal_279(7293, 1594), 3);
    add_object(create_objectcrystal_279(7293, 1634), 3);
    add_object(create_objectcrystal_279(7325, 1594), 3);
    add_object(create_objectcrystal_279(7325, 1634), 3);
    add_object(create_objectcrystal_279(7261, 1674), 3);
    add_object(create_objectcrystal_279(7293, 1674), 3);
    add_object(create_objectcrystal_279(7325, 1674), 3);
    add_object(create_objectcrystal_279(7165, 1634), 3);
    add_object(create_objectcrystal_279(7197, 1634), 3);
    add_object(create_objectcrystal_279(7229, 1634), 3);
    add_object(create_objectcrystal_279(7165, 1674), 3);
    add_object(create_objectcrystal_279(7197, 1674), 3);
    add_object(create_objectcrystal_279(7229, 1674), 3);
    add_object(create_objectcrystal_279(7101, 1634), 3);
    add_object(create_objectcrystal_279(7133, 1634), 3);
    add_object(create_objectcrystal_279(7101, 1674), 3);
    add_object(create_objectcrystal_279(7133, 1674), 3);
    add_object(create_redspringright_441(6480, 1600), 3);
    add_object(create_monitorcrystals_324(4160, 512), 3);
    add_object(create_waterjet_748(5216, 816), 3);
    add_object(create_waterjet_748(5216, 880), 3);
    add_object(create_waterjetback_749(3008, 1008), 3);
    add_object(create_objectcrystal_279(7685, 1002), 3);
    add_object(create_objectcrystal_279(7693, 962), 3);
    add_object(create_objectcrystal_279(7701, 922), 3);
    add_object(create_objectcrystal_279(7717, 882), 3);
    add_object(create_objectcrystal_279(7741, 850), 3);
    add_object(create_objectcrystal_279(1517, 850), 3);
    add_object(create_objectcrystal_279(1549, 866), 3);
    add_object(create_objectcrystal_279(1573, 890), 3);
    add_object(create_objectcrystal_279(1589, 922), 3);
    add_object(create_objectcrystal_279(1597, 954), 3);
    add_object(create_waterjetback_749(3520, 640), 3);
    add_object(create_waterjetback_749(3520, 880), 3);
    add_object(create_waterjetback_749(4096, 816), 3);
    add_object(create_waterjetback_749(4352, 384), 3);
    add_object(create_waterjetback_749(4352, 448), 3);
    add_object(create_waterjetback_749(6336, 432), 3);
    add_object(create_waterjetback_749(6336, 496), 3);
    add_object(create_waterjetback_749(6336, 736), 3);
    add_object(create_waterjetback_749(6336, 960), 3);
    add_object(create_aquatreeoverlay_750(8328, 386), 3);
    add_object(create_aquatreeoverlay_750(9328, 594), 3);
    add_object(create_gimmickhangingidlesensor_740(3265, 680), 3);
    add_object(create_objectcrystal_279(1293, 386), 3);
    add_object(create_objectcrystal_279(1333, 362), 3);
    add_object(create_objectcrystal_279(1373, 346), 3);
    add_object(create_objectcrystal_279(1413, 330), 3);
    add_object(create_objectcrystal_279(1453, 322), 3);
    add_object(create_objectcrystal_279(1501, 322), 3);
    add_object(create_objectcrystal_279(1541, 330), 3);
    add_object(create_objectcrystal_279(1581, 338), 3);
    add_object(create_objectcrystal_279(1621, 346), 3);
    add_object(create_objectcrystal_279(1661, 354), 3);
    add_object(create_objectcodec_354(1570, 421), 3);
    add_object(create_redspringleft_442(1760, 416), 3);
    add_object(create_redspringleft_442(1760, 384), 3);
    add_object(create_redspringleft_442(1760, 352), 3);
    add_object(create_redspringleft_442(1760, 320), 3);
    add_object(create_objectpetal_302(9057, 793), 3);
    add_object(create_objectpetal_302(9121, 793), 3);
    add_object(create_objectpetal_302(8993, 793), 3);
    add_object(create_objectpetal_302(9185, 793), 3);
    add_object(create_jellyspring_739(9456, 687), 3);
    add_object(create_objectwhispmaker_751(8984, 640), 3);
    add_object(create_objectwhispmaker_751(8624, 776), 3);
    add_object(create_objectwhispmaker_751(9432, 568), 3);
    add_object(create_objectwhispmaker_751(8384, 368), 3);
    add_object(create_objectwhispmaker_751(5952, 720), 3);
    add_object(create_objectwhispmaker_751(8688, 544), 3);
    add_object(create_objectwhispmaker_751(9584, 408), 3);
    add_object(create_enemyfirefly_742(9839, 610), 3);
    add_object(create_objectwhispmaker_751(9552, 120), 3);
    add_object(create_objectcrystal_279(9653, 218), 3);
    add_object(create_objectcrystal_279(9621, 210), 3);
    add_object(create_objectcrystal_279(9581, 202), 3);
    add_object(create_objectcrystal_279(9541, 202), 3);
    add_object(create_objectcrystal_279(9501, 210), 3);
    add_object(create_objectcrystal_279(9461, 218), 3);
    add_object(create_objectcrystal_279(9437, 306), 3);
    add_object(create_objectcrystal_279(9629, 306), 3);
    add_object(create_objectcrystal_279(9485, 306), 3);
    add_object(create_objectcrystal_279(9581, 306), 3);
    add_object(create_objectcrystal_279(9533, 306), 3);
    add_object(create_objectcrystal_279(9677, 306), 3);
    add_object(create_waterjet_748(9824, 1072), 3);
    add_object(create_waterjet_748(9824, 1008), 3);
    add_object(create_waterjet_748(9824, 944), 3);
    add_object(create_waterjet_748(10016, 1072), 3);
    add_object(create_waterjet_748(10016, 1008), 3);
    add_object(create_waterjet_748(10016, 944), 3);
    add_object(create_waterjet_748(10352, 832), 3);
    add_object(create_waterjet_748(10352, 896), 3);
    add_object(create_waterjet_748(10352, 960), 3);
    add_object(create_waterjet_748(10352, 1024), 3);
    add_object(create_waterjet_748(10352, 1088), 3);
    add_object(create_monitorcrate_409(7824, 1296), 3);
    add_object(create_monitorcrystals_324(7888, 1296), 3);
    add_object(create_monitorkeystone_562(7856, 1296), 3);
    add_object(create_objectwhispmaker_751(10328, 584), 3);
    add_object(create_objectwhispmaker_751(10288, 336), 3);
    add_object(create_enemyfirefly_742(10735, 1082), 3);
    add_object(create_enemyfirefly_742(10799, 994), 3);
    add_object(create_enemyfirefly_742(10863, 1066), 3);
    add_object(create_enemyfirefly_742(10927, 1010), 3);
    add_object(create_enemyfirefly_742(11015, 1042), 3);
    add_object(create_objectwhispmaker_751(10608, 1048), 3);
    add_object(create_objectwhispmaker_751(10864, 1016), 3);
    add_object(create_monitorkeystone_562(10392, 176), 3);
    add_object(create_objectcrystal_279(10565, 594), 3);
    add_object(create_objectcrystal_279(10605, 570), 3);
    add_object(create_objectcrystal_279(10645, 594), 3);
    add_object(create_objectcrystal_279(10141, 586), 3);
    add_object(create_objectcrystal_279(10213, 570), 3);
    add_object(create_objectcrystal_279(10253, 586), 3);
    add_object(create_objectcrystal_279(10181, 602), 3);
    add_object(create_objectcrystal_279(10517, 1034), 3);
    add_object(create_objectcrystal_279(10549, 1058), 3);
    add_object(create_objectcrystal_279(10589, 1018), 3);
    add_object(create_objectcrystal_279(10637, 1034), 3);
    add_object(create_objectcrystal_279(9437, 122), 3);
    add_object(create_objectcrystal_279(9485, 146), 3);
    add_object(create_objectcrystal_279(9405, 146), 3);
    add_object(create_objectcrystal_279(10685, 586), 3);
    add_object(create_laddertop_357(11100, 391), 3);
    add_object(create_objectcodec_354(11170, 301), 3);
    add_object(create_monitor1up_410(11216, 336), 3);
    add_object(create_switchpressureplate_752(10560, 672), 3);
    add_object(create_waterjetback_749(6880, 1104), 3);
    add_object(create_waterjetback_749(6880, 1040), 3);
    add_object(create_waterjetback_749(6880, 880), 3);
    add_object(create_waterjetback_749(6880, 816), 3);
    add_object(create_waterjetback_749(6880, 656), 3);
    add_object(create_waterjetback_749(6880, 592), 3);
    add_object(create_enemyslime_741(9727, 1093), 3);
    add_object(create_enemylimiter_350(9813, 1090), 3);
    add_object(create_enemylimiter_350(9781, 1090), 3);
    add_object(create_enemylimiter_350(9605, 1090), 3);
    add_object(create_enemylimiter_350(9637, 1090), 3);
    add_object(create_enemyslime_741(9783, 525), 3);
    add_object(create_enemylimiter_350(9877, 522), 3);
    add_object(create_enemylimiter_350(9845, 522), 3);
    add_object(create_enemylimiter_350(9637, 522), 3);
    add_object(create_enemylimiter_350(9669, 522), 3);
    add_object(create_enemyslime_741(10079, 397), 3);
    add_object(create_enemylimiter_350(10165, 394), 3);
    add_object(create_enemylimiter_350(10133, 394), 3);
    add_object(create_enemylimiter_350(9925, 394), 3);
    add_object(create_enemylimiter_350(9893, 394), 3);
    add_object(create_minibossironwormbase_753(11968, 896), 3);
    add_object(create_switchdoor2_754(11488, 896), 3);
    add_object(create_switchpressureplate_752(11592, 864), 3);
    add_object(create_cameratriggerboss_424(11704, 672), 3);
    add_object(create_breakableaquabrick_743(12480, 1120), 3);
    add_object(create_breakableaquabrick_743(12448, 1120), 3);
    add_object(create_yellowspringupleft_432(3816, 808), 3);
    add_object(create_yellowspringupright_433(3600, 656), 3);
    add_object(create_yellowspringup_434(3408, 1024), 3);
    add_object(create_yellowspringup_434(3376, 1024), 3);
    add_object(create_yellowspringup_434(3344, 1024), 3);
    add_object(create_yellowspringup_434(8080, 1360), 3);
    add_object(create_yellowspringup_434(8112, 1360), 3);
    add_object(create_yellowspringup_434(8144, 1360), 3);
    add_object(create_objectcrystal_279(8333, 1026), 3);
    add_object(create_objectcrystal_279(8365, 1042), 3);
    add_object(create_objectcrystal_279(8397, 1058), 3);
    add_object(create_objectcrystal_279(8429, 1074), 3);
    add_object(create_objectcrystal_279(8461, 1082), 3);
    add_object(create_objectcrystal_279(8493, 1082), 3);
    add_object(create_objectcrystal_279(8525, 1082), 3);
    add_object(create_objectcrystal_279(8301, 1018), 3);
    add_object(create_objectcrystal_279(9157, 1394), 3);
    add_object(create_objectcrystal_279(9117, 1394), 3);
    add_object(create_objectcrystal_279(9197, 1394), 3);
    add_object(create_objectcrystal_279(9077, 1402), 3);
    add_object(create_objectcrystal_279(9237, 1402), 3);
    add_object(create_objectcrystal_279(9037, 1418), 3);
    add_object(create_objectcrystal_279(9277, 1418), 3);
    add_object(create_objectcrystal_279(8997, 1442), 3);
    add_object(create_objectcrystal_279(9317, 1442), 3);
    add_object(create_objectcrystal_279(8957, 1458), 3);
    add_object(create_objectcrystal_279(9357, 1458), 3);
    add_object(create_objectpetal_302(9321, 1105), 3);
    add_object(create_objectpetal_302(9417, 1105), 3);
    add_object(create_objectpetal_302(9369, 1105), 3);
    add_object(create_monitorcrystals_324(12368, 848), 3);
    add_object(create_monitorcrystals_324(12336, 848), 3);
    add_object(create_monitorbomb_563(8784, 816), 3);
    add_object(create_objectcrystal_279(7821, 1034), 3);
    add_object(create_objectcrystal_279(7853, 1034), 3);
    add_object(create_objectcrystal_279(7885, 1034), 3);
    add_object(create_objectcrystal_279(7917, 1034), 3);
    add_object(create_objectcodec_354(6282, 1357), 3);
    add_object(create_objectdigspot_734(1552, 608), 3);
    add_object(create_monitorkeystone_562(7408, 864), 3);
    add_object(create_monitorkeystone_562(3504, 496), 3);
    add_object(create_monitorkeystone_562(6264, 1408), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_aquabrick21_683(10752, 384), 4);
    add_background_object(create_aquabrick1_676(6464, 400), 4);
    add_background_object(create_aquabrick11_688(6464, 368), 4);
    add_background_object(create_aquabrick1_676(6528, 368), 4);
    add_background_object(create_aquabrick1_676(6528, 400), 4);
    add_background_object(create_aquabrick1_676(6592, 400), 4);
    add_background_object(create_aquabrick11_688(6592, 368), 4);
    add_background_object(create_aquabrick1_676(6656, 368), 4);
    add_background_object(create_aquabrick1_676(6656, 400), 4);
    add_background_object(create_aquabrick1_676(6720, 400), 4);
    add_background_object(create_aquabrick11_688(6720, 368), 4);
    add_background_object(create_aquabrick1_676(7104, 1360), 4);
    add_background_object(create_aquabrick2_706(7104, 1344), 4);
    add_background_object(create_aquabrick1_676(7232, 1360), 4);
    add_background_object(create_aquabrick1_676(7168, 1360), 4);
    add_background_object(create_aquabrick2_706(7168, 1344), 4);
    add_background_object(create_aquabrick2_706(7232, 1344), 4);
    add_background_object(create_aquabrick3_691(7168, 1392), 4);
    add_background_object(create_aquabrick1_676(7040, 688), 4);
    add_background_object(create_aquabrick1_676(7104, 688), 4);
    add_background_object(create_aquabrick1_676(7168, 688), 4);
    add_background_object(create_aquabrick1_676(7232, 688), 4);
    add_background_object(create_aquabrick3_691(7040, 624), 4);
    add_background_object(create_aquabrick3_691(7168, 624), 4);
    add_background_object(create_aquabrick1_676(7296, 688), 4);
    add_background_object(create_aquabrick1_676(6976, 688), 4);
    add_background_object(create_aquabrick3_691(6912, 624), 4);
    add_background_object(create_aquabrick3_691(7296, 624), 4);
    add_background_object(create_aquabrick3_691(7040, 624), 4);
    add_background_object(create_aquabrick3_691(7168, 624), 4);
    add_background_object(create_aquabrick3_691(7040, 496), 4);
    add_background_object(create_aquabrick3_691(7040, 432), 4);
    add_background_object(create_aquabrick3_691(7040, 368), 4);
    add_background_object(create_aquabrick3_691(7040, 560), 4);
    add_background_object(create_aquabrick3_691(7168, 496), 4);
    add_background_object(create_aquabrick3_691(7168, 432), 4);
    add_background_object(create_aquabrick3_691(7168, 368), 4);
    add_background_object(create_aquabrick3_691(7168, 560), 4);
    add_background_object(create_aquabrick3_691(7296, 496), 4);
    add_background_object(create_aquabrick3_691(7296, 432), 4);
    add_background_object(create_aquabrick3_691(7296, 368), 4);
    add_background_object(create_aquabrick3_691(7296, 560), 4);
    add_background_object(create_aquabrick3_691(6976, 176), 4);
    add_background_object(create_aquabrick3_691(6976, 240), 4);
    add_background_object(create_aquabrick3_691(6976, 304), 4);
    add_background_object(create_aquabrick3_691(7104, 176), 4);
    add_background_object(create_aquabrick3_691(7104, 240), 4);
    add_background_object(create_aquabrick3_691(7104, 304), 4);
    add_background_object(create_aquabrick3_691(7232, 176), 4);
    add_background_object(create_aquabrick3_691(7232, 240), 4);
    add_background_object(create_aquabrick3_691(7232, 304), 4);
    add_background_object(create_aquabrick3_691(6976, 112), 4);
    add_background_object(create_aquabrick3_691(7104, 112), 4);
    add_background_object(create_aquabrick3_691(7232, 112), 4);
    add_background_object(create_aquabrick21_683(7040, 1392), 4);
    add_background_object(create_aquabrick1_676(6528, 1712), 4);
    add_background_object(create_aquabrick1_676(6528, 1680), 4);
    add_background_object(create_aquabrick2_706(6528, 1632), 4);
    add_background_object(create_aquabrick1_676(6592, 1648), 4);
    add_background_object(create_aquabrick1_676(6592, 1712), 4);
    add_background_object(create_aquabrick1_676(6656, 1680), 4);
    add_background_object(create_aquabrick2_706(6592, 1632), 4);
    add_background_object(create_aquabrick2_706(6656, 1632), 4);
    add_background_object(create_aquabrick11_688(6528, 1648), 4);
    add_background_object(create_aquabrick11_688(6592, 1680), 4);
    add_background_object(create_aquabrick11_688(6656, 1648), 4);
    add_background_object(create_aquabrick1_676(6656, 1712), 4);
    add_background_object(create_aquabrick1_676(6720, 1648), 4);
    add_background_object(create_aquabrick1_676(6720, 1712), 4);
    add_background_object(create_aquabrick2_706(6720, 1632), 4);
    add_background_object(create_aquabrick11_688(6720, 1680), 4);
    add_background_object(create_aquabrick3_691(6464, 1744), 4);
    add_background_object(create_aquabrick3_691(6464, 1808), 4);
    add_background_object(create_aquabrick3_691(6592, 1744), 4);
    add_background_object(create_aquabrick3_691(6592, 1808), 4);
    add_background_object(create_aquabrick3_691(6720, 1744), 4);
    add_background_object(create_aquabrick3_691(6720, 1808), 4);
    add_background_object(create_aquabrick1_676(10752, 544), 4);
    add_background_object(create_aquabrick1_676(10880, 544), 4);
    add_background_object(create_aquabrick1_676(10752, 576), 4);
    add_background_object(create_aquabrick1_676(10880, 576), 4);
    add_background_object(create_aquabrick1_676(10752, 512), 4);
    add_background_object(create_aquabrick1_676(10752, 608), 4);
    add_background_object(create_aquabrick1_676(10880, 608), 4);
    add_background_object(create_aquabrick14_693(10736, 544), 4);
    add_background_object(create_aquabrick4_707(10936, 544), 4);
    add_background_object(create_aquabrick1_676(10880, 512), 4);
    add_background_object(create_aquabrick1_676(10944, 608), 4);
    add_background_object(create_aquabrick2_706(10944, 592), 4);
    add_background_object(create_aquabrick1_676(10816, 544), 4);
    add_background_object(create_aquabrick1_676(10816, 576), 4);
    add_background_object(create_aquabrick1_676(10816, 608), 4);
    add_background_object(create_aquabrick1_676(10816, 512), 4);
    add_background_object(create_aquabrick11_688(10496, 736), 4);
    add_background_object(create_aquabrick1_676(10496, 704), 4);
    add_background_object(create_aquabrick1_676(10496, 768), 4);
    add_background_object(create_aquabrick14_693(10480, 704), 4);
    add_background_object(create_aquabrick15_685(10480, 768), 4);
    add_background_object(create_aquabrick14_693(10736, 480), 4);
    add_background_object(create_aquabrick14_693(10736, 416), 4);
    add_background_object(create_aquabrick2_706(11512, 880), 4);
    add_background_object(create_aquabrick2_706(11576, 880), 4);
    add_background_object(create_aquabrick6_709(11640, 880), 4);
    add_background_object(create_aquabrick2_706(11384, 880), 4);
    add_background_object(create_aquabrick2_706(11448, 880), 4);
    add_background_object(create_aquabrick13_712(11368, 880), 4);
    add_background_object(create_aquabrick3_691(6464, 304), 4);
    add_background_object(create_aquabrick3_691(6592, 304), 4);
    add_background_object(create_aquabrick3_691(6720, 304), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_755(-208, 392), 5);
    add_object(create_hazardspikesdown_756(-168, 392), 5);
    add_object(create_hazardspikesleft_757(-128, 392), 5);
    add_object(create_hazardspikesright_758(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(11920, 903), 5);
    add_object(create_cameralimitbossleft_421(11368, 784), 5);
    add_object(create_cameralimitbossright_422(12479, 792), 5);
    add_object(create_cameralimitbosstop_423(11920, 600), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_monitorkeystone_562(-216, 80), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_16, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_16, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_16, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_16, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_16, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_16, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_16, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_16, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_16, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_16, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_16, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_16, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_16, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_16, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_16, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_16, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_16, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_16, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_16, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_16, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_16, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_16, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_16, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_16, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_16, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_16, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_16, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_16, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_16, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_16, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_16, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_16, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_16, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_16, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_16, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_16, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_16, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_16, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_16, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_16, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_16, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_16, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_16, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_16, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_16, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_16, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_16, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_16, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_16, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_16, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_16, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_16, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_16, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_16, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1696_16 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1419_16 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1570_16 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1490_16 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1440_16 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1418_16 = loop_count;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1550_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1695_16 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    not_always_66_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1569_16 = loop_count;
    not_always_1697_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1436_16 = loop_count;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_1567_16 = loop_count;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1568_16 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_4000()
{
    // event 1404_17
    {
        if (!(group_main_engine_1)) goto event_1404_17_end;
        gimmickswingplatform_768_instances.clear_selection();
        for (ObjectIterator it(gimmickswingplatform_768_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        gimmickswingchain_767_instances.clear_selection();
        for (ObjectIterator it(gimmickswingchain_767_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        gimmickswingbase_766_instances.clear_selection();
        for (ObjectIterator it(gimmickswingbase_766_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1404_17_end: ;
}
void Frames::loop_order_swing_17()
{
    event_func_4000();
}
void Frames::event_func_4001()
{
    // event 1624_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1624_17_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        global_values->set(4, 10);
        global_values->set(5, ((Active*)get_instance(sign_351_instances))->get_x());
        global_values->set(6, ((Active*)get_instance(sign_351_instances))->get_y()-16);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        global_values->set(14, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(11));
    }
    event_1624_17_end: ;
}
void Frames::loop_next_act_17()
{
    event_func_4001();
}
void Frames::event_func_4002()
{
    // event 1820_17
    {
        if (!(group_main_engine_1)) goto event_1820_17_end;
        if (!((global_values->get(4)) < (10))) goto event_1820_17_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage0_ogg_121, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1820_17_end: ;
}
void Frames::event_func_4003()
{
    // event 1821_17
    {
        if (!(group_main_engine_1)) goto event_1821_17_end;
        if (!((global_values->get(4)) >= (10))) goto event_1821_17_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage0b_ogg_125, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1821_17_end: ;
}
void Frames::loop_play_music_5_17()
{
    event_func_4002();
    event_func_4003();
}
void Frames::event_func_4004()
{
    // event 1487_17
    {
        if (!(group_main_engine_1)) goto event_1487_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1487_17_end;
        if (!(test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_x(), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(3)-1))) goto event_1487_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1487_17_end: ;
}
void Frames::loop_gansekijr_floor_17()
{
    event_func_4004();
}
void Frames::event_func_4005()
{
    // event 1402_17
    {
        if (!(group_main_engine_1)) goto event_1402_17_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1402_17_end;
        FrameObject * single_instance_1402_17_0; single_instance_1402_17_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_26); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickswingchain_767(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1402_17_0 == NULL)
                    single_instance_1402_17_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1402_17_0))->alterables->values.set(0, ((Active*)get_single(qualifier_26, default_active_instance))->get_x()+0.5);
        ((Active*)((Active*)single_instance_1402_17_0))->alterables->values.set(1, ((Active*)get_single(qualifier_26, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1402_17_0))->alterables->values.set(2, (loop_spawn_swing_link_index+1)*16);
        ((Active*)((Active*)single_instance_1402_17_0))->alterables->values.set(3, ((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1402_17_0))->alterables->values.set(5, 0.04-0.015*get_min(get_max(((Active*)get_single(qualifier_26, default_active_instance))->get_action_y()-((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1), 0), 1));
    }
    event_1402_17_end: ;
}
void Frames::loop_spawn_swing_link_17()
{
    event_func_4005();
}
void Frames::event_func_4006()
{
    // event 1403_17
    {
        if (!(group_main_engine_1)) goto event_1403_17_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1403_17_end;
        FrameObject * single_instance_1403_17_0; single_instance_1403_17_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_26); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickswingplatform_768(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1403_17_0 == NULL)
                    single_instance_1403_17_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(0, ((Active*)get_single(qualifier_26, default_active_instance))->get_x()+0.5);
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(1, ((Active*)get_single(qualifier_26, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(2, (((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(0)+1)*16);
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(3, ((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(5, 0.04-0.015*get_min(get_max(((Active*)get_single(qualifier_26, default_active_instance))->get_action_y()-((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1), 0), 1));
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(6, ((Active*)single_instance_1403_17_0)->alterables->values.get(2)*2*3.14159);
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(8, ((Active*)single_instance_1403_17_0)->get_x());
        ((Active*)((Active*)single_instance_1403_17_0))->alterables->values.set(9, ((Active*)single_instance_1403_17_0)->get_y());
    }
    event_1403_17_end: ;
}
void Frames::loop_spawn_swing_platform_17()
{
    event_func_4006();
}
void Frames::event_func_4007()
{
    // event 1401_17
    {
        if (!(group_main_engine_1)) goto event_1401_17_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1401_17_end;
        FrameObject * single_instance_1401_17_0; single_instance_1401_17_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_26); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickswingbase_766(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1401_17_0 == NULL)
                    single_instance_1401_17_0 = new_obj;
            }
        }
    }
    event_1401_17_end: ;
}
void Frames::loop_spawn_swing_base_17()
{
    event_func_4007();
}
void Frames::event_func_4008()
{
    // event 1400_17
    {
        if (!(group_main_engine_1)) goto event_1400_17_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1400_17_end;
        {
            loop_spawn_swing_base_running = true;
            int times = int(1);
            loop_spawn_swing_base_index = 0;
            while (loop_spawn_swing_base_index < times) {
                loop_spawn_swing_base_17();
                if (!loop_spawn_swing_base_running) break;
                loop_spawn_swing_base_index++;
            }
        }
        {
            loop_spawn_swing_link_running = true;
            int times = int(((Active*)get_qualifier(qualifier_26, default_active_instance))->alterables->values.get(0));
            loop_spawn_swing_link_index = 0;
            while (loop_spawn_swing_link_index < times) {
                loop_spawn_swing_link_17();
                if (!loop_spawn_swing_link_running) break;
                loop_spawn_swing_link_index++;
            }
        }
        {
            loop_spawn_swing_platform_running = true;
            int times = int(1);
            loop_spawn_swing_platform_index = 0;
            while (loop_spawn_swing_platform_index < times) {
                loop_spawn_swing_platform_17();
                if (!loop_spawn_swing_platform_running) break;
                loop_spawn_swing_platform_index++;
            }
        }
    }
    event_1400_17_end: ;
}
void Frames::loop_spawn_swing_17()
{
    event_func_4008();
}
void Frames::loop_wrapper_sound_kick1_17(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_17(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_17(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_17(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_17(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
