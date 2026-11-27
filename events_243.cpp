#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19321()
{
    // event 1653_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1653_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1653_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1653_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
    }
    event_1653_83_end: ;
}
void Frames::event_func_19322()
{
    // event 1654_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1654_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()+80))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1654_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1654_83_end: ;
}
void Frames::event_func_19323()
{
    // event 1655_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1655_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1655_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1655_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(17);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
    }
    event_1655_83_end: ;
}
void Frames::event_func_19324()
{
    // event 1656_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1656_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1656_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+100))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1656_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1656_83_end: ;
}
void Frames::event_func_19325()
{
    // event 1657_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1657_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1657_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1657_83_end: ;
}
void Frames::event_func_19326()
{
    // event 1658_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1658_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1658_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1658_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(4952, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+8));
    }
    event_1658_83_end: ;
}
void Frames::event_func_19327()
{
    // event 1659_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1659_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1659_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (300))) goto event_1659_83_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1659_83_end: ;
}
void Frames::event_func_19328()
{
    // event 1660_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1660_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1660_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1660_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1660_83_end: ;
}
void Frames::event_func_19329()
{
    // event 1661_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1661_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1661_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1661_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1661_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3000);
        }
    }
    event_1661_83_end: ;
}
void Frames::event_func_19330()
{
    // event 1662_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1662_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1662_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1662_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1662_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 5892);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcsgmerc_4021_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcsgmerc_4021(5863, 1639), 3);
            npcsgmerc_4021_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcsgmerc_4021(6163, 1639), 3);
            npcsgmerc_4021_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcsgmerc_4021(5903, 1639), 3);
            npcsgmerc_4021_instances.add_back();
        }
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->set_direction(16);
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 400);
        }
    }
    event_1662_83_end: ;
}
void Frames::event_func_19331()
{
    // event 1663_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1663_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1663_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+8);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1663_83_end: ;
}
void Frames::event_func_19332()
{
    // event 1664_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1664_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1664_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1664_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_direction(17);
        }
        spread_value(npcsgmerc_4021_instances, 7, 0);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)*5);
        }
    }
    event_1664_83_end: ;
}
void Frames::event_func_19333()
{
    // event 1665_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1665_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1665_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1665_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1665_83_end: ;
}
void Frames::event_func_19334()
{
    // event 1666_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1666_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1666_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1666_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
    }
    event_1666_83_end: ;
}
void Frames::event_func_19335()
{
    // event 1667_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1667_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1667_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1667_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1667_83_end: ;
}
void Frames::event_func_19336()
{
    // event 1668_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1668_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1668_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(5790, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-2));
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1668_83_end: ;
}
void Frames::event_func_19337()
{
    // event 1669_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1669_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1669_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (0))) goto event_1669_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (180))) goto event_1669_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1669_83_end: ;
}
void Frames::event_func_19338()
{
    // event 1670_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1670_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1670_83_end;
        FrameObject * single_instance_1670_83_0; single_instance_1670_83_0 = NULL;
        // select single: true false false
        bosschopperbars_2212_instances.clear_selection();
        for (ObjectIterator p_it(bosschopperbars_2212_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2122(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1670_83_0 == NULL)
                    single_instance_1670_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1670_83_0))->set_direction(20);
        ((Active*)((Active*)single_instance_1670_83_0))->alterables->values.set(5, -1);
        ((Active*)((Active*)single_instance_1670_83_0))->get_movement()->set_speed(50);
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 10);
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1670_83_end: ;
}
void Frames::event_func_19339()
{
    // event 1671_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1671_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1671_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
    }
    event_1671_83_end: ;
}
void Frames::event_func_19340()
{
    // event 1673_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1673_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1673_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1673_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->force_animation(10);
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1673_83_end: ;
}
void Frames::event_func_19341()
{
    // event 1674_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1674_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1674_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1674_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (260))) goto event_1674_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_1674_83_end: ;
}
void Frames::event_func_19342()
{
    // event 1675_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1675_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1675_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (260))) goto event_1675_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_1675_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(5660);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1675_83_end: ;
}
void Frames::event_func_19343()
{
    // event 1676_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1676_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1676_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (260))) goto event_1676_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (400))) goto event_1676_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+1, 128));
        }
    }
    event_1676_83_end: ;
}
void Frames::event_func_19344()
{
    // event 1677_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1677_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1677_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (260+128))) goto event_1677_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1677_83_end: ;
}
void Frames::event_func_19345()
{
    // event 1678_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1678_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1678_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (360))) goto event_1678_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_direction(17);
        }
        spread_value(npcsgmerc_4021_instances, 7, 0);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)*5);
        }
    }
    event_1678_83_end: ;
}
void Frames::event_func_19346()
{
    // event 1680_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1680_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1680_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (400))) goto event_1680_83_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1680_83_end: ;
}
void Frames::event_func_19347()
{
    // event 1681_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1681_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1681_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (460))) goto event_1681_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(2);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1681_83_end: ;
}
void Frames::event_func_19348()
{
    // event 1682_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1682_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1682_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (490))) goto event_1682_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_01_01_ogg_315, 18-1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1682_83_end: ;
}
void Frames::event_func_19349()
{
    // event 1683_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1683_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1683_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (570))) goto event_1683_83_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1683_83_end: ;
}
void Frames::event_func_19350()
{
    // event 1684_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1684_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1684_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (580))) goto event_1684_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (680))) goto event_1684_83_end;
        if (!((global_values->get(3)%math_helper%6) == (1))) goto event_1684_83_end;
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
    }
    event_1684_83_end: ;
}
void Frames::event_func_19351()
{
    // event 1685_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1685_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1685_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (590))) goto event_1685_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (680))) goto event_1685_83_end;
        if (!((global_values->get(3)%math_helper%6) == (4))) goto event_1685_83_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1685_83_0_end;
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
        dynamic_1685_83_0_end: ;
    }
    event_1685_83_end: ;
}
void Frames::event_func_19352()
{
    // event 1686_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1686_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1686_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (700))) goto event_1686_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1686_83_end: ;
}
void Frames::event_func_19353()
{
    // event 1687_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1687_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1687_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (700))) goto event_1687_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(npcking_4099_instances, default_active_instance))->get_x()-500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(6350);
        }
            group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1 = false;
    
        enemyelite_2510_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(brevon_3683_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -48, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -88, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -118, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -158, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -188, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -228, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + -268, parent->y + 0), parent->layer);
                enemyelite_2510_instances.add_back();
            }
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_frame(randrange(6));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1560);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1687_83_end: ;
}
void Frames::event_func_19354()
{
    // event 1688_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1688_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1688_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1688_83_end: ;
}
void Frames::event_func_19355()
{
    // event 1689_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1689_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1689_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1689_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1689_83_end: ;
}
void Frames::event_func_19356()
{
    // event 1690_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1690_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1690_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1690_83_end: ;
}
void Frames::event_func_19357()
{
    // event 1691_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1691_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1691_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1691_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+3, ((Active*)get_instance(npcking_4099_instances, default_active_instance))->get_x()));
    }
    event_1691_83_end: ;
}
void Frames::event_func_19358()
{
    // event 1692_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1692_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1692_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1692_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Active*)get_instance(dialogarrow_568_instances))->set_y(-32);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
        ((Active*)get_instance(dialogbox_566_instances))->set_y(-32);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(-32);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_y(-32);
    }
    event_1692_83_end: ;
}
void Frames::event_func_19359()
{
    // event 1693_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1693_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1693_83_end;
        if (not_always_1693_83 > loop_count) {
            not_always_1693_83 = loop_count + 2;
            goto event_1693_83_end;
        }
        not_always_1693_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1693_83_end: ;
}
void Frames::event_func_19360()
{
    // event 1694_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1694_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1694_83_end;
        if (not_always_1694_83 > loop_count) {
            not_always_1694_83 = loop_count + 2;
            goto event_1694_83_end;
        }
        not_always_1694_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1694_83_end: ;
}
void Frames::event_func_19361()
{
    // event 1695_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1695_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1695_83_end;
        if (!(!media.is_channel_playing(20-1))) goto event_1695_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.enable(0);
    }
    event_1695_83_end: ;
}
void Frames::event_func_19362()
{
    // event 1696_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1696_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1696_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1696_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1696_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1696_83_end: ;
}
void Frames::event_func_19363()
{
    // event 1697_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1697_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1697_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (32))) goto event_1697_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1697_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1697_83_end: ;
}
void Frames::event_func_19364()
{
    // event 1698_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1698_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1698_83_end;
        if (!((media.get_channel_position(-1 +20)) > (3500))) goto event_1698_83_end;
        if (not_always_1698_83 > loop_count) {
            not_always_1698_83 = loop_count + 2;
            goto event_1698_83_end;
        }
        not_always_1698_83 = loop_count + 2;
        media.play_id(SOUND_UNSHEATHE_367, -1, 1);
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        npckingaxe_4097_instances.clear_selection();
        for (ObjectIterator it(npckingaxe_4097_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 3);
    }
    event_1698_83_end: ;
}
void Frames::event_func_19365()
{
    // event 1699_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1699_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1699_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1699_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1699_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ki_ki_attack_ogg_316, 18-1);
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(0, -12);
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        FrameObject * single_instance_1699_83_0; single_instance_1699_83_0 = NULL;
        // select single: true false false
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator p_it(enemyelite_2510_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1699_83_0 == NULL)
                    single_instance_1699_83_0 = new_obj;
            }
        }
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->restore_frame();
        }
        npckingaxe_4097_instances.clear_selection();
        for (ObjectIterator it(npckingaxe_4097_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1699_83_end: ;
}
void Frames::event_func_19366()
{
    // event 1700_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1700_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1700_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0), ((Active*)get_instance(brevon_3683_instances, it.current_index, default_active_instance))->alterables->values.get(5)));
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.4, 15));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
    }
    event_1700_83_end: ;
}
void Frames::event_func_19367()
{
    // event 1701_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1701_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1701_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-3))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1701_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 4);
    }
    event_1701_83_end: ;
}
void Frames::event_func_19368()
{
    // event 1702_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1702_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1702_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1702_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+5, 1560));
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 15);
        }
    }
    event_1702_83_end: ;
}
void Frames::event_func_19369()
{
    // event 1703_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1703_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1703_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(brevon_3683_instances, default_active_instance))->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1703_83_end;
        FrameObject * single_instance_1703_83_0; single_instance_1703_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcking_4099_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + -40, parent->y + 0), parent->layer);
                if (single_instance_1703_83_0 == NULL)
                    single_instance_1703_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1703_83_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1703_83_0))->get_movement()->set_speed(50);
        ((Active*)((Active*)single_instance_1703_83_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1703_83_0))->set_y_scale(1);
    }
    event_1703_83_end: ;
}
void Frames::event_func_19370()
{
    // event 1704_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1704_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1704_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(brevon_3683_instances, default_active_instance))->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1704_83_end;
        FrameObject * single_instance_1704_83_0; single_instance_1704_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcking_4099_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + -40, parent->y + 0), parent->layer);
                if (single_instance_1704_83_0 == NULL)
                    single_instance_1704_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1704_83_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1704_83_0))->get_movement()->set_speed(60);
        ((Active*)((Active*)single_instance_1704_83_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1704_83_0))->set_y_scale(1.5);
    }
    event_1704_83_end: ;
}
void Frames::event_func_19371()
{
    // event 1705_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1705_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1705_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(brevon_3683_instances, default_active_instance))->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1705_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        FrameObject * single_instance_1705_83_0; single_instance_1705_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcking_4099_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + -40, parent->y + 0), parent->layer);
                if (single_instance_1705_83_0 == NULL)
                    single_instance_1705_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1705_83_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1705_83_0))->get_movement()->set_speed(70);
        ((Active*)((Active*)single_instance_1705_83_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1705_83_0))->set_y_scale(2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 5);
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
    }
    event_1705_83_end: ;
}
void Frames::event_func_19372()
{
    // event 1706_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1706_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1706_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1706_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1706_83_end;
        FrameObject * single_instance_1706_83_0; single_instance_1706_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevon_3683_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1706_83_0 == NULL)
                    single_instance_1706_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1706_83_0))->set_y_scale(0.5);
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(4, -10);
            ((Active*)*it)->move_front();
        }
        {
            FrameObject * parent = ((Active*)get_single(npcking_4099_instances));
            if (parent == NULL) goto pos_end_1706_83_1;
            ((Active*)get_instance(player_389_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1706_83_1: ;
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(16, 1);
            ((Active*)*it)->alterables->values.set(13, 1);
        }
        spread_value(enemyelitemask_2511_instances, 19, 0);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, ((Active*)*it)->alterables->values.get(19)*4-12);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1 = true;
        }
    }
    event_1706_83_end: ;
}
void Frames::event_func_19373()
{
    // event 1707_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1707_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1707_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(4), ((Active*)*it)->alterables->values.get(5)));
            ((Active*)*it)->alterables->values.add(4, 0.4);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1707_83_end: ;
}
void Frames::event_func_19374()
{
    // event 1708_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1708_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1708_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1708_83_end: ;
}
void Frames::event_func_19375()
{
    // event 1709_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1709_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1709_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        {
            FrameObject * parent = ((Active*)get_instance(npcking_4099_instances));
            if (parent == NULL) goto pos_end_1709_83_0;
            ((Active*)get_instance(player_389_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1709_83_0: ;
        }
    }
    event_1709_83_end: ;
}
void Frames::event_func_19376()
{
    // event 1710_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1710_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1710_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(13))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1710_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 5);
        }
    }
    event_1710_83_end: ;
}
void Frames::event_func_19377()
{
    // event 1711_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1711_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1711_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1711_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_1711_83_end: ;
}
void Frames::event_func_19378()
{
    // event 1712_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1712_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1712_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1712_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 0);
        }
    }
    event_1712_83_end: ;
}
void Frames::event_func_19379()
{
    // event 1713_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1713_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1713_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -0.4);
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1713_83_end: ;
}
void Frames::event_func_19380()
{
    // event 1714_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1714_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1714_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_1714_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
    }
    event_1714_83_end: ;
}
void Frames::event_func_19381()
{
    // event 1716_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1716_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcking_4099_instances, default_active_instance))->get_x()-16))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1716_83_end;
        if (once_condition_1716_83) goto event_1716_83_end;
        once_condition_1716_83 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_ki_ki_hurt_ogg_317, 27-1);
        media.lock(27-1);
    }
    event_1716_83_end: ;
}
void Frames::event_func_19382()
{
    // event 1717_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1717_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcking_4099_instances, default_active_instance))->get_x()-16))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1717_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1717_83_0; single_instance_1717_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1717_83_0 == NULL)
                    single_instance_1717_83_0 = new_obj;
            }
        }
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(9);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 2);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1717_83_end: ;
}
void Frames::event_func_19383()
{
    // event 1718_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1718_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(9))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1718_83_end;
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1718_83_end: ;
}
void Frames::event_func_19384()
{
    // event 1719_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1719_83_end;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(9))) { it.deselect(); continue; }
        }
        if (!npcking_4099_instances.has_selection()) goto event_1719_83_end;
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1719_83_end: ;
}
void Frames::event_func_19385()
{
    // event 1720_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1720_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1720_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1720_83_end;
        if (!((enemytrooperlaser_2508_instances.size()) == (0))) goto event_1720_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
            group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1 = false;
    
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.unlock(27-1);
    }
    event_1720_83_end: ;
}
void Frames::event_func_19386()
{
    // event 1721_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1721_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1721_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcking_4099_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1721_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1721_83_end: ;
}
void Frames::event_func_19387()
{
    // event 1722_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1722_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1722_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npcking_4099_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1722_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1722_83_end: ;
}
void Frames::event_func_19388()
{
    // event 1723_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1723_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1723_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1723_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(20);
        }
    }
    event_1723_83_end: ;
}
void Frames::event_func_19389()
{
    // event 1724_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1724_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1724_83_end;
        if (!((media.get_channel_position(-1 +20)) > (5500))) goto event_1724_83_end;
        if (not_always_1724_83 > loop_count) {
            not_always_1724_83 = loop_count + 2;
            goto event_1724_83_end;
        }
        not_always_1724_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 24);
    }
    event_1724_83_end: ;
}
void Frames::event_func_19390()
{
    // event 1725_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1725_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1725_83_end;
        if (!((media.get_channel_position(-1 +20)) > (6000))) goto event_1725_83_end;
        if (not_always_1725_83 > loop_count) {
            not_always_1725_83 = loop_count + 2;
            goto event_1725_83_end;
        }
        not_always_1725_83 = loop_count + 2;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
        }
    }
    event_1725_83_end: ;
}
void Frames::event_func_19391()
{
    // event 1726_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1726_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1726_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1726_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1726_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(15);
            ((Active*)*it)->set_x(frame_left()-50);
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_layer(5-1);
        }
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1726_83_end: ;
}
void Frames::event_func_19392()
{
    // event 1727_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1727_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1727_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1727_83_end: ;
}
void Frames::event_func_19393()
{
    // event 1728_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1728_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1728_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_1728_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(18);
        }
    }
    event_1728_83_end: ;
}
void Frames::event_func_19394()
{
    // event 1729_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1729_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1729_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1729_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1729_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
        }
    }
    event_1729_83_end: ;
}
void Frames::event_func_19395()
{
    // event 1730_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1730_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1730_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1730_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1730_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1730_83_end: ;
}
void Frames::event_func_19396()
{
    // event 1731_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1731_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1731_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (37))) goto event_1731_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (38))) goto event_1731_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1731_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1731_83_end: ;
}
void Frames::event_func_19397()
{
    // event 1732_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1732_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1732_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+2, ((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()));
    }
    event_1732_83_end: ;
}
void Frames::event_func_19398()
{
    // event 1733_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1733_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1733_83_end;
        if (!((media.get_channel_position(-1 +20)) > (6000))) goto event_1733_83_end;
        if (not_always_1733_83 > loop_count) {
            not_always_1733_83 = loop_count + 2;
            goto event_1733_83_end;
        }
        not_always_1733_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 32);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
    }
    event_1733_83_end: ;
}
void Frames::event_func_19399()
{
    // event 1734_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1734_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1734_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1734_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1734_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1734_83_end: ;
}
void Frames::event_func_19400()
{
    // event 1735_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1735_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1735_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1735_83_end;
        if (not_always_1735_83 > loop_count) {
            not_always_1735_83 = loop_count + 2;
            goto event_1735_83_end;
        }
        not_always_1735_83 = loop_count + 2;
        npcking_4099_instances.clear_selection();
        for (ObjectIterator it(npcking_4099_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        media.play_id(SOUND_BEHEADING_368, -1, 1);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        {
            loop_head_running = true;
            int times = int(16);
            loop_head_index = 0;
            while (loop_head_index < times) {
                loop_head_83();
                if (!loop_head_running) break;
                loop_head_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
    }
    event_1735_83_end: ;
}
void Frames::event_func_19401()
{
    // event 1737_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1737_83_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1+((Active*)*it)->get_movement()->get_speed()*0.2, 0);
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1737_83_end: ;
}
void Frames::event_func_19402()
{
    // event 1738_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1738_83_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+12))) { it.deselect(); continue; }
        }
        if (!effectsplayersplode_310_instances.has_selection()) goto event_1738_83_end;
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1738_83_end: ;
}
void Frames::event_func_19403()
{
    // event 1739_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1739_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1739_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1739_83_end: ;
}
void Frames::event_func_19404()
{
    // event 1740_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1740_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1740_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1740_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_01_02_ogg_318, 18-1);
    }
    event_1740_83_end: ;
}
void Frames::event_func_19405()
{
    // event 1741_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1741_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1741_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1741_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (90))) goto event_1741_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
    }
    event_1741_83_end: ;
}
void Frames::event_func_19406()
{
    // event 1742_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1742_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1742_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1742_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(20);
        }
        media.play_id(SOUND_BREVON_CHUCKLE_369, -1, 1);
    }
    event_1742_83_end: ;
}
void Frames::event_func_19407()
{
    // event 1743_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1743_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1743_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (190))) goto event_1743_83_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(18);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1743_83_end: ;
}
void Frames::event_func_19408()
{
    // event 1744_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1744_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1744_83_end;
        if (!((media.get_channel_position(-1 +20)) > (700))) goto event_1744_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.enable(0);
    }
    event_1744_83_end: ;
}
void Frames::event_func_19409()
{
    // event 1745_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1745_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1745_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1745_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1745_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        FrameObject * single_instance_1745_83_0; single_instance_1745_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcdail_4017_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -32), parent->layer);
                if (single_instance_1745_83_0 == NULL)
                    single_instance_1745_83_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_1745_83_0)->set_shader(Render::ADDITIVE);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->set_direction(16);
        }
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1745_83_end: ;
}
void Frames::event_func_19410()
{
    // event 1746_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1746_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1746_83_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12);
        }
        FrameObject * single_instance_1746_83_0; single_instance_1746_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcdail_4017_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1746_83_0 == NULL)
                    single_instance_1746_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1746_83_0))->set_direction(10);
    }
    event_1746_83_end: ;
}
void Frames::event_func_19411()
{
    // event 1747_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1747_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (16))) goto event_1747_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (17))) goto event_1747_83_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1747_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1747_83_end;
        FrameObject * single_instance_1747_83_0; single_instance_1747_83_0 = pick_random(enemyelite_2510_instances);
        if (single_instance_1747_83_0 == NULL) goto event_1747_83_end;
        ((Active*)((Active*)single_instance_1747_83_0))->force_animation(10);
    }
    event_1747_83_end: ;
}
void Frames::event_func_19412()
{
    // event 1748_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1748_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1748_83_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()-50))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto event_1748_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->set_direction(18);
        }
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_01_04_ogg_319, 18-1);
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(brevon_3683_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1748_83_end: ;
}
void Frames::event_func_19413()
{
    // event 1749_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1749_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1749_83_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances, it.current_index));
            if (parent == NULL) goto pos_end_1749_83_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 2, parent->get_action_y() + 42);
            pos_end_1749_83_0: ;
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1749_83_end: ;
}
void Frames::event_func_19414()
{
    // event 1750_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1750_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1750_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1750_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1750_83_end: ;
}
void Frames::event_func_19415()
{
    // event 1751_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1751_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1751_83_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1751_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1751_83_end;
        FrameObject * single_instance_1751_83_0; single_instance_1751_83_0 = pick_random(enemyelite_2510_instances);
        if (single_instance_1751_83_0 == NULL) goto event_1751_83_end;
        ((Active*)((Active*)single_instance_1751_83_0))->force_animation(11);
    }
    event_1751_83_end: ;
}
void Frames::event_func_19416()
{
    // event 1752_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1752_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1752_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1752_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1752_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1 = true;
        }
        ((Active*)get_instance(player_389_instances))->set_x(0);
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_y()-80);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(frame_left()-150);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1752_83_end: ;
}
void Frames::event_func_19417()
{
    // event 1753_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1753_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1753_83_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1753_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1753_83_end;
        FrameObject * single_instance_1753_83_0; single_instance_1753_83_0 = pick_random(enemyelitemask_2511_instances);
        if (single_instance_1753_83_0 == NULL) goto event_1753_83_end;
        ((Active*)((Active*)single_instance_1753_83_0))->alterables->values.set(16, 1);
        ((Active*)((Active*)single_instance_1753_83_0))->alterables->values.set(4, -1);
    }
    event_1753_83_end: ;
}
void Frames::event_func_19418()
{
    // event 1754_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1754_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (19))) goto event_1754_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (20))) goto event_1754_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1754_83_end: ;
}
void Frames::event_func_19419()
{
    // event 1755_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1755_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1755_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1755_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()+2);
    }
    event_1755_83_end: ;
}
void Frames::event_func_19420()
{
    // event 1756_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1756_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1756_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->get_x()) >= (((Active*)get_instance(npcdail_4017_instances, default_active_instance))->get_x()-40))) goto event_1756_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1756_83_end: ;
}
